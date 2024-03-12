---
title: Vim优化配置
description: 
published: true
date: 2024-03-12T14:13:47.441Z
tags: 
editor: markdown
dateCreated: 2024-03-12T08:21:15.792Z
---


<aside>
📌 以下内容主要用在已有Linux或Mac环境的Vim配置
此处以Ubuntu为例。
</aside>

**前提：**

1. 你已经在使用Linux 或 Mac 系统
2. 你已经在使用vim来编写代码

> 如果你没有Linux或Mac系统，请参照 [Linux开发环境配置](/courses_resource/cloud_usage/Linux开发环境配置) 来购买云主机，并配置以`Vim`为核心的编程环境。
> 

![Untitled](Vim%E7%9A%84%E9%85%8D%E7%BD%AE%2014a38241234140b2a6782b56e7cf838e/Untitled.png =800x)

# 配置过程如下

> **如果你是mac系统，请直接执行3，4步骤即可！**
> 
1. 更新软件源

```bash
sudo apt update
```

1. 下载git和wget

```bash
sudo apt install wget git -y
```

1. 下载一键配置脚本

```bash
wget 47.93.11.51:88/install_vim.sh
```

1. 执行一键配置脚本

```bash
bash install_vim.sh
```