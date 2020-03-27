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
    - a


