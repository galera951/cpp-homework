## Защита от повторного включения
`MyClass.hpp`:
```cpp
#ifndef MyClass
#define MyClass

// Тело заголовочника

#endif
```
или
```cpp
#pragma once

// Тело заголовочника

```

## Специальные функции-члены
- Конструктор по-умолчанию;
- Деструктор

- Копирующий оператор присваивания (=)
- Копирующий конструктор

- Перемещающий оператор (=)
- Перемещающий конструктор

## Перегрузка операторов
Инфиксная и функциональная формы вызова

`=, [], ->, ()` -- перегружаются только как функции-члены

## Семантика перемещения

`semantica.cpp`