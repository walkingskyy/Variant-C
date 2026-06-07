
EN
Translated to english by machine, may contain inaccuracies

Variant Library for the C Programming Language
Created on 06/05/2026, repository: https:/github.com/walkingskyy/Variant-C

```cpp 
// Structure that stores the necessary data types
struct Variant variant;



// Function that sets a value of a specific type to the Variant
// variant - Variant to write the value to
// Type - name of the type being assigned
// t - the value of type Typename to be written
void variant_setType(struct Variant* variant, Type t) {
    variant->type = VARIANT_TYPE;
    variant->t = t;
} 
variant_setInt(&variant, 10);
variant_setChar(&variant, 'A');
variant_setFloat(&variant, 5.5f);
variant_setDouble(&variant, 1.23456789);
variant_setPointer(&variant, pointer); // under development



// Function that checks if the Variant's type matches the specified one
void variant_isType(struct Variant variant) {
    return(variant.type == VARIANT_TYPE);
} 



// Function that returns the value of the Variant
Type variant_getType(struct Variant* variant) {
    return(variant_isType(variant) ? variant.t : 0);
} 
variant_getInt(variant);
variant_getChar(variant);
variant_getFloat(variant);
variant_getDouble(variant);
variant_getPointer(variant); // under development

// More usage examples can be found in include/example.h
```

RU 
Библиотека Variant для языка программирования C
Создано 05.06.2026, репозиторий: https:/github.com/walkingskyy/Variant-C

```cpp
// Cтруктура, хранящая необходимые типы данных
struct Variant variant;



// Функция, устанавливающая значение того или иного типа Варианту
// variant - Вариант для записи значения
// Type - название присваиваемого типа
// t - записываемое значение типа Typename
void variant_setType(struct Variant* variant, Type t) {
    variant->type = VARIANT_TYPE;
    variant->t = t;
} 
variant_setInt(&variant, 10);
variant_setChar(&variant, 'A');
variant_setFloat(&variant, 5.5f);
variant_setDouble(&variant, 1.23456789);
variant_setPointer(&variant, pointer); // в разработке



// Функция, проверяющая, соответствует ли тип Варианта указанному
void variant_isType(struct Variant variant) {
    return(variant.type == VARIANT_TYPE);
} 



// Функция, возвращающая значение Варианта
Type variant_getType(struct Variant* variant) {
    return(variant_isType(variant) ? variant.t : 0);
} 
variant_getInt(variant);
variant_getChar(variant);
variant_getFloat(variant);
variant_getDouble(variant);
variant_getPointer(variant); // в разработке

// Больше примеров использования находится в include/example.h
```
