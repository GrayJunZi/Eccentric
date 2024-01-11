# Eccentric

## Beginning C++ Programming - From Beginner to Beyond

Obtain Modern C++ Object-Oriented Programming (OOP) and STL skills. C++14 and C++17 covered. C++20 info see below.

## 一、介绍(Introduction)

### 1. 为什么学习 C++？

我们在考虑从事软件开发职业时经常会问的一个问题就是 “我应该学什么编程语言？”。

- 受欢迎程度

  - 现如今编写的大部分软件仍然是用 C++编写的。
  - 可查看 [Tiobe](https://www.tiobe.com/tiobe-index/) 各编程语言的活跃程度。
  - 社区活跃，Github、Stack Overflow 等。

- 相关

  - Windows、Linux、Mac OSX、MySQL、MongoDB、游戏引擎等...
  - Amazon、Apple、Microsoft、PayPal、Google 等...
  - VR、Unreal Engine、机器学习等...

- 强大
  - 快速、灵活、可扩展、可移植。
  - 支持面向过程以及面向对象编程。

### 2. 现代化 C++和 C++标准

- 20 世纪 70 年代初(1970s)
  - C 语言
  - 丹尼斯里奇(Dennis Ritchie)
- 1979
  - 本贾尼斯特劳斯特卢普(Bjarne Stroustrup)
  - 带类的 C(C with Classes)
- 1983
  - 更名为 C++
- 1989
  - 第一个商业版本发布
- 1998
  - C++98 标准
- 2003
  - C++03 标准
- 2011
  - C++11 标准
- 2014
  - C++14 标准
- 2017
  - C++17 标准

C++11 被认为是最经典的 C++标准。

- C++11 - 大量新特性
- C++14 - 小量变更
- C++17 - 简化

### 3. 这些是如何工作的

### C++编译过程

- 首先，我们使用编辑器编写 C++代码 (`.cpp`)，C++程序可以有数百上千个源文件数百万行代码。
- 然后，我们需要使用**C++ Compiler**编译 C++代码。
- 如果代码不包含语法错误，编译器将为每个 C++源文件生成一个目标代码文件 (Windows 中为`.obj`, Linux 或 Mac 中为 `.o`)。
- 最终，目标文件和程序所需的任何库必须链接在一起(被成为`Linker`)，将创建一个可以在 Windows 上运行的可执行文件 (`.exe`)。

#### 集成开发环境(IDE)

现代集成开发环境将包含以下内容:

- 编辑器
- 编译器
- 链接器
- 调试器

## 二、安装与设置(Installation and Setup)

### 1. 安装 MinGW-w64 编译器

进入网站 **https://winlibs.com/**，选择 `Download` 页面，下载最新 GCC 版本的 Win64 包。

将下载好的包解压到 C 盘目录中，并将 `C:\mingw64\bin` 目录添加至环境变量中。

打开命令行窗口输入命令 `g++ --version` 查看是否配置正确。

## 三、课程预览(Curriculum Overview)

### 1. 课程预览

- 入门 (Getting Started)
- C++程序结构 (Structure of a C++ Program)
- 变量与常量 (Variables and Constants)
- 数组与向量 (Array and Vectors)
- C++中的字符串 (Strings in C++)
- 表达式、语句与运算符 (Expressions, Statements and Operators)
- 语句与运算符 (Statements and Operators)
- 流程控制 (Determining Control Flow)
- 函数 (Functions)
- 指针与引用 (Pointers and References)
- 类与对象 (OOP - Classes and Objects)
- 操作符重载 (Operator Overloading)
- 继承 (Inheritance)
- 多态 (Polymorphism)
- 智能指针 (Smart Pointers)
- 标准模板库 (The Standard Template Library, STL)
- 输入输出流 (I/O Streams)
- 异常处理 (Exception Handling)

## 四、开始(Getting Started)

### 1. 编写我们的第一个程序

```cpp
#include <iostream>

int main() {
    int favorite_number;
    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> favorite_number;
    std::cout << "Amazing!! " << favorite_number << " That's my favorite number too!";
    return 0;
}
```

### 2. 编译错误

- 编程语言对如何编写代码有非常具体的规则，以便编译器可以将代码转换为机器代码。
- 语法错误
- 语义错误

例如 C++ 中所有的语句都必须以分号结尾，否则将报错。

```cpp
return 0
```

又比如说在 C++中双引号是成对出现的，如果缺少了一个双引号也将会报错。

```cpp
std::cout << "Hello << std::endl;
```

### 3. 编译器警告

- 编译器注意到代码的潜在问题，会发出警告。
- 它只是一个警告，编译器仍然能够理解代码并从中生成目标代码。

如果定义了一个变量，而没有使用它，或者没有进行初始化，编译器都将会发出一条警告。

```cpp
int miles_driven;
std::cout << miles_driven;
```

### 4. 链接器错误(Linker Errors)

- 链接器在将所有的目标文件链接在一起以创建一个可执行的文件。
- 通常有一个库或目标文件丢失了将会引发错误。

如果定义一个外部变量，编译 main.cpp 文件时将会错误，因为在编译链接时找不到 x 变量。

```cpp
#include <iostream>

extern int x;

int main() {
    std::cout << "Hello world" << std::endl;
    std::cout << x;
    return 0;
}
```

### 5. 运行时错误(Runtime Errors)

- 运行时错误是程序执行时发生的错误。
- 一些典型的运行时错误：除以零错误、文件未找到错误、内存不足错误 ...

### 6. 逻辑错误(Logic Errors)

- 代码中导致程序运行不正确的错误或 bug。
- 逻辑错误是程序员所犯的错误。

### 7. 章节挑战

创建一个 C++程序，要求用户输入他们最喜欢的 1 到 100 之间的数字，然后从控制台读取这个数字。

=======================================

创建一个 C++程序，要求用户输入 1 到 100 之间的数字，然后从控制台读取这个数字

假设用户输入 24，然后在控制台显示以下内容：

Amazing!! That's my favorite number too!
No really!!, 24 my favorite number!

下面是该程序的两个运行示例：

=======================================
Enter your favorite number betweeen 1 and 100: 24
Amazing!! That's my favorite number too!
No really!!, 24 my favorite number!

## 五、C++程序结构(Structure of a C++ Program)

### 1. 课程预览

C++程序结构

- 基础组件
- 预处理指令(preprocessor directives)
- 主函数(main function)
- 命名空间(namespace)
- 注释
- 基础 I/O

### 2. C++程序结构

可以在 [CPP Reference](https://zh.cppreference.com/w/cpp/keyword) 网站中查看 C++所有的关键字。

![C++ 关键字](Resources\section5\images\cppkeywords.png)

在 C++ 中共有 90 个关键字，Java 有 50 个，Python 有 33 个，C 语言 32 个，而 Go 只有 25 个关键词。

C++中有各种标点符号、运算符等，当把这些元素放在程序中时，形成了一个叫做语法的东西(syntex)。

语法是编程语言的语法，能够让编译器理解的结构和含义，编译器通过编写的代码将其翻译成机器代码。

### 3. #include 预处理器指令

预处理器指令(Preprocessor Directives)

- 什么是预处理器？
  - C++预处理器是一个在编译器执行之前处理源代码的程序。
  - C++预处理器首先从源文件中删除所有注释并用空格将其替换，然后查找所有预处理器指令并执行。
  - 预处理器指令在源代码中以`#`符号开头。
- 是做什么用的？
  - 预处理器指令通常用于有条件地编译代码。
  - 例如：只想在 Windows 系统中编译源代码的一部分。
- 指令以#开头
- 预处理器的命令
  - C++预处理器不理解 C++代码，它只遵循预处理器指令，并为编译器准备好源代码，编译器是理解 C++的程序。

| #include |         |         |        |     |
| -------- | ------- | ------- | ------ | --- |
| #ifdef   | #ifndef | #define | undef  |
| #if      | #elif   | #else   | #endif |
| line     | error   | pragma  |

### 4. 注释

注释是源代码中程序员可读的解释，注释并不会被编译器执行，预处理器会先去除掉所有的注释。

C++有两种注释方式，一种是单行注释，使用 `//` 开头后面的一整行都被认为是注释内容，另一种是多行注释，以`/*`开头以`*/`结尾，在这之中的内容都被视为注释内容。

### 5. main 函数

- 每个 C++程序必须有**1**个`main()`函数。
- `main()`函数是程序的起点。
- 返回 0 表示程序执行成功。

```cpp
int main()
{
    // 代码
    return 0;
}

program.exe
```

带参数 main 函数。

```cpp
int main(int argc, char *argv[]) {
    // 代码
    return 0;
}

program.exe argument1 argument2
```

### 6. 命名空间

- 为什么使用 `std::cout` 而不仅仅是 `cout` ？
  - C++允许开发人员使用命名空间作为容器，将它们的代码实体分组到名空间范围内。
- 什么是命名冲突？
- 为部分代码指定名称，以帮助减少命名冲突。
- `std`是**C++标准**命名空间的名称。
- 第三方框架将有自己的命名空间。
- 作用域解析运算符`::`。
- 我们怎样才能使用这些命名空间呢？

使用 `using namespace` 命名空间指令，将指定的命名空间下的所有函数导出出来。

```cpp
#include <iostream>

using namespace std;

int main() {

    int favorite_number;
    cout << "Enter your favorite number between 1 and 100: ";
    cin >> favorite_number;
    cout << "Amazing!! " << favorite_number << " That's my favorite number too!";
    cout << "No really!!, " << favorite_number << " is my favorite number!" << endl;

    return 0;
}
```

使用命名空间变体限定

```cpp
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

    int favorite_number;
    cout << "Enter your favorite number between 1 and 100: ";
    cin >> favorite_number;
    cout << "Amazing!! " << favorite_number << " That's my favorite number too!";
    cout << "No really!!, " << favorite_number << " is my favorite number!" << endl;

    return 0;
}
```

### 7. 基础输入和输出(I/O)

`cin`, `cout`, `cerr` 和 `clog` 是表示流的对象。

- cin
  - 标准输入流
  - 键盘
- cout
  - 标准输出流
  - 控制台
- `>>`
  - 提取操作符
  - 输入流
- `<<`
  - 插入操作符
  - 输出流

#### cin 和 >>

根据数据的类型从 cin 流中提取数据。

```cpp
cin >> data;
```

可以被链式调用。

```cpp
cin >> data1 >> data2;
```

如果无法解释输入的数据，则可能失败（数据可能具有未确定的值）。

#### cout 和 <<

插入数据到`cout`流中。

```cpp
cout << data;
```

可以被链式调用。

```cpp
cout << "data 1 is " << data1;
```

不会自动添加换行符。

```cpp
cout << "data 1 is " << data1 << endl;
cout << "data 1 is " << data1 << "\n";
```

## 六、变量与常量(Variables and Constants)

- 什么是变量？
- C++基本数据类型（integer、floating point、boolean、character）
- sizeof 操作符
- 什么是常量？
- 声明常量
- 字面量常量
- 常量表达式

### 1. 什么是变量

- 变量是内存位置的抽象。
- 允许我们使用有意义的名称而不是内存地址。
- 变量具有类型和值。
- 变量必须在使用前先声明。
- 变量的值可以更改。

### 2. 声明和初始化变量

C++中声明变量的语法很简单，首先告诉编译器变量的类型是什么，然后告诉编译器变量名称是什么。

```cpp
int age;
double rate;
string name;

Account franks_account;
Person james;
```

变量命名规则

- 可以包含字母、数字和下划线。
- 必须以字母或下划线开头（变量名开头不能是数字）。
- 不能使用 C++保留关键字。
- 不能在同一个作用域中重复声明名称（C++中命名区分大小写）。

初始化变量

```cpp
int age;    // 未初始化
int age = 21;   // C语言风格的初始化变量
int age (21);   // 构造函数初始化
int age {21};   // C++11风格的初始化变量语法，使用此风格进行初始化可以在编译时捕获溢出等问题。
```

### 3. C++基本数据类型(C++ Primitive Data Types)

**直接由 C++语言实现的基本数据类型。**

- 字符类型
- 整型类型（有符号整数和无符号整数）
- 浮点数类型
- 布尔类型

> 数据类型的大小与精度很大程度上依赖于编译器使用的平台。

**数据类型大小**

- 以位(bit)表示。
- 位数越多，可表示的值就越多。
- 位数越多，需要的存储空间就越大。

**字符类型**

- 使用单引号表示字符类型，例如： 'A'、'X'、'@'

| 类型名称 | 大小/精度                  |
| -------- | -------------------------- |
| char     | 正好 1 字节，至少 8 位。   |
| char16_t | 至少 16 位                 |
| char32_t | 至少 32 位                 |
| wchar_t  | 可以表示最大的可用字符集。 |

**整型类型**

- 用于表示整数。
- 支持有符号整数和无符号整数。

| 类型名称             | 大小/精度  |
| -------------------- | ---------- |
| signed short int     | 至少 16 位 |
| signed int           | 至少 16 位 |
| signed long int      | 至少 32 位 |
| signed long long int | 至少 64 位 |

| 类型名称               | 大小/精度  |
| ---------------------- | ---------- |
| unsigned short int     | 至少 16 位 |
| unsigned int           | 至少 16 位 |
| unsigned long int      | 至少 32 位 |
| unsigned long long int | 至少 64 位 |

**浮点类型**

- 用于表示非整数。
- 用尾数(mantissa)和指数(exponent)表示（科学计数法）。
- 精度是尾数中的位数。
- 精度和大小依赖于编译器。

| 类型名称    | 大小/典型精度            |
| ----------- | ------------------------ |
| float       | / 7 小数位               |
| double      | 不小于浮点数 / 15 小数位 |
| long double | 不小于浮点数 / 19 小数位 |

**布尔类型**

- 用于表示真和假。
- 0 是假。
- 非 0 是真。

| 类型名称 | 大小/精度                  |
| -------- | -------------------------- |
| bool     | 通常是 8 位，true 和 false |

### 4. 什么是变量的大小

**使用 sizeof 操作符**

使用`sizeof`来确定类型或变量的大小(以字节为单位)。

```cpp
sizeof(int)
sizeof(double)

sizeof(some_variable)
sizeof some_variable
```

### 4. 什么是常量

常量与变量类似，唯一的区别就是常量的值一旦声明就不能更改。

**类型常量**

- 字面量常量
- 使用 `const` 关键字声明常量
- 使用 `constexpr` 常量表达式
- 使用 `enum` 枚举常量
- 使用 `#define` 定义常量

字面量常量

```cpp
x = 12;
y = 1.56;
name = "Frank";
middle_initial = 'J';
```

整型字面量常量

- 12 - 整型
- 12U - 无符号整数
- 12L - long
- 12LL - long long

浮点型字面量常量

- 12.1 - double
- 12.1F - float
- 12.1L - long double

字符字面量常数

- \n - newline，换行
- \r - return，回车
- \t - tab，制表符
- \b - backspace, 退格
- \' - single quote，单引号
- \" - double quote，双引号
- \\ - backslash，反斜杠

声明常量

```cpp
const double pi {3.1415926};
const int months_in_year {12};

pi = 2.5; // 编译错误
```
