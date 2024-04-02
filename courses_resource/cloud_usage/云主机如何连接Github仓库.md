---
title: 云主机如何连接Github仓库
description: 
published: true
date: 2024-04-02T15:09:26.617Z
tags: 
editor: markdown
dateCreated: 2024-04-02T14:18:40.162Z
---

#  一.创建一个github账号

[如何创建一个github账号](https://blog.csdn.net/phmatthaus/article/details/127245454?ops_request_misc=%7B%22request%5Fid%22%3A%22171196341716800225595790%22%2C%22scm%22%3A%2220140713.130102334..%22%7D&request_id=171196341716800225595790&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~all~sobaiduend~default-1-127245454-null-null.142^v100^control&utm_term=如何创建github账号&spm=1018.2226.3001.4187)

# 二.在github上创建一个仓库

登录上github后出现这个界面

![img](images/0.png =800x)

然后点击右 上角头像，在按照图片位置点击：

![img](images/17.png =800x)

继续按照图片上的位置进行点击：

![img](images/1.png =800x)

![img](images/2.png =800x)

![img](images/3.png =800x)

创建成功：

![img](images/4.png =800x)

# 三.云主机连接Github仓库

### 1.在linux中生成ssh密钥

```bash
ssh-keygen -t rsa -b 4096 -C "your_email@example.com"
```

在这里，替换 your_email@example.com 为您的 GitHub 关联邮箱。

![img](images/23.jpg =800x)

![img](images/24.png =800x)

### **2.提取公钥**

执行命令：

```bash
cat .ssh/id_rsa.pub
```

然后可以得到很长的字符串，复制这一长串![img](images/5.png =800x)

### 3. 然后将ssh公钥添加到Github上

![img](images/6.png =800x)

![img](images/7.png =800x)

![img](images/8.png =800x)

### 4.测试是否连接上github

执行命令：

```bash
ssh -T git@github.com
```

![img](images/9.png =800x)

![点击并拖拽以移动](data:image/gif;base64,R0lGODlhAQABAPABAP///wAAACH5BAEKAAAALAAAAAABAAEAAAICRAEAOw==)

#### 如果没有连接成功：

失败的话就往文件`/etc/hosts`，插入gitub网站的ipv4，再`source /etc/hosts` 一下，测试`ping github.com`如下：
![在这里插入图片描述](images/10.png =800x)

![在这里插入图片描述](images/11.png =800x)

### 5.连接成功后然后执行命令

```bash
git config --global user.email "your_email@example.com"
git config --global user.name "Your Name"
```

"your_email@example.com"注册github的邮箱

![img](images/12.png =800x)

"Your Name"你github的用户名
![img](images/13.png =800x)

### 6.最后将github仓库克隆到本地：

执行命令：

```bash
git clone git@github.com:username/repository.git
```
- 其中，`username` 是您的 GitHub 用户名，`repository` 是您要连接的仓库名称，也就是最开始创建的仓库名。
- 这里建议先将命令编辑好，然后复制粘贴到命令行中，不然会卡住，粘贴后直接回车执行,然后直接粘贴到命令行中执行：

![img](images/14.png =800x)

然后可以在本地查看到刚刚克隆下来的文件

![img](images/15.png =800x)

进入克隆下来的文件夹：  
![img](images/16.png =800x)  
然后随便创建一个文件：
![img](images/18.png =800x)

### 7.进行上传文件：

执行命令：

```bash
git add --all 文件名
```
一般使用的我使用的都是：
```bash
git add --all .  //意思就是上传该文件夹的所有文件
```
演示：
![img](images/19.png =800x)

然后进行对本次操作的备注  
执行命令：

```bash
git commit -m "备注内容"
```

![img](images/20.png =800x)

最后上传到github仓库中：

执行命令：

```bash
git push -u origin main
```

- **`git push`: 这是 Git 命令，用于将本地更改推送到远程仓库。**
- **`-u origin main`: `-u` 选项是 `--set-upstream` 的缩写，它告诉 Git 将本地分支与远程分支关联起来。`origin` 是远程仓库的名称，`main` 是要推送到的远程分支的名称。**

![img](images/21.png =800x)

最后在github的仓库页面可以看到上传上来的test.c文件:
 ![img](images/22.png =800x)