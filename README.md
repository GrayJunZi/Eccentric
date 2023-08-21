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

课程采用 CodeLite 进行开发，所以跳过。