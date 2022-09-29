﻿#include <iostream>
#include <string> // Эта библиотека нужна для использования строк в стиле C++

int main()
{
    // Способы создания и инициализации переменных-строк s_1, s_2, s_3, s_4, s_5:
    std::string s_1 = "Hello, ";
    std::string s_2("World!");
    std::string s_3{ "What a wonderful day!" };
    std::string s_4(s_3); // s_4 - копия строки s_3
    std::string s_5; // пустая строка

    // Вывод содержимого строк в консоли:
    std::cout << "s_1: " << s_1 << std::endl;
    std::cout << "s_2: " << s_2 << std::endl;
    std::cout << "s_3: " << s_3 << std::endl;
    std::cout << "s_4: " << s_4 << std::endl;
    std::cout << "s_5: " << s_5 << std::endl;

    std::cout << std::endl;

    /*******************************************************************************************
    * Ввести строку с клавиатуры можно так:
    *   std::cin >> s_1;
    * Но так строка будет считана только до ПЕРВОГО ПРОБЕЛА!
    * Считать строку до символа перевода строки '\n' можно функцией getline():
    *   std::getline(std::cin; s_1);
    * Перед этим стоит убедиться, что в потоке ввода не осталось символов перевода строки '\n'.
    * Такое случается, если, например, до этого вводились числовые данные:
    *   int n; std::cin >> n;
    * Если пользователь введёт число 123, то реально он введёт строку "123\n",
    * cin заберёт из потока число 123, а '\n' - оставит в потоке ввода.
    * В таком случае последующий getline() прочитает этот '\n' и получит пустую строку.
    * Удалить из потока ввода однократный пробел можно так:
    *   std::cin >> std::ws;
    ********************************************************************************************/

    // Узнать длины строк можно при помощи функции-члена size():
    std::cout << "s_1.size(): " << s_1.size() << std::endl;
    std::cout << "s_2.size(): " << s_2.size() << std::endl;
    std::cout << "s_3.size(): " << s_3.size() << std::endl;
    std::cout << "s_4.size(): " << s_4.size() << std::endl;
    std::cout << "s_5.size(): " << s_5.size() << std::endl;

    std::cout << std::endl;

    // Пуста ли строка? Функция-член empty() вернёт true, если пуста и false, если нет:
    std::cout << "s_4.empty(): " << std::boolalpha << s_4.empty() << std::endl;
    std::cout << "s_5.empty(): " << std::boolalpha << s_5.empty() << std::endl;

    std::cout << std::endl;

    // Строки можно присваивать друг другу, как обычные переменные:
    s_5 = s_3;
    std::cout << "s_5 = s_3; s_5: " << s_5 << std::endl;

    std::cout << std::endl;

    // Оператор конкатенации '+' создаёт новую строку, состоящую из символов первой строки c дописанными после них символами второй строки:
    std::cout << "s_1 + s_2: " << s_1 + s_2 << std::endl;

    std::cout << std::endl;
    // Существует присваивающая версия этого оператора:
    // s_1 += s_2;

    // Строки можно сравнивать операторами ==, != посимвольно:
    std::cout << "s_1 == s_2: " << (s_2 == s_1) << std::endl;
    // И сравнивать лексикографически операторами >, <, >=, <=:
    std::cout << "s_1 < s_3: " << (s_1 < s_3) << std::endl;

    std::cout << std::endl;

    // Со строками можно работать как с массивами символов:
    std::cout << "s_1[0]: " << s_1[0] << std::endl;

    std::cout << std::endl;

    // Из строки можно выделить подстроку, указав индекс первого элемента подстроки и ее длину:
    std::cout << "s_1.substr(0, 3): " << s_1.substr(0, 3) << std::endl;
    std::cout << "s_1.substr(1, 2): " << s_1.substr(1, 2) << std::endl;
    std::cout << "s_1.substr(0, s_1.size()-1): " << s_1.substr(0, s_1.size() - 1) << std::endl;
    std::cout << "s_1.substr(1): " << s_1.substr(1) << std::endl;

    std::cout << std::endl;

    // Функция-член find() ищет в данной строке первое вхождение другой строки.
    // Возвращается индекс первого символа, начиная с которого далее идет подстрока, равная искомой.
    std::cout << "s_3.find(\"day\"): " << s_3.find("day") << std::endl;
    // Если эта строка не найдена, то возвращается константа std::string::npos:
    std::cout << "s_3.find(\"hello\"): " << s_3.find("hello") << std::endl;
    // npos - большое беззнаковое целое число, к которому приводится чило (-1)
    // Можно указать позицию, начиная с которой нужно искать (по умолчанию с 0):
    std::cout << "s_3.find(\"a\", 8): " << s_3.find("a", 8) << std::endl;

    std::cout << std::endl;

    // Функция-член replace() заменяет фрагмент строки на несколько равных символов, другую строку или фрагмент другой строки.
    // Аргументы: первый - c какого места начинается замена, второй - сколько символов заменяется, третий - на что заменяется.
    std::cout << "s_4.replace(7, 9, \"terrible\"): " << s_4.replace(7, 9, "terrible") << std::endl;
    std::cout << std::endl;

    // Можно сделать из строки в стиле C++ строку в стиле С с помощью c_str() (если это зачем-то вдруг понадобилось):
    const char* cstr = s_3.c_str();
    printf("s_3.c_str(): %s", cstr);
    std::cout << std::endl;

    return EXIT_SUCCESS;
}
