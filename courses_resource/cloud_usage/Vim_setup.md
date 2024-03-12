---
title: Vim_setup
description: 
published: true
date: 2024-03-12T08:23:32.705Z
tags: 
editor: markdown
dateCreated: 2024-03-12T08:21:15.792Z
---

# Vim的配置

[**🏡 主页**](https://www.notion.so/fe57ecdf830840f2b9ef80f4b2d6a5f0?pvs=21)  **[☁️ Linux云主机的购买与配置**](https://www.notion.so/Linux-43572cd6237d48929ab7d805ef78882b?pvs=21)    [📝  **vim的优化**](https://www.notion.so/Vim-df538ebfd7744ef8ae5b6c27e3611522?pvs=21)    [**C语言全能实战课**](https://www.notion.so/22960bcff7024287bda3c1f6dc3a46bc?pvs=21)  [ **](https://www.notion.so/Vim-df538ebfd7744ef8ae5b6c27e3611522?pvs=21)[👣 其他小工具推荐(科学上网)**](https://www.notion.so/a7aee2fbf9d9431a964d3ace55edd32a?pvs=21)     [**🧑🏻‍🏫](https://www.notion.so/a7aee2fbf9d9431a964d3ace55edd32a?pvs=21) [Linux教程](https://www.notion.so/Linux-00007cbd4abb4d87ac1ad7a6a0ec0ffc?pvs=21)  效率工具推荐**

## Vim优化配置

<aside>
📌 以下内容主要用在已有Linux或Mac环境的Vim配置
此处以Ubuntu为例。

</aside>

**前提：**

1. 你已经在使用Linux 或 Mac 系统
2. 你已经在使用vim来编写代码

> 如果你没有Linux或Mac系统，请参照 [Linux开发环境配置](https://www.notion.so/Linux-e0ffc8d2e38645ff83756bd65e05b5a8?pvs=21) 来购买云主机，并配置以`Vim`为核心的编程环境。
> 

![Untitled](Vim%E7%9A%84%E9%85%8D%E7%BD%AE%2014a38241234140b2a6782b56e7cf838e/Untitled.png =800x)

## 配置过程如下

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