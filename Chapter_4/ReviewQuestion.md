##### 问题：什么是指针？  
计算机在存储数据时程序必须记录三个基本属性：
- 存储的信息是什么类型？
- 信息存储在哪里？
- 存储的值是多少？

为了完成数据的存储，可以使用两种策略：**定义简单变量**和**定义指针变量**
- **定义简单变量**：声明语句指出了<u>存储的信息的类型</u>和<u>存储的值是多少</u>，并且，程序将找到一块能存储该信息的内存，并将该内存单元标记为变量名。对变量名运用求地址运算符可以得到信息存储的地址，此时，<u>将地址视为派生量。</u>
- **定义指针变量**：指针的声明语句指出了<u>存储信息的类型</u>和<u>存储信息的地址</u>，对指针运用解除引用运算符可以得到存储信息的值，此时，<u>将信息的值视为派生量。</u>  

变量是在编译时分配的有名称的内存，指针则为可以通过名称直接访问的内存提供了一个别名。<u>但指针真正有用的地方在于，在运行阶段用于动态内存分配，此时只能通过指针访问内存。并且，指针的灵活性不仅体现在动态内存分配上，指针还可以用于数组、字符串、函数参数和复杂的数据结构中。</u>

**引用**是已定义变量的别名，<u>引用变量的主要用途是用作函数的形参，通过将引用变量作为参数，函数将使用原始数据而不是其副本。</u>引用在声明时就必须被初始化，并且不能被重新赋值。

<br>
<br>

##### Q1：1.如何声明下述数据?
a. `actor` 是由 `30` 个 `char` 组成的数组。
b. `betsie` 是由 `100` 个 `short` 组成的数组。
c. `chuck` 是由 `13` 个 `float` 组成的数组。
d. `dipsea` 是由 `64` 个 `long double` 组成的数组。
> a. `char actor[30];`  
> b. `short betsie[100];`  
> c. `float chuck[13];`  
> d. `long double dipsea[64];`  

<br>

##### Q2：使用模板类 `array` 而不是数组来完成问题1。
> a. `array<char, 30> actor;`  
> b. `array<short, 100> betsie;`  
> c. `array<float, 30> chuck;`  
> d. `array<long double, 30> dipsea;`  

<br>

##### Q3：声明一个包含 `5` 个元素的 `int` 数组，并将它初始化为前 `5` 个正奇数。
> `int arr[5] = {1, 3, 5, 7, 9};`

<br>

##### Q4：编写一条语旬，将问题 `3` 中数组第一个元素和最后一个元素的和赋给变量even 。
> `int even = arr[0] + arr[4];`

<br>

##### Q5：编写一条语句，显示 `float` 数组 `ideas` 中的第 `2` 个元素的值。
> `cout << "The second value of ideas is: ideas[1] = " << ideas[1] << endl;`

<br>

##### Q6：声明一个 `char` 的数组，并将其初始化为字符串"`cheeseburger`"。
> `char arr[] = "cheeseburger";`

<br>

##### Q7：声明一个 `string` 对象，并将其初始化为字符串"`Waldorf Salad`"。
> `string str = "Waldorf Salad";`

<br>

##### Q8：设计一个描述鱼的结构声明。结构中应当包括品种、重量（整数，单位为盎司）和长度（英寸，包括小数）。
```
stuct fish 
{
    std::string breed;
    int weight;
    float length;
};
```

<br>

##### Q9：声明一个问题 8 中定义的结构的变量，并对它进行初始化。
> `fish goldfish = {"goldfish", 1, 1.5};`

<br>

##### Q10：用 `enum` 定义一个名为 `Response` 的类型，它包含 `Yes` `、No` 和 `Maybe` 等枚举量，其中 `Yes` 的值为 `1`，`No` 为 `0` ， `Maybe` 为 `2`。
> `enum Response{No, Yes, Maybe};`

<br>

##### Q11：假设 `ted` 是一个 `double` 变量，请声明一个指向 `ted` 的指针，并使用该指针来显示 `ted` 的值。
> `double* pted = &ted;`
> `cout << "The value of ted is: " << *pted << endl;`

<br>

##### Q12：假设仕 `treacle` 是一个包含 `10` 个元素的 `float` 数组，请声明一个指向 `treacle` 的第一个元素的指针，并使用该指针来显示数组的第一个元素和最后一个元素。
```
float* ptreacle = treacle;
cout << "The first and last value of treacle is: " << ptreacle[0] 
     << " and " << ptreacle[9] << endl;
```

<br>

##### Q13：编写一段代码，要求用户输入一个正整数，然后创建一个动态的 `int` 数组，其中包含的元素数目等于用户输入的值。首先使用 `new` 来完成这项任务，再使用 `vector` 对象来完成这项任务。
```
cout << "Please input length of array: ";
unsigned int length;
cin >> length;
int* p = new int[length];
vector<int> arr(length);
```

<br>

##### Q14：下面的代码是否有效？如果有效，它将打印出什么结果？
`cout << (int *) "Home of the jolly bytes";`
> 有效，代码将打印 `"Home of the jolly bytes"` 的首字符地址。

<br>

##### Q15：编写一段代码，给问题 8 中描述的结构动态分配内存，再读取该结构的成员的值。
```
fish* p = new fish;
p->breed = goldfish;
p->weight = 1;
p->length = 1.5;
cout << "The fish is: " << p->breed << endl
     << "weight = " << p->weight
     << ", length = " << p->length << endl;
```

<br>

##### Q16：程序清单 4.6 指出了混合输入数字和一行字符串时存储的问题。如果将下面的代码:
`cin.getline(address, 80);`
##### 替换为:
`cin >> address;`
##### 将对程序的运行带来什么影响?
> ~~程序结果不会改变，因为 `cin` 以空格、制表符和换行符来确定字符串结束位置。~~
> <span style="color:red;"> `cin` 会跳过输入中的空白字符再开始输入，直到再次遇到空白字符时会结束输入。 </span>

<br>

##### Q17：声明一个 `vector` 对象和一个 `array` 对象，它们都包含 `10` 个 `string` 对象。指出所需的头文件，但不要使用 `using` ，使用 `const` 来指定要包含的 `string` 对象数。
```
#include <string>
#include <vector>
#include <array>
const int LENGTH = 10;
int main()
{
    std::vector<std::string> vec(LENGTH);   // std::string
    std::array<std::string, LENGTH> arr;
    return 0;
}
```
<br>
