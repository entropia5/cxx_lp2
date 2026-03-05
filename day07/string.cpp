// string

#include <format>
#include <iostream>
#include <string>

using std::cout;
using std::format;
using std::string;

int main()
{
    string s1{"This is a string"};

    // size & length
    cout << format("length is same as size: {}\n", s1.length());
    cout << format("size is same as length: {}\n", s1.size());

    // + for concatenation
    cout << "concatenated strings: ";
    string s2 = s1 + ":" + "this is also a string";
    cout << s2;
    cout << '\n';

    // compare
    cout << format("is s1 == s2? {}\n", s1 == s2 ? "yes" : "no");
    cout << "copy-assign s2 = s1\n";
    s2 = s1;
    cout << format("is s1 == s2? {}\n", s1 == s2 ? "yes" : "no");

    string otherstr{"other string"};
    cout << format("is s1 > otherstr? {}\n", s1 > otherstr ? "yes" : "no");
    cout << format("is s1 < otherstr? {}\n", s1 < otherstr ? "yes" : "no");
    cout << format("is otherstr > s1? {}\n", otherstr > s1 ? "yes" : "no");
    cout << format("is otherstr < s1? {}\n", otherstr < s1 ? "yes" : "no");
    cout << '\n';

    // iteration
    cout << "each character: ";
    for (const auto &c : s1)
    {
        cout << format("{} ", c);
    }
    cout << '\n';

    // insert & erase with an iterator
    s1.insert(s1.begin() + 5, 'X');
    cout << format("s1 after insert: {}\n", s1);

    s1.erase(s1.begin() + 5);
    cout << format("s1 after erase: {}\n", s1);
    cout << '\n';

    // replace
    s1.replace(5, 2, "ain't");
    cout << format("s1 after replace: {}\n", s1);

    // substr
    cout << format("substr: {}\n", s1.substr(5, 5));

    // find
    size_t pos = s1.find("s");
    cout << format("find first \"s\" in s1 (pos): {}\n", pos);

    // rfind
    pos = s1.rfind("s");
    cout << format("find last \"s\" in s1 (pos): {}\n", pos);
}

/*

ОСНОВЫ РАБОТЫ СО СТРОКАМИ

// Подключаем необходимые библиотеки
#include <format>      // Для форматированного вывода
#include <iostream>    // Для ввода-вывода (cout)
#include <string>      // Для работы со строками

using std::cout;       // Используем cout из пространства std
using std::format;     // Используем format для красивого вывода
using std::string;     // Используем класс string

int main()
{
    //  СОЗДАНИЕ СТРОК
    string s1{"This is a string"};  // Создаём строку s1

    // ===== РАЗМЕР СТРОКИ =====
    // length() и size() - синонимы, оба показывают количество символов
    cout << format("length is same as size: {}\n", s1.length());
    cout << format("size is same as length: {}\n", s1.size());

    // ===== КОНКАТЕНАЦИЯ (ОБЪЕДИНЕНИЕ) СТРОК =====
    // Используем оператор + для склеивания строк
    cout << "concatenated strings: ";
    string s2 = s1 + ":" + "this is also a string";
    cout << s2;
    cout << '\n';

    // ===== СРАВНЕНИЕ СТРОК =====
    // Оператор == проверяет, равны ли строки
    cout << format("is s1 == s2? {}\n", s1 == s2 ? "yes" : "no");

    // Присваивание: копируем содержимое s1 в s2
    cout << "copy-assign s2 = s1\n";
    s2 = s1;
    cout << format("is s1 == s2? {}\n", s1 == s2 ? "yes" : "no");

    // Сравнение строк по лексикографическому порядку (как в словаре)
    string otherstr{"other string"};
    cout << format("is s1 > otherstr? {}\n", s1 > otherstr ? "yes" : "no");
    cout << format("is s1 < otherstr? {}\n", s1 < otherstr ? "yes" : "no");
    cout << format("is otherstr > s1? {}\n", otherstr > s1 ? "yes" : "no");
    cout << format("is otherstr < s1? {}\n", otherstr < s1 ? "yes" : "no");
    cout << '\n';

    // ===== ИТЕРАЦИЯ ПО СИМВОЛАМ =====
    // Проходим по каждому символу в строке (for-each цикл)
    cout << "each character: ";
    for (const auto &c : s1)  // c - ссылка на каждый символ
    {
        cout << format("{} ", c);  // Выводим каждый символ
    }
    cout << '\n';

    // ===== ВСТАВКА СИМВОЛА =====
    // insert() вставляет символ в указанную позицию
    // s1.begin() + 5 = позиция после 5-го символа
    s1.insert(s1.begin() + 5, 'X');
    cout << format("s1 after insert: {}\n", s1);

    // ===== УДАЛЕНИЕ СИМВОЛА =====
    // erase() удаляет символ в указанной позиции
    s1.erase(s1.begin() + 5);
    cout << format("s1 after erase: {}\n", s1);
    cout << '\n';

    // ===== ЗАМЕНА ЧАСТИ СТРОКИ =====
    // replace(позиция, количество_символов, новая_строка)
    s1.replace(5, 2, "ain't");  // Заменяем 2 символа с позиции 5
    cout << format("s1 after replace: {}\n", s1);

    // ===== ПОЛУЧЕНИЕ ПОДСТРОКИ =====
    // substr(начало, длина) возвращает часть строки
    cout << format("substr: {}\n", s1.substr(5, 5));

    // ===== ПОИСК ПЕРВОГО ВХОЖДЕНИЯ =====
    // find() ищет первое вхождение подстроки и возвращает её позицию
    size_t pos = s1.find("s");  // size_t - специальный тип для индексов
    cout << format("find first \"s\" in s1 (pos): {}\n", pos);

    // ===== ПОИСК ПОСЛЕДНЕГО ВХОЖДЕНИЯ =====
    // rfind() (reverse find) ищет с конца строки
    pos = s1.rfind("s");
    cout << format("find last \"s\" in s1 (pos): {}\n", pos);

    return 0;  // Завершение программы успешно
}

// ===== ОЧЕНЬ ПОЛЕЗНЫЕ ОПЕРАЦИИ СО СТРОКАМИ =====
// 1. length() / size()         → длина строки
// 2. operator+                 → конкатенация
// 3. operator==, <, >          → сравнение
// 4. insert()                  → вставка
// 5. erase()                   → удаление
// 6. replace()                 → замена
// 7. substr()                  → подстрока
// 8. find() / rfind()          → поиск
// 9. for(const auto &c : str)  → перебор символов

*/