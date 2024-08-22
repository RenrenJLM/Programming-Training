##### Q1：为什么C++有多种整型?
> <span style="color:red;"> **C++提供了多种整型类型，主要是为了满足不同的编程需求和优化内存使用**。
C++中的整型主要包括`short`、`int`、`long`和`long long`四种，每一种还包含有符号类型(`signed`)和无符号类型(`unsigned`)两类。`char`类型可看作一种小整数类型。这些整数类型的主要区别在于存储使用的数位长度不同，在程序设计中应根据数据运算需要选择合适的类型。</span>

<br>

##### Q2：声明与下述描述相符的变量。
a. `short` 整数，值为 `80`
b. `unsigned int` 整数，值为 `42110`
c. 值为 `3000000000` 的整数
> `short a = 80;`
> `unsigned int b = 42110;`
> `long long c = 3000000000;`

<br>

##### Q3：C++提供了什么措施来防止超出整型的范围?
> C++并未提供自动防止超出整型范围的功能，需要程序员自行匹配数据和类型。在C++中，整型溢出时最常见的行为是 **环绕 (Wraparound)**：对于整型变量，如果值超出了限制，其值将从值域范围另一端取值。

<br>

##### Q4：`33L` 与 `33` 之间有什么区别?
> `33L`表示`long`型数据，`33`表示`int`型数据。在C++中，整型字面值的默认类型为`int`类型，后缀`L`表示`long`类型，后缀`U`表示`unsigned int`类型，还可以对其组合表示`unsigned long`和`long long`类型等。

<br>

##### Q5：下面两条C++语句是否等价?
`char grade = 65;`
`char grade = 'A';`
> <span style="color:red;"> 在`ASCII`码的平台下两条语句可以通用。
在实现上，语句一初始化时会进行从`int`到`char`的类型转换。 </span>

<br>

##### Q6：如何使用C++来找出编码 `88` 表示的字符?指出至少两种方法。
> `char c = 88; cout << c << endl;`
> <span style="color:red;"> `cout << char(88) << endl;` </span>
> <span style="color:red;"> `cout.put(char(88));` </span>

<br>

##### Q7：将 `long` 值赋给 `float` 变量会导致舍入误差， 将 `long` 值赋给 `double` 变量呢? 将 `long long` 值赋给 `double` 变量呢?
> <span style="color:red;"> **浮点数由基准值（小数部分）和缩放因子（指数部分）两部分组成**，浮点数中的有效位由基准值的位数决定。
通常，`float`类型只能表示`6`位有效数字，`double`类型只能表示`15`位有效数字。
故前者不会导致误差，后者会导致误差。 </span>

<br>

##### Q8：下列C++表达式的结果分别是多少?
a. `8 * 9 + 2`
b. `6 * 3 / 4`
C. `3 / 4 * 6`
d. `6.0 * 3 / 4`
e. `15 % 4`
> `a. 74`
> `b. 4`
> `c. 0`
> `d. 4.5`
> `e. 3`

<br>

##### Q9：假设 `x1` 和 `x2` 是两个 `double` 变量， 您要将它们作为整数相加，再将结果赋给一个整型变量。请编写一条完成这项任务的C++语句。如果要将它们作为 `double` 值相加并转换为int 呢?
> `int example = int(x1) + int(x2);`
> `int(x1 + x2);`

<br>

##### Q10：下面每条语句声明的变量都是什么类型?
`a. auto cars = 15;`
`b. auto iou = 150.37f;`
`C. auto level = 'B';`
`d. auto crat = U'\U00002155';`
`e. auto fract = 8.25f/2.5;`
> `int`
> `float`
> `char`
> **`chart32_t`** // 前缀`U`表示该常量是`char32_t`类型，前缀`u`表示该常量是`char16_t`类型
> **`double`** // 浮点常量在默认情况下为`double`类型

<br>

