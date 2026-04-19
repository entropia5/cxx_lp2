/**
 * vector.cpp
 *  Демонстрация основных операций с контейнером std::vector в C++
 *
 * Этот файл содержит примеры использования std::vector, включая:
 * - Инициализацию вектора из списка инициализации
 * - Доступ к элементам (front(), back(), operator[], at())
 * - Итерацию через итераторы и range-based for loop
 * - Модификацию вектора (insert(), erase(), push_back())
 * - Создание вектора из C-массива
 * - Работу с vector<string>
 *
 * @author entropia
 * @date 2026
 * @version 1.1
 */

#include <format>
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::format;
using std::vector;

int main()
{
    cout << "vector from initializer list:\n";
    vector<int> vi1{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << format("size: {}\n", vi1.size());
    cout << format("front: {}\n", vi1.front());
    cout << format("back: {}\n", vi1.back());
    cout << '\n';

    // iterator
    cout << "iterator:\n";
    auto itbegin = vi1.begin();
    auto itend = vi1.end();
    for (auto it = itbegin; it < itend; ++it)
    {
        cout << format("{} ", *it);
    }
    cout << '\n';

    cout << format("element 5: {}\n", vi1[5]);
    cout << format("element 5: {}\n", vi1.at(5));

    cout << "range-based for loop:\n";
    for (const auto &i : vi1)
    {
        cout << format("{} ", i);
    }
    cout << "\n\n";

    cout << "insert 42 at begin + 5:\n";
    vi1.insert(vi1.begin() + 5, 42);
    cout << format("size: {}\n", vi1.size());
    cout << format("element 5: {}\n", vi1.at(5));

    cout << "erase at begin + 5:\n";
    vi1.erase(vi1.begin() + 5);
    cout << format("size: {}\n", vi1.size());
    cout << format("element 5: {}\n", vi1.at(5));

    cout << "push_back 47:\n";
    vi1.push_back(47);
    cout << format("size: {}\n", vi1.size());
    cout << format("vi1.back(): {}\n", vi1.back());
    cout << '\n';

    // from C-array
    const size_t size{10};
    int ia[size]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "vector from C-array:\n";
    vector<int> vi2(ia, ia + size);
    for (const auto &i : vi2)
    {
        cout << format("{} ", i);
    }
    cout << "\n\n";

    // vector of strings
    cout << "vector of strings:" << std::endl;
    vector<std::string> vs{"one", "two", "three", "four", "five"};
    for (const auto &v : vs)
    {
        cout << format("{}\n", v);
    }
}

/*


 * ШАГ 1: ВКЛЮЧЕНИЕ БИБЛИОТЕК
 * - <format> - для форматирования строк (как printf, но безопаснее)
 * - <iostream> - для вывода на экран (cout)
 * - <string> - для работы со строками
 * - <vector> - для работы с динамическими массивами
 *
 * ШАГ 2: ИНИЦИАЛИЗАЦИЯ ВЕКТОРА ИЗ СПИСКА
 * - vector<int> vi1{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 * - Создаём вектор целых чисел и заполняем его 10 элементами
 * - Вектор автоматически управляет памятью (динамический размер)
 *
 * ШАГ 3: ДОСТУП К ЭЛЕМЕНТАМ
 * - vi1.size() - возвращает количество элементов (10)
 * - vi1.front() - возвращает первый элемент (1)
 * - vi1.back() - возвращает последний элемент (10)
 *
 * ШАГ 4: ИТЕРАЦИЯ С ПОМОЩЬЮ ИТЕРАТОРОВ
 * - auto it = vi1.begin() - указатель на начало вектора
 * - auto it = vi1.end() - указатель на конец вектора (за последний элемент)
 * - *it - разыменование итератора, получение значения
 * - ++it - переход к следующему элементу
 *
 * ШАГ 5: ДОСТУП ПО ИНДЕКСУ
 * - vi1[5] - прямой доступ (не проверяет границы, быстро)
 * - vi1.at(5) - безопасный доступ (проверяет границы, выбросит исключение)
 *
 * ШАГ 6: RANGE-BASED FOR LOOP (современный способ)
 * - for (const auto &i : vi1) - проходит по всем элементам
 * - const auto &i - ссылка на элемент (не копирует, безопаснее)
 *
 * ШАГ 7: ВСТАВКА ЭЛЕМЕНТА
 * - vi1.insert(vi1.begin() + 5, 42)
 * - Вставляет 42 на позицию 5
 * - Все элементы после позиции сдвигаются вправо
 * - Размер вектора увеличивается на 1
 *
 * ШАГ 8: УДАЛЕНИЕ ЭЛЕМЕНТА
 * - vi1.erase(vi1.begin() + 5)
 * - Удаляет элемент на позиции 5
 * - Все элементы после позиции сдвигаются влево
 * - Размер вектора уменьшается на 1
 *
 * ШАГ 9: ДОБАВЛЕНИЕ В КОНЕЦ
 * - vi1.push_back(47)
 * - Добавляет 47 в конец вектора
 * - Очень быстрая операция (обычно O(1))
 *
 * ШАГ 10: СОЗДАНИЕ ВЕКТОРА ИЗ C-МАССИВА
 * - int ia[size]{...} - обычный C-массив на стеке
 * - vector<int> vi2(ia, ia + size)
 * - Конструктор принимает два итератора (начало и конец)
 * - vi2 получает копию всех данных из массива ia
 *
 * ШАГ 11: ВЕКТОР СТРОК
 * - vector<std::string> vs{...}
 * - Вектор может содержать не только числа, но и строки
 * - Каждый элемент - это отдельный объект std::string
 *
 * ИТОГ:
 * Эта программа демонстрирует основные операции с vector:
 * создание, доступ, итерацию, вставку, удаление и работу с разными типами.
 */