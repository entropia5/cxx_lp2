
// format

#include <format>
#include <string>
#include <string_view>
#include <vector>
#include <numbers>

using std::format;
using std::string;
using std::vector;
using std::numbers::pi;

template <typename T>
struct Frac
{
    T n;
    T d;
};

// format specialization
template <typename T>
struct std::formatter<Frac<T>> : std::formatter<unsigned>
{
    template <typename Context>
    auto format(const Frac<T> &f, Context &ctx) const
    {
        return format_to(ctx.out(), "{}/{}", f.n, f.d);
    }
};

// format print
template <typename... Args>
constexpr void print(const std::string_view str_fmt, Args &&...args)
{
    fputs(std::vformat(str_fmt, std::make_format_args(args...)).c_str(), stdout);
}

int main()
{
    const int inta{47};
    const char *human{"earthlings"};
    const string alien{"vulcans"};
    const double dpi{pi};

    print("inta is {}\n", inta);
    print("Hello {}\n", human);

    print("Hello {} we are {}\n", human, alien);
    print("Hello {1} we are {0}\n", human, alien);

    print("π is {}\n", dpi);
    print("π is {:.5}\n", dpi);
    print("inta is {1:}, π is {0:.5}\n", dpi, inta);

    print("inta is [{:*<10}]\n", inta);
    print("inta is [{:0>10}]\n", inta);
    print("inta is [{:^10}]\n", inta);
    print("inta is [{:_^10}]\n", inta);

    print("{:>8}: [{:04X}]\n", "Hex", inta);
    print("{:>8}: [{:4o}]\n", "Octal", inta);
    print("{:>8}: [{:4d}]\n", "Decimal", inta);

    Frac<long> n{3, 5};
    print("Frac: {}\n", n);
}

/**

 ОПИСАНИЕ:
 * Этот файл показывает, как форматировать вывод данных в C++20 с помощью функции std::format, которая работает подобно printf, но безопаснее и гибче.

 * ОСНОВНЫЕ КОНЦЕПЦИИ:
 *
 * 1. ПОЛЬЗОВАТЕЛЬСКИЙ ТИП Frac<T>:
 *    - Структура для представления дроби (числитель n / знаменатель d)
 *    - Пример собственного типа данных
 *
 * 2. СПЕЦИАЛИЗАЦИЯ std::formatter:
 *    - Позволяет определить, как форматировать свой тип (Frac)
 *    - Метод format() указывает, как преобразовать объект в строку
 *    - В примере: Frac выводится как "числитель/знаменатель" (например: 3/5)
 *
 * 3. ФУНКЦИЯ print():
 *    - Вспомогательная функция для вывода отформатированных строк
 *    - Использует std::vformat для подстановки значений в шаблон строки
 *    - Работает как printf, но типобезопасна
 *
 * ПРИМЕРЫ ФОРМАТИРОВАНИЯ:
 *
 * a) БАЗОВОЕ ФОРМАТИРОВАНИЕ:
 *    - "{}" - просто выводит значение
 *    - "{0}" - выводит аргумент 0
 *    - "{1}" - выводит аргумент 1
 *
 * b) ТОЧНОСТЬ И ДЕСЯТИЧНЫЕ МЕСТА:
 *    - "{:.5}" - выводит число с 5 значащими цифрами
 *
 * c) ВЫРАВНИВАНИЕ И ЗАПОЛНЕНИЕ:
 *    - "{:*<10}" - левое выравнивание, заполнение звёздочками до 10 символов
 *    - "{:0>10}" - правое выравнивание, заполнение нулями до 10 символов
 *    - "{:^10}"  - центрирование, заполнение пробелами до 10 символов
 *    - "{:_^10}" - центрирование, заполнение подчёркиванием до 10 символов
 *
 * d) СИСТЕМЫ СЧИСЛЕНИЯ:
 *    - "{:04X}" - шестнадцатеричное (HEX), 4 символа, заполнение нулями
 *    - "{:4o}"  - восьмеричное (OCTAL), 4 символа
 *    - "{:4d}"  - десятичное (DECIMAL), 4 символа
 *
 * ПРАКТИЧЕСКОЕ ПРИМЕНЕНИЕ:
 * Этот код полезен для:
 * - Красивого вывода информации в консоль
 * - Форматирования чисел в таблицы
 * - Работы с пользовательскими типами данных
 * - Замены старого printf на современный безопасный способ
 */
