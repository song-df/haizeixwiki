---
title: Linux开发环境配置
description: 
published: true
date: 2024-03-21T09:35:11.834Z
tags: 工具手册
editor: markdown
dateCreated: 2024-03-02T05:33:24.379Z
---

> 如果想以超低成本获得一年13门船票课程的学习机会，可购买船票。
[💰 船票购买入口](https://www.bilibili.com/cheese/pages/packageCourseDetail?productId=598)
{.is-success}


# Linux开发环境配置

AI summary: 本文档介绍了在Linux上配置开发环境的步骤。首先，提供了购买云主机的基本策略，包括短期学习和长期使用的建议。然后，介绍了连接到云主机的方法，包括使用Xshell、Windows Terminal和Tabby。最后，详细说明了在云主机上进行配置的步骤，包括获取环境配置脚本和完成环境配置。



# 文档说明

1. 代码块中的注释，与命令在一起的文字说明，并不是命令，一般以`#`开头，表示`注释`
2. 在本文档中所有类似`{{USERNAME}}`的表述，都是指变量，需要按照自己的实际情况来取相应的值，在执行命令时，将变量替换为真实的值
3. 在文档的有些位置，提供了**检查清单**，检查清单的内容，需要你在执行其后面的操作时，必须确保**已经知道或完成**。
4. 如果你在看视频，视频和文档中对于选择何种云主机可能不同，主要原因为云主机的价格和售卖策略会一直发生变化，我将根据实际情况实时更新该文档，请遇到冲突的地方，`以本文档为准`。

# 目录

# Part01：云主机购买

## 云主机购买的基本策略

> ❗ 以下策略请认真阅读，避免在购买云主机时出错。


1. 如果你是短期学习，可以领取[**腾讯云**](https://curl.qcloud.com/nEpnHWTj)，[**阿里云**](https://www.aliyun.com/daily-act/ecs/activity_selection?userCode=qiird2gj)，京东云，移动云的试用服务器，但是这里一定要明确一件事，**如果你领用了试用的服务器，你将丧失新用户的身份**，后续在同一平台购买服务器将不再享受优惠。
2. 如果你学习的时间和使用时间较长，**建议直接使用新用户身份或学生身份，购买一年或更长时间的服务器。**
3. 如果你对价格敏感，请购买最低配的云服务器或者轻量级服务器，对于基础的学习，目前行业内最低配的也能够用，**但注意别买成数据库或者其他服务**。
4. 新用户的优惠权益仅一次，领取免费商品后，你将不是新用户，对于长期学习的你，**请不要领取1个月，或者半年的云主机**。
5. 为避免购买出错，请在购买时，通过下面文档中的超链接点击进入相应购买页面直接购买，价格为**100左右一年是合理的**，如果超过300一年，请尝试换其他云平台。
6. 如果你已经不是新用户，**我建议你让父母家人帮忙注册云平台账号**，完成实名认证，然后把手机更改为你的手机号，再使用新用户权益购买产品。

**文档更新提示**

![Untitled](Linux%E5%BC%80%E5%8F%91%E7%8E%AF%E5%A2%83%E9%85%8D%E7%BD%AE%20e0ffc8d2e38645ff83756bd65e05b5a8/Untitled.png)

自`2023年12月27日`起，[**腾讯云**](https://curl.qcloud.com/nEpnHWTj)和[**阿里云**](https://www.aliyun.com/daily-act/ecs/activity_selection?userCode=qiird2gj)新用户优惠调整了策略【年末优惠】，具体如下：

| 云平台 | 配置（核心*内存*带宽*系统盘*月流量） | 价格（年） | 备注 | 对比 |
| --- | --- | --- | --- | --- |
| 腾讯云 | 2C * 2G * 3M * 40G * 200G | 62 | × | 带宽高，远程连接顺畅 |
| 腾讯云 | 2C * 2G *4M * 50G * 300G | 118 | 无三年 |  |
| 阿里云 | 2C * 2G * 3M * 50G * 不限量 | 108 | 无三年 | 带宽小，但无流量限制，但除非你有大流量业务的需求，否则无实际意义 |
| 腾讯云 | 2C * 4G * 5M * 60G * 500G | 218 | 三年756 | 同配置首选腾讯云。 |
| 阿里云 | 2C * 4G * 4M *  60G * 不限量 | 298 | 无三年 |  |

**关于流量**：200G的流量是很充足的，你可以对比一下你的手机流量是多少，对于学习来说，200G很难用完。

## 【推荐】腾讯云新用户优惠

> **依然推荐你购买腾讯云**，更高的带宽有助于提升远程操作的流畅性，同时阿里云目前作为云服务的实质上的第一，你可以在后续自己有明确的业务需求时，再使用阿里云新用户优惠购买合适的产品。


> <img src="https://img0.baidu.com/it/u=1553499101,1560333694&fm=253&fmt=auto&app=138&f=JPEG?w=775&h=500" alt="https://img0.baidu.com/it/u=1553499101,1560333694&fm=253&fmt=auto&app=138&f=JPEG?w=775&h=500" width="40px" />腾讯云新用户优惠，轻量级服务器2核2G `62元1年`，每天仅需0.17元；2核4G 218`元1年`，每天只要0.60元。



点击 **[腾讯云新用户优惠](https://curl.qcloud.com/nEpnHWTj)**  进入新用户优惠界面，购买轻量2核2G3M的服务器，注意，这里只有轻量级应用服务器是价格最优惠合理的，请不要购买其他产品，同时不要购买按月购买的产品。

当然，腾讯云提供了3年的购买方式，强烈建议你直接购买三年的云服务，2核4G3年***仅需756***，算是极其便宜的了。

注意：购买界面与视频中有所变化，请大家按照下面的提示选取。

1. 2核心2G内存4M带宽 **`一年118，三年540`**
  
    ![Untitled](Linux%E5%BC%80%E5%8F%91%E7%8E%AF%E5%A2%83%E9%85%8D%E7%BD%AE%20e0ffc8d2e38645ff83756bd65e05b5a8/Untitled%201.png)
    
2. 2核心4G内存5M带宽**`一年218，三年756`**
  
    ![Untitled](Linux%E5%BC%80%E5%8F%91%E7%8E%AF%E5%A2%83%E9%85%8D%E7%BD%AE%20e0ffc8d2e38645ff83756bd65e05b5a8/Untitled%202.png)
    
1. 2核心2G内存3M带宽  **`一年62`**
  
    ![Untitled](Linux%E5%BC%80%E5%8F%91%E7%8E%AF%E5%A2%83%E9%85%8D%E7%BD%AE%20e0ffc8d2e38645ff83756bd65e05b5a8/Untitled%203.png)
    

---

## 【推荐】阿里云新用户优惠

><img src="https://img1.baidu.com/it/u=99570726,629877891&fm=253&fmt=auto&app=138&f=JPEG?w=500&h=500" alt="https://img1.baidu.com/it/u=99570726,629877891&fm=253&fmt=auto&app=138&f=JPEG?w=500&h=500" width="40px" /> 阿里云新用户优惠，轻量级服务器2核2G 108元1年，每天仅需0.3元；2核4G 298元1年，每天只要0.81元。



点击 **[新用户优惠](https://www.aliyun.com/daily-act/ecs/activity_selection?userCode=qiird2gj)**  进入新用户优惠界面，购买108元1年或者298一年的配置都可以，普通同学建议选择108一年的，服务器配置足够。

未登录用户，可在购买时，直接使用钉钉或者支付宝扫码购买。

![Untitled](Linux%E5%BC%80%E5%8F%91%E7%8E%AF%E5%A2%83%E9%85%8D%E7%BD%AE%20e0ffc8d2e38645ff83756bd65e05b5a8/Untitled%204.png)

## 阿里云-高校计划

><img src="https://img1.baidu.com/it/u=99570726,629877891&fm=253&fmt=auto&app=138&f=JPEG?w=500&h=500" alt="https://img1.baidu.com/it/u=99570726,629877891&fm=253&fmt=auto&app=138&f=JPEG?w=500&h=500" width="40px" /> 高校计划适用于在校学生，通过任务，最长可以试用6个月。📢 **注意：参加高校计划会丧失新用户身份，后续不再享受首购优惠！**



点击 **[阿里云高校计划](https://developer.aliyun.com/adc/student/)** 进入高校计划，完成阿里云实名认证与学生认证，即可免费领取一个月，领取后，完成任务，可延长至6个月。

![Untitled](Linux%E5%BC%80%E5%8F%91%E7%8E%AF%E5%A2%83%E9%85%8D%E7%BD%AE%20e0ffc8d2e38645ff83756bd65e05b5a8/Untitled%205.png)

## 操作系统选择

选择操作系统为ubuntu，版本为20.04，如果没有20.04，也可以选择18.04

# Part02：连接到云主机

**检查清单**

- [ ]  确保购买云主机安装的操作系统为Ubuntu 18.04 或 20.04
- [ ]  公网IP地址`{{REMOTE IP}}`
- [ ]  默认用户名`{{USERNAME}}`
- [ ]  默认用户的密码`{{PASSWD}}`

**Tips**

1. 阿里云默认用户为root，腾讯云为ubuntu
2. 如果不记得密码或在购买云主机时，未配置密码，请在控制台重置密码

补救措施

1. 如何重置操作系统
2. 如何重置密码

- 不推荐方案
  
    ## 方法一：使用Xshell连接
    
    ## 方法二：使用Windows Terminal连接
    
    1. 打开Microsoft Store，并搜索Windows Terminal，点击安装（如果此处已安装，则打开即可）
    2. 打开Windows Terminal后，在终端里输入ssh-keygen.exe来创建秘钥对，在所有需要输入的地方按回车即可
    3. 继续执行命令ssh   {USERNAMW}@{REMOTE IP},按下回车
    4. 输入自己的密码{{PASSWD}},按下回车，并连接上云主机（注意，此处输入密码无任何显示，直接输入即可）
    
    > 
    > 🔑 在完成Part03后，重新回到此处继续
    
    
    

## 使用Tabby连接云主机

1. 打开tabby的官网：[https://tabby.sh/](https://tabby.sh/) 
2. 点击右上角下载按钮，在新弹出的页面中，选择Windows版本的tabby下载

>❗ 如果Tabby下载速度很慢，你也从这里可以直接下载[tabby.exe](https://www.alipan.com/s/W3gn279cgFP){target="_blank"}

![Untitled](Linux%E5%BC%80%E5%8F%91%E7%8E%AF%E5%A2%83%E9%85%8D%E7%BD%AE%20e0ffc8d2e38645ff83756bd65e05b5a8/Untitled%206.png)

>注意此处下载tabby-x.x.xxx-setup-x64.exe这个文件，如果没有翻墙可能网速比较慢，可以选择上面的直接下载或者百度网盘下载

3. 下载后点击安装，安装过程中，全部使用默认配置即可
4. 启动Tabby，如果有欢迎页，关闭即可，点击**Profiles & connections**

![Untitled](Linux%E5%BC%80%E5%8F%91%E7%8E%AF%E5%A2%83%E9%85%8D%E7%BD%AE%20e0ffc8d2e38645ff83756bd65e05b5a8/Untitled%207.png)

5. 点击**Manage profiles**

![Untitled](Linux%E5%BC%80%E5%8F%91%E7%8E%AF%E5%A2%83%E9%85%8D%E7%BD%AE%20e0ffc8d2e38645ff83756bd65e05b5a8/Untitled%208.png)

6. 点击**+ New profile**，添加连接信息

![Untitled](Linux%E5%BC%80%E5%8F%91%E7%8E%AF%E5%A2%83%E9%85%8D%E7%BD%AE%20e0ffc8d2e38645ff83756bd65e05b5a8/Untitled%209.png)

7. 在下拉列表中，选择**SSH connection**

![Untitled](Linux%E5%BC%80%E5%8F%91%E7%8E%AF%E5%A2%83%E9%85%8D%E7%BD%AE%20e0ffc8d2e38645ff83756bd65e05b5a8/Untitled%2010.png)

8. 填写ssh基础信息

![注意，第一个红框里的是连接的名字，倒数第二个框是你云主机的用户名，第一个是可以为任意名字，第二个是确定的root或者ubuntu](Linux%E5%BC%80%E5%8F%91%E7%8E%AF%E5%A2%83%E9%85%8D%E7%BD%AE%20e0ffc8d2e38645ff83756bd65e05b5a8/Untitled%2011.png)

注意，第一个红框里的是连接的名字，倒数第二个框是你云主机的用户名，第一个是可以为任意名字，第二个是确定的root或者ubuntu

- 填写备注
    1. Name：连接的名字，可以填写一个便于识别的（在这里，建议你先用{{USERNAME}}为名,方便在后面的学习中识别）
    2. Color：此列为终端提示色，选择一个颜色，或者自己填写一个即可，如果颜色无法选择，可以先输入一个字符，然后删除，此时，会弹出选择列表
    3. Host：为远程云主机的IP地址{{REMOTE IP}}
    4. Username：为默认用户名{{USERNAME}}，阿里云为root，腾讯云为ubuntu
    5. Set password：点击后，输入上面用户的默认密码{{PASSWD}}即可
    
9. 为你的终端选择合适的配色：在**COLORS**选项卡中，选择自己喜欢的配色

![Untitled](Linux%E5%BC%80%E5%8F%91%E7%8E%AF%E5%A2%83%E9%85%8D%E7%BD%AE%20e0ffc8d2e38645ff83756bd65e05b5a8/Untitled%2012.png)

10. 点击Save，保存配置，并关闭Settings窗口
11. 在空白的窗口中，点击Profiles  & connections ，选择刚才添加的连接名，回车即可进入连接

![Untitled](Linux%E5%BC%80%E5%8F%91%E7%8E%AF%E5%A2%83%E9%85%8D%E7%BD%AE%20e0ffc8d2e38645ff83756bd65e05b5a8/Untitled%2013.png)

12. 选择Accept and remember key，即可完成连接，会有类似下面的提示

![Untitled](Linux%E5%BC%80%E5%8F%91%E7%8E%AF%E5%A2%83%E9%85%8D%E7%BD%AE%20e0ffc8d2e38645ff83756bd65e05b5a8/Untitled%2014.png)

![如果你没有看到这个场景，请思考以下四个是否正确：①系统是Ubuntu吗？②用户名是root或者ubuntu吗？③密码有没有记错了？④IP地址有没有错？](Linux%E5%BC%80%E5%8F%91%E7%8E%AF%E5%A2%83%E9%85%8D%E7%BD%AE%20e0ffc8d2e38645ff83756bd65e05b5a8/Untitled%2015.png)

如果你没有看到这个场景，请思考以下四个是否正确：①系统是Ubuntu吗？②用户名是root或者ubuntu吗？③密码有没有记错了？④IP地址有没有错？

# Part03：配置云主机

**检查清单**

- [ ]  确定云平台
- [ ]  确定初始用户名`{{USERNAME}}`
- [ ]  确定初始用户密码`{{PASSWD}}`
- [ ]  主机名`{{HOSTNAME}}`
- [ ]  新的用户名`{{NEW_USERNAME}}`
- [ ]  新用户的密码`{{NEW_PASSWD}}`

**Tips**

1. 腾讯云的默认用户是ubuntu，阿里云为root
2. 新用户的用户名和密码将在下一part使用
3. 用户名可以是自己喜欢的英文名或名字拼音缩写

> 请确保根据Part02完成云主机的连接，可以在云主机中执行以下命令:`whoami`，如果你已经成功连上了云主机，回车后则会输出你的默认用户名`{{USERNAME}}`
> 
1. 执行以下命令，确保自己在root用户下执行命令

```bash
sudo -i
#该命令如果要求你输入密码，直接输入即可，请注意，输入密码时不会显示任何信息，输入完回车即可
```

1. 执行下面的命令，获取环境配置脚本

```bash
apt update
apt upgrade -y  #新增命令，视频中没有也需要你正常执行
apt autoremove  #新增命令，视频中没有也需要你正常执行
apt install wget -y
wget https://wiki.haizeix.com/e/zh/courses_resource/cloud_usage/init_env.sh
```

1. 执行下面的命令，完成环境配置

```bash
bash init_env.sh
#执行该命令的时候，会要求输入新的用户名{{NEW_USERNAME}}和{{NEW_PASSWD}}
#自动化配置过程中，受网络影响，有些安装过程会比较慢，请耐心等待
```

> ❗ 完成配置后，使用新添加的用户和密码，执行Part02的第4到12步，即可保存普通用户的连接。


---

![d947ade96302458283696a4b9c8ea4a0.gif](Linux%E5%BC%80%E5%8F%91%E7%8E%AF%E5%A2%83%E9%85%8D%E7%BD%AE%20e0ffc8d2e38645ff83756bd65e05b5a8/d947ade96302458283696a4b9c8ea4a0.gif)

恭喜你呀🎉 🎉 🎉

到这里你就完全的拥有了一台属于自己的云主机了！鼓掌👏👏。

现在开始使用它“大展拳脚”吧！Let‘s get started！

---