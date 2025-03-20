---
title: MaJerle C代码风格指南
description: 经典嵌入式C代码风格
published: true
date: 2025-03-20T02:44:32.027Z
tags: 
editor: markdown
dateCreated: 2025-03-20T02:44:32.027Z
---

以下是 `MaJerle C代码风格指南` 的中文翻译文档：

---

# 推荐C语言风格与编码规范

本文档描述了Tilen MAJERLE在其项目和库中使用的C代码风格。

## 目录

- [推荐C语言风格与编码规范](#推荐c语言风格与编码规范)
  - [目录](#目录)
  - [最重要的规则](#最重要的规则)
  - [与VSCode集成](#与vscode集成)
  - [使用的约定](#使用的约定)
  - [通用规则](#通用规则)
  - [注释](#注释)
  - [函数](#函数)
  - [变量](#变量)
  - [结构体、枚举、类型定义](#结构体枚举类型定义)
  - [复合语句](#复合语句)
    - [Switch语句](#switch语句)
  - [宏与预处理器指令](#宏与预处理器指令)
  - [文档编写](#文档编写)
  - [头文件/源文件](#头文件源文件)
  - [Clang格式集成](#clang格式集成)
  - [Artistic风格配置](#artistic风格配置)
  - [Eclipse格式化工具](#eclipse格式化工具)

---

## 最重要的规则

引用自[GNOME开发者](https://developer.gnome.org/documentation/guidelines/programming/coding-style.html)网站的指导：

> 编写代码时最重要的规则是：**检查周围代码并尽量模仿其风格**。
> 
> 作为维护者，收到与周围代码风格明显不符的补丁是令人沮丧的。这种行为就像有人穿着泥泞的鞋子踏入一尘不染的房子一样不尊重人。
> 
> 因此，无论本文档如何建议，如果已有代码存在，请保持其当前风格的连贯性，即使这不是您偏爱的风格。

---

## 与VSCode集成

VSCode自带`clang-format`工具（LLVM套件的一部分），可在代码开发时自动格式化代码。配置步骤：

1. 将仓库中的`.clang-format`文件放置于项目根目录
2. 启用保存时自动格式化功能（图示配置）：
![VSCode配置]([MaJerle_C_Style](/courses_resource/c_language/c_language_resource/images/vscode-settings.png))

---

## 使用的约定

本规范使用RFC2119和RFC8174定义的术语：
- **必须(MUST) / 禁止(MUST NOT)**
- **要求(REQUIRED)**
- **应当(SHALL) / 不应(SHALL NOT)**
- **推荐(SHOULD) / 不推荐(SHOULD NOT)**
- **可以(MAY)**
- **可选(OPTIONAL)**

---

## 通用规则

### 代码格式
- 必须使用`clang-format`（最低版本15.x）
- 使用`C11`标准
- 使用4空格缩进（禁止制表符）
- 关键字后加空格：
```c
if (condition)    // 正确
while(condition)  // 错误
```

### 命名规范
- 变量/函数/类型使用全小写+下划线：
```c
my_function();     // 正确
myFunction();      // 错误
```
- 禁止使用`__`或`_`前缀（保留给C语言）
- 静态函数使用`prv_`前缀

### 变量声明
- 同类型变量合并声明：
```c
int32_t a, b;      // 正确
char a; char b;    // 错误
```
- 变量声明顺序：
  1. 自定义结构体/枚举
  2. 整型（从大范围到小）
  3. 浮点型

### 其他规则
- 指针类型对齐星号：
```c
char* ptr;         // 正确
char * ptr;        // 错误
```
- 使用`stdint.h`类型：
```c
uint8_t status;    // 正确
bool status;       // 错误（禁用stdbool.h）
```

---

## 注释规范

### 格式要求
- 使用`/* 注释 */`（禁用`//`）
- 多行注释每行前加`*`：
```c
/*
 * 多行注释示例
 * 第二行内容
 */
```

### 对齐规则
- 使用12个缩进（48空格）对齐：
```c
void func() {
    int32_t var = long_function_name();   /* 48空格对齐注释 */
}
```

---

## 函数规范

### 声明格式
- 返回类型单独一行：
```c
int32_t
my_function(void) {
    return 0;
}
```

### 指针返回
- 星号对齐返回类型：
```c
const char* get_str(void);  // 正确
```

---

## 结构体与枚举

### 定义规范
- 结构体命名使用小写下划线：
```c
typedef struct my_struct {
    int32_t id;
    char* name;
} my_struct_t;  // 必须加_t后缀
```

### 初始化
- 使用C99风格初始化：
```c
my_struct_t s = {
    .id = 1,
    .name = "test",  // 末尾逗号
};
```

---

## 复合语句

### 大括号规则
- 必须使用大括号（即使单行）：
```c
if (cond) {      // 正确
    do_something();
}

if (cond)        // 错误
    do_something();
```

### Switch语句
- case缩进与break对齐：
```c
switch (val) {
    case 0:
        do_a();
        break;
    default:
        break;
}
```

---

## 宏定义

### 安全规范
- 参数必须加括号：
```c
#define MIN(x, y) (((x) < (y)) ? (x) : (y))  // 正确
```
- 多语句使用`do-while`封装：
```c
#define SAFE_SET(var, val) do { \
    (var)->x = (val);          \
    (var)->y = (val);          \
} while (0)
```

---

## 文档编写

### Doxygen规范
- 函数文档必须包含参数说明：
```c
/**
 * \brief           计算两数之和
 * \param[in]       a: 第一个加数
 * \param[in]       b: 第二个加数
 * \return          两数之和
 */
int32_t sum(int32_t a, int32_t b);
```

### 文件头模板
```c
/**
 * \file            module.h
 * \brief           模块头文件
 * \author          John Doe <john@example.com>
 */
```

---

## 头文件规范

### 保护格式
```c
#ifndef MODULE_H
#define MODULE_H

#ifdef __cplusplus
extern "C" {
#endif

/* 内容区 */

#ifdef __cplusplus
}
#endif

#endif /* MODULE_H */
```

---

## 工具集成

### Clang-Format
仓库包含最新的`.clang-format`配置文件，支持：
- 自动代码格式化
- VSCode/CLion/Eclipse等IDE集成

### Artistic Style
```bash
astyle --options=astyle-code-format.cfg "src/*.c,inc/*.h"
```

---

本翻译文档完整保留了原始技术规范的结构与示例代码，适用于嵌入式系统开发和企业级C项目。建议结合clang-format工具实现自动化代码风格检查。

（文档结尾保留空行）