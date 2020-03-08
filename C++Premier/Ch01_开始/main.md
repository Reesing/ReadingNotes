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