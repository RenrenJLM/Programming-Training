##### Q1：C++程序的模块叫什么?  
> 主要形式是函数。

<br>

##### Q2：下面的预处理器编译指令是做什么用的?  
`#include <iostream> ` 
> `#include`预处理器指令的主要功能是在编译器进行源代码的编译过程之前，添加或替换相应的预编译指令。
> <span style="color:red;">在最终的编译之前，使用 iostream 头文件的内容替换该编译指令。</span>

<br>

##### Q3：下面的语句是做什么用的?  
`using namespace std;  `
> 使得程序可以使用std 名称空间中的定义。

<br>

##### Q4：什么语句可以用来打印短语"Hello， world"，然后开始新的一行?  
> `std::cout << "Hello, world" << std::endl;`

<br>

##### Q5：什么语句可以用来创建名为 `cheeses` 的整数变量?  
> `int cheeses;`

<br>

##### Q6：什么语句可以用来将值 32 赋给变量 `cheeses` ?  
> `cheeses = 32;`

<br>

##### Q7：什么语句可以用来将从键盘输入的值读入变量 `cheeses` 中?  
> `std::cin >> cheeses;`

<br>

##### Q8：什么语句可以用来打印"We have X varieties of cheese,"，其中 `X` 为变量 `cheeses` 的当前值。  
> `std::cout << "We have " << cheeses << " varieties of cheese," << std::endl;`

<br>

##### Q9：下面的函数原型指出了关于函数的哪些信息?  
`int froop(double t); ` 
`void rattle(int n);  `
`int prune(void);  `
> `froop` 函数接收一个 `double` 类型的参数，提供一个 `int` 类型的返回值；
> `rattle` 函数接收一个 `int` 类型的参数，无返回值； 
> `prune` 函数不接收参数，提供一个 `int` 类型的返回值。

<br>

##### Q10：定义函数时，在什么情况下不必使用关键字return?  
> 当函数是无返回值类型 (`void`) 时，不必使用关键字 `return`

<br>

##### Q11：假设您编写的main( )函数包含如下代码, 而编译器指出 cout 是一个未知标识符。导致这种问题的原因很可能是什么?指出 3 种修复这种问题的方法。  
`cout << "Please enter your PIN: ";`
> 原因可能是没有使用 `using`命令；
> 解决方法1：`using namespace std;`
> 解决方法2：~~`using namespace cout;`~~ `using std::cout;`
> 解决方法3：`std::cout << "Please enter your PIN: ";`

<br>
