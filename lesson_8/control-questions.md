## Контрольные вопросы к восьмому заданию
### Перечислите и прокомментируйте основные варианты отношений между классами.

1. Композиция
   - A часть B
   - A под управлением B
   - A не знает о B
2. Агрегация
   - A часть B1, B2, ...
   - A не управяется ими
   - A не знает о них
3. Ассоциация
   - A и B -- независимые объекты
   - используют друг друга
4. Зависимость
   - использование без хранения связи с объектом

### Какие существуют разновидности наследования и для чего они предназначены?

- `public` -- открытая, спецификаторы доступа к родительским данным остаются такими же (`private` остаётся в родительском классе в любом случае).
- `private` -- закрытая, все доступные (`public` и `protected`) данные родителя переносятся в область `private`.
- `protected` -- защищённая, все доступные (`public` и `protected`) данные родителя переносятся в область `protected`.

### Что необходимо для корректного функционирования механизма виртуальных функций?

1. Требуетя полное совпадение сигнатур функций
2. Недопускается использование в конструкторах и деструкторах
3. Рекомендуется использование спецификаторов `override` и `final`, которые призваны улучшить читабельность кода

### Какую проблему решают виртуальные базовые классы при множественном наследовании?

При множественном наследовании виртуальные базовые классы решают проблему двусмысленности (англ. *ambiguous*), так как при обычном множественном наследовании область с базовым классом как бы дублируется и при обращении к этой области через экземпляр наследуемого класса компилятор не может понять, куда именно обращаться.

Как должно себя вести обычное множественное наследование:
```
  A
 / \
B   C
 \ /
  D
```

Как оно ведёт себя на самом деле:
```
A   A
|   |
B   C
 \ /
  D
```

### Перечислите и прокомментируйте основные категории паттернов проектирования.

1. **Порождающие паттерны** призваны заботиться о гибком создании объектов без внесения в программу лишних зависимостей.
2. **Структурные паттерны** показывают различные способы построения связей между объектами.
3. **Паттерны поведения** обеспечивают эффективную коммуникацию между объектами.