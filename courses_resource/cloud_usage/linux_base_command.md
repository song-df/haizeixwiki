---
title: Linux基本常识及常用命令
description: 
published: true
date: 2024-09-20T07:41:09.768Z
tags: 工具手册
editor: markdown
dateCreated: 2024-03-02T05:33:41.514Z
---

> 如果想以超低成本获得十多门船说系列课程的学习机会，可购买船票。
[💰 船票1年期购买入口](https://b23.tv/uCOhTk2)
[💰 船票4年期购买入口](https://b23.tv/vU6TsQU)
优惠券可以找Bili姐👩‍💻领取。姐的二维码：
![新bili姐.png](/images/新bili姐.png =100x)
{.is-success}


> 命令行中使用相对路径更简洁方便，绝对路径需要考虑不同机器上的根目录位置。常用命令包括cd切换目录、rm删除文件或目录、cat获取文件内容。还介绍了系统相关命令如exit退出连接、reboot重启系统、apt update更新软件仓库缓存、apt install xxx下载软件。此外，还提供了vim的简单使用方法，包括进入退出vim、四种模式（普通、命令、插入、可视）、快速跳转、编辑（删除、复制、粘贴）、撤销与恢复、搜索、删除、复制及粘贴、在云主机上编程、man手册的使用、man手册汉化和彩色man手册。


**目录**

## 使用到的命令清单

### 文件及目录相关

| 命令名 | 作用 |
| --- | --- |
| ls（list） | 列出目录下的内容 |
| cd（change directory） | 切换目录 |
| mkdir（make  directory） | 创建目录 |
| rm （remove） | 删除文件或目录 |
| cat （concatenate） | 获取文件内容 |
| pwd |  |



### 系统及其他

| 命令名 | 作用 |
| --- | --- |
| exit | 退出连接 |
| reboot | 重启系统 |
| apt update | 更新软件仓库缓存，为更新和下载软件做准备 |
| apt install  xxx | 下载xxx软件 |
|  |  |



### 编程相关

| 命令名 | 作用 |
| --- | --- |
| gcc | 编译源代码 |
| vim | 打开编辑器 |
| ./a.out | 执行可执行程序 |
| man xxx | 查看xxx的手册 |

## Tabby使用的一些Tips

1. 如何让tabby自动连接到云主机 :
  ![默念Tabby标签打开连接设置1](/courses_resource/cloud_usage/images/tabby_auto_connect_1.png)
  ![默念Tabby标签打开连接设置2](/courses_resource/cloud_usage/images/tabby_auto_connect_2.png)

2. 如何快速在多个终端之间切换
    1. `ctrl + shfit + t` 打开新终端
    2. `ctrl + TAB` 切换到下一个终端
    3. `Ctrl + shfit + left`  切换到左侧终端
    4. `ctrl + shfit + right` 切换到右侧终端

3. 如何将多个终端放在一个窗口，并在之间切换

将鼠标移动至终端标题序号位置，待鼠标样式切换为 ✋🏻 ，拖拽到其他窗口的边缘四个位置，可将其放置在此窗口的相应位置

将其重新拖拽到上方标题栏，可重新恢复为独立的终端

  ![Tabby窗口操作快捷键](/courses_resource/cloud_usage/images/tabby_tabs_switch.png =600x)

4. 如何在窗口中批量执行命令  `ctrl + shfit + I`  、 **`ctrl + shfit + alt + I`**
5. 如何传输文件 `sz` `rz` `sftp`

## 文件及目录相关命令


Windows的目录结构：
  ![Windows目录结构](/courses_resource/cloud_usage/images/windows_folder_tree.png =700x)

Linux目录树
  ![Linux目录树](/courses_resource/cloud_usage/images/linux_folder_tree.png =700x)
###  几个特殊的目录介绍：`.`  `..`  `~`  `-`   `/`
    1. `.` 当前目录
    2. `..` 上级目录，也就是父目录
    3. `~` 当前用户的家目录
    4. `-` 上次工作目录
    5. `/` 根目录
    
###  命令的基本构成
-  命令（Command）
	这是实际执行的操作或程序，比如 ls、cd、rm、touch、ssh等。
- 选项（Options）
	选项用于修改命令的行为，通常以短横线（-）或双短横线（--）开头。选项可以是单个字母或完整单词，例如：
• -l：短选项（ls  -l 显示详细信息）
• --help：长选项（显示命令帮助）
	可以组合使用多个选项，例如 ls   -la，表示同时使用 -l 和 -a 选项。
- 参数（Arguments）
	参数是命令执行的对象，如文件名、目录路径等。例如：
• ls /home/user：/home/user 就是参数，指定要列出的目录。
• rm file.txt：file.txt 是参数，指定要删除的文件。


### 如何判断命令执行成功与否？

每个命令都有自己的返回值，正如我们写程序的时候的`return 0;`返回的是成功的`0`

- 返回值为`0`：命令执行成功
- 返回这`不为0`：命令执行失败

  ![Linux命令返回值](/courses_resource/cloud_usage/images/linux_command_return_value.png =500x)


3. mkdir - 创建目录

```bash
mkdir new_dir #在当前位置创建一个new_dir的目录
mkdir /tmp/new_dir_1  #在/tmp下创建new_dir_1的目录
mkdir -p /tmp/123/456/789 #创建/var/123/456下的789目录，但是如果所有上级目录中，有不存在的，则一并创建
```

4. `ls` - 列出目录下的内容

```bash
ls #ls不加任何参数，则使用缺省参数`.`,也就是当前目
ls / #将列出根目录下的所有文件及目录
ls -a #列出当前目录下的所有文件，包括隐藏文件
ls -l #以长列表的形式展示文件及目录的详细信息
ls -al #以长列表的形式展示全部文件及目录的详细信息
```


5. 绝对路径和相对路径
  
    绝对路径和相对路径是指在命令行中指定文件或目录时所使用的两种不同的路径表示方式。
    
    - 绝对路径：指从根目录开始的完整路径。如：`/home/user/file.txt`
    - 相对路径：指相对于当前工作目录的路径。如：`./file.txt` 表示当前目录下的 file.txt。
    
    在使用命令行时，大多数情况下建议使用相对路径。因为相对路径更加简洁，而且更方便移植，不需要考虑在不同机器上的根目录位置不同，而绝对路径则需要考虑这一点。
    
6. `cd` - 切换当前工作目录

```bash
cd #cd不加参数，则会回到自己的家目录
cd - # 回到上次工作目录
cd .. # 切换到父目录
cd / #切换到根目录
cd ~ #切换到家目录
pwd #打印当前工作目录
```

7. `rm` - 删除文件或目录

```bash
rm file.txt # 删除文件file.txt
rm -r dir # 删除目录dir及其下的所有文件和目录
rm -f file.txt # 强制删除文件file.txt，不提示确认
```

8. `cat` - 获取文件内容

```bash
cat file.txt # 将file.txt的内容输出到屏幕上
cat file1.txt file2.txt # 将file1.txt和file2.txt的内容按照顺序输出到屏幕上
cat -n file.txt  # 显示行号
```

9. `cp` - 复制文件或目录

```bash
cp file1.txt  file2.txt   # 将file1.txt的内容复制以新的文件中，新文件的名称为file2.txt
cp -r dir1  dir2   # 将目录dir1中的所有文件和目录复制到新的目录下，内容相同，新目录的名称为dir2
cp file1.txt dir1  # 如果dir1是一个已经存在的目录，会将file1.txt文件复制到dir1目录中，文件名保持不变，同样为                      file1.txt
cp file1.txt dir1/file2.txt  # 如果dir1是一个已经存在的目录，会将file1.txt文件复制到dir1目录中，文件名改为                      file1.txt
```

> 注意：所有要创建数据的操作，如果权限不够，刚无法创建，必须要有对应的权限才能正常执行命令。{.is-success}

## 系统及相关命令

1. `exit` - 退出连接

```bash
exit # 退出连接
```

2. `reboot` - 重启系统

```bash
reboot # 重启系统
```

3. `apt update` - 更新软件仓库缓存，为更新和下载软件做准备

```bash
apt update # 更新软件仓库缓存
```

4. `apt upgrade` - 更新软件及应用

```bash
apt upgrade # 更新软件及应用
```

5. `apt autoremove` - 自动移除系统中不再需要的依赖包

```bash
apt autoremove # 自动移除系统中不再需要的依赖包
```

6. `apt install xxx` - 下载xxx软件

```bash
apt install xxx # 下载xxx软件
```

## vim的简单使用

### 如何进入及退出vim

1. `:w`  `**W**`rite
2. `:wq`  `**W**`rite and **`Q`**uit
3. `:q` **`Q`**uit
4. `:q!`  **`Q`**uit force

### vim的四种模式

1. 普通模式（默认进入模式）
  
    在普通模式下，可以使用多个命令对文本进行处理，比如复制、剪切、粘贴、插入等。此外，还可以使用`:command`命令执行特定的操作。
    
2. 命令模式
  
    在普通模式下输入`:`进入命令模式，可以执行一些高级命令，比如查找、替换、保存、退出等操作。
    
3. 插入模式
  
    插入模式是用来输入文本的模式。在普通模式下，按下`i`或`a`等命令即可进入插入模式。在插入模式下，可以输入文本，但不能执行命令。要返回普通模式，需要按下`ESC`键。
    
4. 可视模式
  
    可视模式用于选择文本。在普通模式下，按下`v`或`V`即可进入可视模式。在可视模式下，可以使用`h`、`j`、`k`、`l`等命令选择文本，还可以使用`y`、`d`等命令复制、剪切选中的文本。
    

![Vim模式](/courses_resource/cloud_usage/images/vim_mode.png =500x)

### 如何在文档中快速跳转

1. 普通模式和可视模式下
    1. `gg` 到达文件首行
    2. `G` 到达文件末行
    3. `5gg` 到达第五行
    4. `5G` 到达第五行
2. 插入模式下
    1. 使用方向键

### 如何进行编辑

在`vim`中，编辑器普通模式、插入模式和可视模式下，可以执行不同的编辑操作。

1. 普通模式
    在普通模式下，可以使用`d`,`x`等命令对文档内容进行删除，`y`来复制，`p`来粘贴。
    此外，还可以使用`:command`命令执行特定的操作。
    
2. 插入模式
    插入模式是用来输入文本的模式。在普通模式下，按下`i`或`a`等命令即可进入插入模式。在插入模式下，可以输入文本，但不能执行命令。要返回普通模式，需要按下`ESC`键。
    
3. 可视模式
    可视模式用于选择文本。在普通模式下，按下`v`或`V`即可进入可视模式。在可视模式下，可以使用`h`、`j`、`k`、`l`等命令选择文本，还可以使用`y`、`d`等命令复制、剪切选中的文本。

### 如何删除

1. 普通模式下
    1.1. `dd` 删除一行
    1.2. `5dd` 删除5行
    1.3. `d5G` 删除到第5行
    1.4. `dw` 删除当前单词
    1.5. `d$` 删除到行末
    1.6. `d^` 删除到行首
    1.7. `x` 删除当前字符
2. 插入模式下
    2.1. 使用`backspace`删除即可
3. 可视模式下
    3.1. 选中后使用`d`可删除

### 如何复制及粘贴

在`vim`中，仅可在普通或可视模式下进行复制和粘贴

1. 普通模式
    1.1. `yy` 复制一行
    1.2. `5yy` 复制**5**行
    1.3. `y5G` 复制到第**5**行
    1.4. `p` 粘贴当当前光标之后
    1.5. `P` 粘贴到之前
2. 可视模式
    2.1. 选中后使用`y`复制
    2.2. 使用`p`、`P`来粘贴

### 撤销与恢复

在普通模式下，可以使用`u`命令撤销（**`u`**ndo）上一步操作，`ctrl + r` 来重做（`**r**`edo）。

### 搜索

在普通模式下，可以使用`/`命令搜索文本。输入要搜索的文本，然后按下`Enter`键即可，按`n`查找下一个（`**n**`ext），`N`查找上一个。

> 🔑 如果想更详细的学习`vim`，建议你直接使用vim官方提供的教学文档，在终端执行`vimtutor`试试吧~
什么？这个文档是英文的！那么试一下这个命令吧：`vimtutor zh`



## 如何在云主机上编程

1. 使用 `vim xxx.c` 命令可以打创建`.c`文件,编写代码
  
    ![编辑源文件](/courses_resource/cloud_usage/images/vim_xxx.c_demo.png)
    
2. 使用gcc xxx.c -o xxx对文件进行编译
  
    ![编译源文件](/courses_resource/cloud_usage/images/linux_gcc_xxx.c_demo.png)
    
3. 执行可执行程序
  
    ![执行程序](/courses_resource/cloud_usage/images/linux_exe_a.out_demo.png)
    

### Man手册的使用

man是Linux下的一个非常重要的命令，用于查看系统或程序的手册。使用man命令可以查看命令的用法、参数、返回值等信息，非常实用。

man命令的格式为：

```bash
man [选项] [命令或程序或函数]
```

常用的选项有：

- `k`：查询命令的简要说明
- `f`：查询命令的详细说明
- `a`：显示所有与查询项相关的手册页

例如，要查询ls命令的用法，可以使用以下命令：

```bash
man ls
```

这样就可以查看到ls命令的用法、参数、返回值等信息。

使用man命令需要注意的是，man手册通常会分为多个章节，每个章节都有不同的内容。常用的章节有：

- 第一章：用户命令
- 第二章：系统调用
- 第三章：C库函数
- 第四章：特殊文件
- 第五章：文件格式和约定
- 第六章：游戏和屏保
- 第七章：杂项
- 第八章：系统管理命令

可以使用以下命令查询指定章节的手册页：

```bash
man [章节号] [命令或程序]
```

例如，要查询scanf的C库函数手册页，可以使用以下命令：

```bash
man 3 scanf
```

这样就可以查看到ls命令的C库函数手册页了。

> 🔥 在vim中，可以直接使用 shfit + K 来查看当前光标所在关键字的Man手册，如果是要加上man手册的章节的话，可以先输入数字，再输入shfit + K；
退出内置手册，直接按q即可


## man手册汉化

1. 要在Ubuntu 20.04上汉化man手册，可以执行以下命令：

```bash
sudo apt install manpages-zh
```

1. 使用`vim ~/.zshrc`打开.zshrc文件，在最后一行之后添加以下内容

```bash
export LC_ALL=en_US.UTF-8
export LANG=en_US.UTF-8

alias cman="man -M /usr/share/man/zh_CN/"
```

1. 使用`cman`命令查看汉化版`MAN`手册

```bash
source ~/.zshrc
cman ls 
```

## 彩色man手册

1. 使用`vim ~/.zshrc` 打开zsh配置文件
2. 找到plugins开始的一行，填写并修改为以下内容

```bash
plugins=(git·zsh-syntax-highlighting·colored-man-pages)
```

1. 关闭并重新打开连接即可获得彩色版man手册

![彩色版man](/courses_resource/cloud_usage/images/linux_man_color1.png)

![彩色版man](/courses_resource/cloud_usage/images/linux_man_color2.png)