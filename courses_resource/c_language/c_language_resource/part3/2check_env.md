---
title: 2check_env
description: 
published: true
date: 2024-03-12T08:21:33.595Z
tags: 
editor: markdown
dateCreated: 2024-03-12T04:45:14.077Z
---

# 2、验证环境是否符合要求

AI summary: 验证环境是否符合要求，包括确认操作系统版本、主机用户确认、VIM功能和MAN手册的重要性。

[回到首页](/home)

下一节：

[3、云主机安全强化](/courses_resource/c_language/c_language_resource/part3/3ecs_securet) 

上一节：

[1、打造系统编程环境](/courses_resource/c_language/c_language_resource/part3/1build_linux_env) 

> 不管是**云主机**还是**虚拟机**，需要首先连接到Ubuntu系统或者打开终端，并进行下面的操作。
> 

## 2.1 操作系统版本

对于初学者，推荐的系统版本为：**Ubuntu 20.04**

在Ubuntu系统中，我们可以通过命令行确认系统的版本。首先，打开终端，然后输入以下命令：

```bash
lsb_release -a

cat /etc/os-release
```

执行这两个个命令后，会显示出你的**Ubuntu**系统的版本信息。

> 如何你对Linux足够了解，可不受此限制。
Ubuntu的以下版本都可以：`18.04`,`20.04`,`22.04`
> 

## 2.2 主机用户确认

很多初学者在使用Linux时，为图方便，会使用`root`用户长期操作系统，或者在上面开发学习，这样做的风险是很高的。

`root`具有系统的完全控制权，使用`root`用户可能误伤操作系统，导致系统错误，或其他永久性伤害。

请按照云主机的基本配置，新建或切换到**普通用户**进行云主机操作。

在Ubuntu系统中，可以通过 `su` 命令切换到其他用户。假设你要切换到的用户名是 `username`，你可以在终端输入以下命令：

```bash
su - username
```

然后输入该用户的密码。成功后，你将切换到该用户的环境中。

如果你要回到先前的用户，只需在终端输入 `exit` 命令即可。

**sudo命令：**

`sudo`命令是Linux系统中的一个非常重要的命令，它允许系统管理员委派权限，也就是说，普通用户可以使用`sudo`执行一些需要管理员权限的命令。在使用`sudo`时，你可能需要输入你的密码。

例如，你可以使用`sudo`来更新你的系统：

```bash
sudo apt-get update
```

**passwd命令：**

`passwd`命令用于更改用户的密码。要更改密码，只需在命令行中输入`passwd`，然后按照提示输入新的密码即可。

例如：

```bash
passwd username
```

系统会提示你输入新的密码，并要求你再次输入以确认。为了安全起见，输入的密码在屏幕上不会显示。

## 2.3 VIM功能

在后面的学习中，我们将全部使用`vim`在**Linux系统**上进行编程，请务必确保自己的云主机的`vim`以做过必要的优化。

VIM的配置，请参考下面的文档：

[Vim的配置](/courses_resource/cloud_usage/Vim_setup) 

## 2.4 MAN手册

MAN手册是Linux操作系统中面向系统编程者最重要的帮助工具，强烈建议大家使用man手册来查看系统文档，辅助学习。

[快速使用云环境](/courses_resource/cloud_usage/快速使用云环境)