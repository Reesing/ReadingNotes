# 第一章 开始

## 1.1 编写一个简单的C++程序

- 每个 C++ 程序必须有一个 `main` 函数，操作系统通过调用 `main` 来运行 C++ 程序。

    ```cpp
    int main()
    {
        return 0;
    }
    ```

- 函数的定义包含四部分：
    1. 返回类型 return type
    2. 函数名 function name
    3. 形参列表 parameter list
    4. 函数体 function body

- 编译

    选择1：
    ```shell
    $ cc -o prog1 prog1.cc
    ```

    选择2：
    ```shell
    $ g++ -o prog1 prog1.cc
    ```
    1. `-o prog1` 用于生成指定为 `prog1` 的可执行文件；
    2. 若不指定可执行文件名称，则（GNU编译器）产生名为 `a.out` 的可执行文件；
    3. 可以用 `-std=c++11` 来打开对 C++11 的支持

- 运行

    ```shell
    $ ./prog1
    ```

## 1.2 初识输入输出

- 标准库 `iostream` 提供 IO 机制。
    - 包含两个基础类型：`istream`， `ostream`
    - 一个流 = 一个字符序列；
    - 术语 “**流**”（**stream**）指：随着时间的推移，字符是顺序生成或消耗的。

- 标准库定义4个对象：
    - `cin`，`istream` 类型，标准输入 standard input
    - `cout`，`ostream` 类型，标准输出 standard output
    - `cerr`，`ostream` 类型，标准错误 standard error
    - `clog`，`ostream` 类型，用于输出程序运行时的一般性信息

- **头文件**
    - `#include` 指令与头文件名字必须写在同一行中

    ```cpp
    // 标准库的头文件用 <...>
    #include <iostream>
    // 非标准库的头文件用"..."
    #include "Sales_item.h"
    ```

- **输出运算符** `<<`
    - 接受两个运算对象：
        - 左侧：`ostream` 对象（如 `std::cout`）
        - 右侧：要打印的值
    ```cpp
    std::cout << "Enter two numbers:" << std::endl;
    ```
    - 返回其左侧的运算对象。因此可以连接多个输出请求。

- **操纵符**（manipulator）`std::endl`
    - 效果：结束当前行，并将缓冲区（buffer）中的内容刷到设备中。
        如果没有遇到 `std::endl`，那么输出仅停留在内存中等待写入流。
    - 打印语句时应该保证一直刷新流，否则，程序崩溃时输出可能还留在 buffer 中，没有被真正打印出来。

- **命名空间**（namespace），例如 `std`
    - 命名空间帮助避免名字定义冲突
    - 副作用：要通过使用**作用域运算符**（`::`）来指出命名空间中的内容，如 `std::cout`

- **输入运算符** `>>`
    - 接受两个运算对象：
        - 左侧：`istream` 对象（如 `std::cin`）
        - 右侧：承接输入值的变量，需要提前定义好类型
    ```cpp
    std::cout << "Enter two numbers:" << std::endl;
    ```
    - 返回其左侧的运算对象。因此可以连接多个输入请求。

## 1.3 注释简介

1. 单行注释：`//`
    ```cpp
    // One-line comment
    int i = 0; // Can be used like this
    ```
2. 界定符对注释：`/*` 与 `*/`
    ```cpp
    /*
     * I wanna
     * comment
     * multiple lines
     */
    ```

一个注释不能嵌套在另一个注释之内！

## 1.4 控制流

- `while`
    ```cpp
    while (condition)
    {
        statements;
    }
    ```
    例：
    ```cpp
    while (std::cin >> val)
        sum += val;
    ```
    因为 `std::cin >> val` 返回左侧运算对象，则当作用一个 `istream` 对象作为条件时，其效果是检测流的状态。
    - 若流未遇到错误，则检测成功，`while` 判断条件为 `True`;
    - 若流遇到**文件结束符**（end-of-file）或**无效输入**（例如读入值的类型无法匹配）时，`istream` 对象状态则为无效，判断条件为 `False` .


- `for`
    ```cpp
    int sum = 0;
    for (int i = 0; i <= 10; ++i)
        sum += i;
    ```
    - 循环头
        - 初始化： `int i = 0`
        - 循环条件： `i <= 10`
        - 表达式： `++i`
    - 循环体

- `if`
    ```cpp
    if (condition)
    {
        jobs_if_true;
    }
    else
    {
        jobs_if_false;
    }
    ```

## 1.5 类简介

- 数据结构 data structure -> 类 class -> 类类型 class type
- 成员函数 member function = 方法 method
- 点运算符（`.`） 
    - `item.isbn()`：名为 `item` 的对象的 `isbn` 成员
    - 左侧：必须是类类型的对象
    - 右侧：必须是该类型的一个成员名
    - 运算结果：右侧运算对象指定的成员
