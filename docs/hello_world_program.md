---
title: Программа "Hello, World!"
synopsis: Первые шаги хромого
---

Такая программа состоит из одного-единственного файла main.cpp со следующим содержимым:

```c++
#include <iostream>

void main()
{
    std::cout << "Hello, World!" << std::endl;
    system("pause");
}
```
Это самая простая программа, которая выводит на консоль сообщение "Hello, World!". Разберем ее пошагово.

### Подключение библиотек
Возможности всех языков программирования на данный момент очень и очень обширны. Уместить все возможности в один-единственный файл не то чтобы не возможно, но такой файл будет гигантским. Поэтому в языках программирования существует механизм "многомодульности", который позволяет создавать отдельные "модули", в которых хранятся какие-то "возможности" или так называемый "функционал". Т.е. подключение какого-то специального модуля (их еще называют библиотеками) позволит вашей программе делать какие-то действия, которые запрограммировали другие программисты до вас или же подключить ваши собственные модули.

Любой компилятор С++ поставляется с уже имеющимся набором стандартных библиотек. 

```c++
#include <iostream>
```

Директива #include - это команда предпроцессора, которая подключает сторонний модуль в ваш файл с кодом. Как это делается? Очень просто. Предпроцессор, который по сути начинает работу еще до компилятора, обрабатывает только текст программы. Если выражаться очень упрощенным языком, то предпроцессор - это текстовый обработчик, который умеет копировать текст из файла в файл, делать замену одного куска текста на другой и т.п.

Команда #include открывает запрашиваемый файл подключаемого модуля, полностью копирует его содержимое и вставляет вместо строчки, где эта команда вызывается. Так и происходит подключение библиотек в С++.

Библиотека iostream - одна из стандартных библиотек и позволяет осуществлять операции с вводом информации в программу и ее выводом из программы, например, на консоль. iostream так и расшифровывается - "input output stream". Что такое stream (англ. поток) будет рассказано позже.

#### Функция
Дальше в нашей программе "Hello, World" идет тело функции main:

```c++
void main()
{
    // какие-то команды
}
```
Функция - это некоторый набор команд (действий), которым дано какое-то имя и который можно вызывать (запускать) из другого места в программе неограниченное кол-во раз.

У каждой функции есть список параметров - список значений, которые заведомо функции неизвестны, но с которыми она должна работать. У функции может и не быть никаких параметров, тогда список параметров остается пустым. В нашем примере список параметров как раз-таки пуст, поэтому внутри круглых скобок ничего нет - "void main()".

Также функция может возвращать некое значение, которое является результатом работы функции. Тип данных значения, которое возвращается функцией в качестве результата записывается перед именем самой функции. 

Возврат значения осуществляется с помощью команду return. После вызова этой команды работа функции завершается.

Общий шаблон записи функции можно определить как:

```
тип_возвращаемого_значения имя_функции(список_параметров_через_запятую)
{ // начало блока кода
    // какие-то действия, которые должны выполняться
    return значение; // возвращаем значение-результат работы функции
} // конец блока кода
```
Например, функция сложения двух чисел. Такая функция принимает 2 числа типа int в качестве параметров и будет возвращать сумму этих чисел как результат. 

```c++
int add(int a, int b)
{
    return a+b;
}
```

```c++
int add(int a, int b)
```
int - тип данных возвращаемого значения функции
add - имя функции (может быть любым на выбор программиста)
int a - первый параметр -переменная типа данных int с именем a (имя может быть любым)
int b - второй параметр -переменная типа данных int с именем b (имя может быть любым)

Функция может и не возвращать никакого значения, т.е. она просто выполняет какие-то действия, но значения-результата у нее нет. В этом случае тип данных возвращаемого значения записывается как void - отсутствие типа данных. 

Так, например, и работает функция main в нашем случае:

```c++
void main()
{
    // какие-то команды
}
```

NB! Некоторые компиляторы С++ (например gcc и gpp) не принимают функцию main без возвращаемого значения. В этом случае main обычно записывают так:

```c++
int main()
{
    // какие-то команды
    return 0;
}
```
### Точка входа в программу
При запуске исполняемого файла (для Windows это *.exe файл) весь исходный код загружается в оперативную память. Там хранятся и переменные, и исходные коды программа, другие данные, которые касаются непосредственно этой программы. В языках программирования для простоты работы программиста принято, чтобы начало выполнения алгоритма программы находилось в любом месте (модуле) программы и помечалось специальным имененем, так называемой функцией main.

Т.к. main обычная функция, хоть и должна иметь строго заданное имя, но тип возвращаемого значения и список параметров может быть разным в зависимости от потребностей программы. Например:

```c++
void main()
{
    return; 
    // Т.к. в данном случае main не должна возвращать никакого значения, 
    // то return записывается без какого-либо значения
    // return можно было и вовсе не писать в данном случае
}
```

```c++
void main()
{
}
```
Иногда программа запускается без интерфейса пользователя (например, различные утилиты, либо работающие программы в "скрытом" режиме), и тогда нужно знать завершилась ли программа успехом или ошибкой. Для этого функция main может возвращать значение с кодом завершения программы, каким-то сообщением или просто значением-результатом работы.

```c++
int main()
{
    return 0;
}
```

```c++
int main()
{
    return -5;
}
```

```c++
char main()
{
    return 'Q';
}
```

```c++
char* main()
{
    return "Done";
}
```
Параметры у функции main нужны для передачи параметров в программу при ее запуске. Пример - утилита ping в Windows. Если вызвать командную строку Windows и вызвать команду
ping ya.ru
то начнется обмен пакетами с доменом ya.ru, а если ввести команду
ping /?
то на экран выведется справка по данной утилите.

Т.е. как видно, вызывая одну и ту же утилиту ping с разными параметрами, мы получаем разный результат. Для этого и существует передача параметров в функцию main.

```c++
void main(int num, char c)
{
}
```
Обычно в функции main в качестве параметров передают кол-во параметров и массив строк, которые и являются самими параметрами:

```c++
void main(int argc, char* argv[])
{
}
```
### Вывод на консоль
Дальше в программе идет вывод сообщения "Hello, World!" на экран консоли:

```c++
std::cout << "Hello, World!" << std::endl;
```
В языке Си ввод и вывод на консоль осуществлялись с помощью функций scanf и printf соответственно. В языке С++ тоже есть эти функции, но они считаются устаревшими и остались в С++ только для обратной совместимости с программами написанными на чистом языке Си. В С++ же по стандарту лучше использовать переменные-потоки.

cout (console output) - это выходной поток вывода на консоль
cin (console input) - это входной поток чтения с консоли

Оба этих потока хранятся в библиотеке iostream. Именно ради была подключена эта библиотека в начале программы. Однако в данной программе обращение к потоку идет с помощью записи "std::cout".

На самом деле внутри библиотеки iostream есть так называемое "пространство имен" (namespace), которое выступает в роли контейнера (если проще, коробки), внутри которого уже хранятся какие-то функции и переменные. Пространства имен нужны для обеспечения безопасности различных модулей, чтобы не было ситуаций, что разные библиотеки содержат функции или переменные с одинаковыми именами из-за чего возникнет неоднозначность, и компилятор будет выдавать ошибки. (Представьте, что в аудитории находится несколько человек по имени "Максим" и вновь пришедший в аудиторию человек позовет кого-то "Иван!" - этому человеку придется долго выяснить, какой же Иван на самом деле ему нужен) Любую неоднозначность программа трактует как ошибку. Чтобы избежать таких ситуаций и был создан механизм пространств имен.

std - это и есть имя пространства имен, которое находится внутри библиотеки iostream.
Оператор :: - это оператор уточнения видимости.

Таким образом запись

```c++
std::cout
```
расшифровывается программой как "внутри std лежит переменная cout, вот она-то мне и нужна".

Если не уточнять видимость (т.е. не указывать полный путь до местонахождения переменной cout), то программа не найдет переменную и выдаст ошибку, что идентификатор не найден. Сама по себе программа не будет ничего искать внутри пространства имен, потому что С++ язык воспитанный и по чужим коробкам без разрешения не лазает. С помощью оператора уточнения видимости мы "разрешаем" программе залезть в пространство имен std и там поискать нужную переменную.

Возвращаясь к команде вызова на консоль:

```c++
std::cout << "Hello, World!" << std::endl;
```
Оператор << - это оператор побитого сдвига влево.
В своем изначальном виде этот оператор производит сдвиг числа влево на заданное кол-во разрядов.

```c++
int a = 5 << 2;
```
После такого переменная a будет равна 20 (число 0000 0101 сдвинули влево на 2 разряда и получили 0001 0100).

Но в языках программирования существует такое понятие как перегрузка - явление, когда операторы или функции в нестандартной ситуации были запрограммированы вести себя по-другому.

Для оператора побитого сдвига стандартным является работа с числами, но специально для работы с потоками этот оператор запрограммировали, что в поток, записанный слева от оператора, записывать значение записанное справа от оператора.

```c++
std::cout << "Hello, World!";
```
Здесь в поток cout записывается строка "Hello, World!", поток же затем в свою очередь выведет эту строку на экран.

Для потоков также допустимо записывать несколько операторов << подряд, тогда значения справа будут записаны в поток последовательно, одно за другим.

```c++
std::cout << "Hello, World!" << std::endl;
```
В поток cout сначала запишется строка "Hello, World!", а затем константа endl, которая также хранится внутри пространства имен std.

endl (end line) - это константа, которая хранит символ '\n', символ переноса строки.

В С++ вообще есть много текстовых служебных символов. Все они записываются с символом '\' перед ними. Например:
'\n' - перенос строки
'\t' - горизонтальная табуляция
'\v' - вертикальная табуляция
'\a' - звуковой сигнал типа "писк"
и т.д.