# Eccentric

Beginning C++ Programming - From Beginner to Beyond
---
Obtain Modern C++ Object-Oriented Programming (OOP) and STL skills. C++14 and C++17 covered. C++20 info see below.

## 一、介绍(Introduction)

### 1. 为什么学习C++？

我们在考虑从事软件开发职业时经常会问的一个问题就是 “我应该学什么编程语言？”。

- 受欢迎程度
    - 现如今编写的大部分软件仍然是用C++编写的。
    - 可查看 [Tiobe](https://www.tiobe.com/tiobe-index/) 各编程语言的活跃程度。
    - 社区活跃，Github、Stack Overflow 等。

- 相关
    - Windows、Linux、Mac OSX、MySQL、MongoDB、游戏引擎等...
    - Amazon、Apple、Microsoft、PayPal、Google等...
    - VR、Unreal Engine、机器学习等...

- 强大
    - 快速、灵活、可扩展、可移植。
    - 支持面向过程以及面向对象编程。 

### 2. 现代化C++和C++标准

- 20世纪70年代初(1970s)
    - C语言
    - 丹尼斯里奇(Dennis Ritchie)
- 1979
    - 本贾尼斯特劳斯特卢普(Bjarne Stroustrup)
    - 带类的C(C with Classes)
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

C++11被认为是最经典的C++标准。
- C++11 - 大量新特性
- C++14 - 小量变更
- C++17 - 简化

### 3. 这些是如何工作的

### C++编译过程

- 首先，我们使用编辑器编写C++代码 (`.cpp`)，C++程序可以有数百上千个源文件数百万行代码。
- 然后，我们需要使用**C++ Compiler**编译C++代码。
- 如果代码不包含语法错误，编译器将为每个C++源文件生成一个目标代码文件 (Windows中为`.obj`, Linux或Mac中为 `.o`)。
- 最终，目标文件和程序所需的任何库必须链接在一起(被成为`Linker`)，将创建一个可以在Windows上运行的可执行文件 (`.exe`)。

#### 集成开发环境(IDE) 

现代集成开发环境将包含以下内容:

- 编辑器
- 编译器
- 链接器
- 调试器

## 二、安装与设置(Installation and Setup)

### 1. 安装 MinGW-w64 编译器

进入网站 **https://winlibs.com/**，选择 `Download` 页面，下载最新 GCC 版本的 Win64包。

将下载好的包解压到C盘目录中，并将 `C:\mingw64\bin` 目录添加至环境变量中。

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

又比如说在C++中双引号是成对出现的，如果缺少了一个双引号也将会报错。
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

如果定义一个外部变量，编译main.cpp文件时将会错误，因为在编译链接时找不到x变量。
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

- 代码中导致程序运行不正确的错误或bug。
- 逻辑错误是程序员所犯的错误。

### 7. 章节挑战

创建一个C++程序，要求用户输入他们最喜欢的1到100之间的数字，然后从控制台读取这个数字。

=======================================

创建一个C++程序，要求用户输入1到100之间的数字，然后从控制台读取这个数字

假设用户输入24，然后在控制台显示以下内容：

Amazing!! That's my favorite number too!
No really!!, 24 my favorite number!

下面是该程序的两个运行示例：

=======================================
Enter your favorite number betweeen 1 and 100: 24
Amazing!! That's my favorite number too!
No really!!, 24 my favorite number!