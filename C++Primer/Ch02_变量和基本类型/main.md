# 第二章 变量和基本类型

## 2.1 基本内置类型

### 2.1.1 算术类型

- 算术类型（arithmetic type）分两类
    - 整型（integral type）
        - **字符** 和 **布尔类型**
        - 其他整形（见 [带符号类型和无符号类型](#unsigned)）
    - 浮点型

- 算术类型的尺寸（即数据所占 **byte** 数量）在不同机器上有所差别。
    - 字节（byte） = 可寻址的最小内存块
    - 字（word）= 存储的基本单元，通常由几个字节组成
    - 一个字节（byte）至少要能容纳机器基本字符符集中的字符
        - `char` 大小 = 一个机器字节（byte）
    - **1 byte = 8 bits, word = 4(or 8) bytes = 32(or 64) bits**
    - 内存中每个byte与被称为地址（address）的数字关联起来
        - 为了明确内存中某地址的含义，**必须首先知道存储在该地址的数据类型**
        - 数据类型决定了数据所占 bits 数，以及如何解释这些 bits 的内容

- 算术类型最小尺寸

    类型|最小尺寸|<center>说明</center>
    :-:|:-:|:--
    `bool`| 未定义|-
    `char`| 8位 | 应确保可以存放 **机器基本字符集** 中任意字符<br>`char` 大小 = 一个机器字节（byte）
    `wchar_t`| 16位 | 应确保可以存放 **机器最大扩展字符集** 中任意字符
    `char16_t`| 16位 |为 **Unicode字符** 集服务
    `char32_t`| 32位|为 **Unicode字符** 集服务
    `short`| 16位|-
    `int`| 16位| `int` 至少和 `short` 一样大
    `long`| 32位| `long` 至少和 `int` 一样大
    `long long`| 64位| `long long` 至少和 `long` 一样大
    `float`| 6位有效数字 | `float` = 1 word = 4 bytes = 32 bits
    `double`| 10位有效数字 | `double` = 2 words = 8 bytes = 64 bits
    `long double`|10位有效数字 |`long double` = 3(or 4) words = 12(or 16) bytes = 96(or 128) bits

- <a name="unsigned">带符号类型和无符号类型</a>
    - 其他整形
        - 带符号的 signed
            - 可以表示正数、负数或0
            - `int`，`short`，`long`，`long long`
        - 无符号的 unsigned
            - 仅能表示大于等于0的值
            - `unsigned int`（可缩写为 `unsigned`），`unsigned short`，`unsigned long`，`unsigned long long`
    - 字符型
        - `char`
            - `char` != `signed char`
        - `signed char`
        - `unsigned char`
    - 如何选择类型？
        - C++ 的设计准则之一是**尽可能地接近硬件**
        - 当明确知道不可能为负时，用 unsigned
        - 在算术表达式中，不要使用 `bool` 或 `char`
            - 因为随机器不同，`char` 类型有可能是 signed，也可能是 unsigned，进行运算特别容易出问题
        - 执行浮点数运算用 `double`

### 2.1.2 类型转换

- 若使用了一种类型而其实应取另一种类型时，程序会自动进行类型转换。类型所能表示的值的范围决定了转换的过程
    ```cpp
    // 以下假设 char 占 8 bits
    unsigned char c = -1; //unsigned char 取值范围为 0~255，因此c的值为255
    signed char c2 = 256; // signed char 取值范围为 -127~127, 因此 c2 的值未定义
    ```
    - 当赋给 unsigned 类型一个超出表示范围的值时，结果是初始值对 unsigned 类型表示**数值总数取模后的余数**
    - 当赋给 signed 类型一个起来表示范围的值时，结果是**未定义的**（undefined），程序可能继续工作，或崩溃，或生成垃圾数据

- 含有无符号类型的表达式
    - **算术表达式中既有 unsigned 数又有 `int` 时，`int` 值会转换为 unsigned**
        ```cpp
        // 假设 int 占 32 bits
        unsigned u = 10;
        int i = -42;
        cout << i + i << endl; // 输出 -84, 正常
        cout << u + i << endl; // 输出 4294967264 = (2^32-42) + 10
        ```
    
    - 若从 unsigned 中减去一个数时，必须确保结果非负，否则会取模
        - **会关系到循环的写法！**

    - 不要滥用 unsigned 和 signed 类型！

### 2.1.3 字面值常量（literal）