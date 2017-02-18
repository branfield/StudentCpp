﻿// Рассматриваемые темы:
// Структуры

#pragma once

#include <iostream>
using namespace std;

namespace Structures
{
    // СТРУКТУРА - ЭТО ПОЛЬЗОВАТЕЛЬСКИЙ ТИП ДАННЫХ
    // Суть структуры - несколько переменных, объединенных под одним именем.
    // Проще говоря, структура - это коробка с именем, внутри которой лежат любые переменные.

    // Вернемся к понятию точка и создадим структуру:
    struct Point
    {
        int x;
        int y;
    }; // <== Не забывайте ';' после описания структуры!
    // Иначе компилятор не поймет, что описание структуры закончилось
    // и у вас посыпятся ошибки компилятора о неправильной вложенности.

    // Т.е. создавая какую-то структуру, (например, мы создали структуру Point - точка),
    // мы создали свой собственный тип данных, такой же как int, char, double и т.д.
    // Отличие от стандартных типов данных (например, типа int) только в том, что
    // int - простой тип данных и переменная такого типа хранит только одно целочисленное число,
    // а переменная типа данных точка будет хранить сразу 2 переменных типа данных int.

    // В памяти структура хранится одним большим блоком,
    // как сумма блоков каждой отдельной переменной внутри структуры

    // Под каждую переменную типа данных Point будет выделяться 8 байт памяти:
    // 4 байта для переменной x + 4 байта для переменной y
    // И в памяти лежать эти данные будут друг за другом подряд.

    // Структура - это тип данных! Значит, можно создавать переменные такого типа.

    // Создадим еще одну структуру, треугольник:
    struct Triangle
    {
        Point v1, v2, v3; // Треугольник характеризуется 3 вершинами
    };

    // Таким образом у треугольника будет 3 вершины,
    // каждая из которых - это точка с 2-мя координатами x и y

    // Ну а теперь рассмотрим как же работать со структурами:

    void main()
    {
        Point p1; // Статическое создание переменной типа структура
        Point* p2 = new Point; // Динамическое создание переменной типа структура

        p1.x = 1; // Оператор "." - получение доступа к внутреннему содержимому переменной составного типы
        p1.y = 2;

        p2->x = 3; // Оператор "->" - то же, что и ".", но применяется, если переменная состоавного типа - это указатель
        (*p2).y = 4; // Это аналогичная запись 
        // "->" более компактная запись 2-х операций: 
        // разыменовывания указателя и получения доступа до составного типа

        // Следующие 2 строчки делают одно и то же, но с помощью разных операторов '.' и '->'
        cout << p2->x << endl; // 3
        cout << (*p2).x << endl; // 3

        // Ну а теперь создадим треугольник
        Triangle t;

        // Заполним значения вершин
        // Внутри переменной t есть переменная v1
        // А внутри v1 есть переменные x и y
        t.v1.x = 2; 

        // Это как коробка внутри коробки.
        // Есть большая коробка t - треугольник, внутри которой есть
        // 3 другие коробки v1, v2, v3, внутри каждой из которых лежит
        // 2 целочисленные переменные x и y

        t.v1.y = 3;
        t.v2.x = 1;
        t.v2.y = 10;
        t.v3.x = 4;
        t.v3.y = -2;
    }
}
