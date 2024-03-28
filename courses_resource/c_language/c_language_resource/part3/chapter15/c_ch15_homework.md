---
title: 作业1：开发一个简易的天气查询命令行工具
description: 
published: true
date: 2024-03-28T14:26:52.666Z
tags: 作业
editor: markdown
dateCreated: 2024-03-28T14:26:52.666Z
---

# 背景

命令行工具在日常工作中为用户提供了便捷的操作体验。通过开发一个天气查询工具，学习如何处理更复杂的命令行参数，以及如何在程序中使用多种数据类型和条件判断。

# 任务描述

你需要创建一个命令行程序**`weather_cli`**，该程序可以接受用户输入的城市名称作为参数，并打印出该城市当前的天气情况，包括温度、天气状态（晴天、多云、下雨、下雪），以及用emoji表达的天气状态。程序应该支持以下命令行选项：

- **`h`** 或 **`-help`**：显示帮助信息，包括程序的用法和支持的命令行选项。
- **`c <city>`** 或 **`-city <city>`**：指定查询天气的城市。**`<city>`**是用户需要查询的城市名称。
- **`t`** 或 **`-temperature`**：仅显示指定城市的温度信息。
- `**C**` 或 **`-conditon`**：仅显示指定城市的天气状态（包括emoji表示）。
- **`a`** 或 **`-all`**：显示所有可查询城市的天气信息。
- **`v`** 或 **`-version`**：显示程序的版本信息。

# 要求

1. 使用**`getopt`**函数来解析命令行参数。
2. 如果未指定城市名称或输入了未知的选项，程序应显示错误消息并退出。
3. 根据用户指定的选项，打印相应的天气信息。为简化实现，你可以预定义一些城市的天气数据。
4. 程序应能够处理多个选项组合的情况，并合理展示所请求的天气数据。
5. 对于天气状态，请使用以下emoji作为表示：
    - 晴天：☀️
    - 多云：⛅
    - 下雨：🌧️
    - 下雪：❄️

# 示例数据

为了简化任务，这里提供了一些模拟的天气数据：

```c

// 城市名：温度（摄氏度），天气状态，天气状态emoji
"Beijing": "15°C, 晴天, ☀️",
"Shanghai": "18°C, 多云, ⛅",
"New York": "10°C, 下雨, 🌧️",
"London": "7°C, 下雪, ❄️",

```

# 示例输出

```

$ ./weather_cli -c Beijing
Beijing Weather: 15°C, 晴天 ☀️

$ ./weather_cli --city Shanghai --temperature
Shanghai Temperature: 18°C

$ ./weather_cli -c "New York" --status
New York Weather Status: 下雨 🌧️

$ ./weather_cli -a
All Cities Weather Information:
Beijing: 15°C, 晴天 ☀️
Shanghai: 18°C, 多云 ⛅
New York: 10°C, 下雨 🌧️
London: 7°C, 下雪 ❄️

```