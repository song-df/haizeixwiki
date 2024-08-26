---
title: DevC++使用手册
description: 
published: true
date: 2024-08-26T13:26:31.879Z
tags: 
editor: markdown
dateCreated: 2024-08-26T10:51:50.670Z
---

> :one: DevC++为Windows平台的C语言集成开发环境之一，如果想要完整的学习C语言课程，可前往购买单课[💰单课购买点这里](https://www.bilibili.com/cheese/play/ss3380){target="_blank"}
> :two: 你也可以选择购买『船说系列课程-年度会员』产品『船票』，畅享期内无限制学习已上线的所有船说系列课程：
[💰 船票1年期购买入口](https://b23.tv/uCOhTk2){target="_blank"}
[💰 船票4年期购买入口](https://b23.tv/vU6TsQU){target="_blank"}
优惠券可以找Bili姐👩‍💻领取。姐的二维码：
![新bili姐.png](/images/新bili姐.png =100x)
{.is-success}


# 一、DevC++安装包下载

因DevC++是开源的，在网络上直接搜索DevC++或DevCpp，会出来比较多的版本，有些是二级开发，这里还是推荐安装官方版本：
- [DevCpp6.7.5](https://pan.baidu.com/s/1veN2Sxy5qkhY2w2UUZcHyA?pwd=vkac){target="_blank"}

Tabby是一个现代化的先进的跨平台终端工具，可以用来替代Windows的cmd窗口工具或者是PowerShell工具。具体使用文档和下载链接如下：
- [Tabby使用](/courses_resource/cloud_usage/快速使用云环境)
- [Tabby](https://pan.baidu.com/s/1BmCOxvg9SC4JPBolnoAvmw?pwd=46fk){target="_blank"}

# 二、安装注意点:安装路径配置
整个安装过程和常规软件安装一样，跟着向导next就可以。
在碰到安装路径选择时，优先推荐安装到C或D盘根目录下的Dev-Cpp，此设置主要是在编译程序时路径名中没有中文和空格。
![安装DevCPP路径修改](/courses_resource/c_language/devcpp_usage_images/devcpp_installpath_root.png)


# 三、创建工程
## 1、通过菜单:文件→新建→项目,打开新建窗口
![新建项目](/courses_resource/c_language/devcpp_usage_images/create_new_project.png)
## 2、在新建窗口中选择“Console Application”，C项目，项目名称优先全英文
![新建项目配置](/courses_resource/c_language/devcpp_usage_images/new_project_setup.png)
## 3、项目保存路径推荐(尽量不使用中文路径)：
![新建项目配置](/courses_resource/c_language/devcpp_usage_images/new_project_savepath.png)
## 4、创建完成后，可添加打印程序行，通过点击菜单栏的编译运行或F11，在终端输出hello world!
![新建项目配置](/courses_resource/c_language/devcpp_usage_images/new_project_helloworld.png)
![新建项目配置](/courses_resource/c_language/devcpp_usage_images/new_project_helloworld2.png)

> 恭喜，DevCPP安装成功，并能正常运行C程序。{.is-success}

# 四、下载并添加SDL2图形界面库到DevCPP
- [SDL2压缩包](https://pan.baidu.com/s/1BmCOxvg9SC4JPBolnoAvmw?pwd=46fk){target="_blank"}

# 五、解压SDL2-devel-2.30.6-mingw.zip，并将里面的SDL2-2.30.6目录复制到Dev-Cpp目录：
![SDL2目录保存](/courses_resource/c_language/devcpp_usage_images/sdl2_folder_save.png)

# 六、在想要使用的项目中添加SDL2
## 6.1 选中项目，并点“项目配置”图标打开配置窗口（也可在项目上右键进入）
![项目配置](/courses_resource/c_language/devcpp_usage_images/project_setup.png)
## 6.2 在配置窗口选择参数标签，并在链接一栏输入三行：

```
-lmingw32
-lsdl2main
-lsdl2
```
> 这里要注意两点：
减号-后面是小写L，不是数字1️⃣，也不是i。
这三个库的顺序不可变。

![项目链接库配置](/courses_resource/c_language/devcpp_usage_images/project_setup_parameter_ld.png)

## 6.3 添加头文件路径和库文件路径
打开“文件/目录”标签，并选中下面的“库目录”标签
![添加库目录1](/courses_resource/c_language/devcpp_usage_images/project_setup_lib_path_1.png)
找到sdl2的lib目录
![SDL2的lib目录](/courses_resource/c_language/devcpp_usage_images/project_setup_lib_path_2.png)
![添加库目录到列表中](/courses_resource/c_language/devcpp_usage_images/project_setup_lib_path_3.png)
![添加库目录成功](/courses_resource/c_language/devcpp_usage_images/project_setup_lib_path_4.png)

按上面的相同的方法，将包含文件目录添加上：
![添加包含文件目录](/courses_resource/c_language/devcpp_usage_images/project_setup_include_path_1.png)
![添加包含文件目录结果](/courses_resource/c_language/devcpp_usage_images/project_setup_include_path_2.png)

完成以上步骤后，点项目选项窗口的确定按钮保存关闭窗口。

## 6.4 从SDL2目录中复制SDL2.dll到项目目录
![制作SDL2.dll](/courses_resource/c_language/devcpp_usage_images/project_setup_copy_sdl2.dll.png)

# 七、测试SDL2是否正常
将如下代码复制到项目的源码文件中：

```c
#include <SDL.h>
#include <stdbool.h>

int main(int argc, char* argv[]) {
    // 初始化 SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        SDL_Log("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
        return 1;
    }

    // 创建窗口
    SDL_Window* window = SDL_CreateWindow("SDL2 Square", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN);
    if (!window) {
        SDL_Log("Window could not be created! SDL_Error: %s\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }

    // 创建渲染器
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (!renderer) {
        SDL_Log("Renderer could not be created! SDL_Error: %s\n", SDL_GetError());
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }

    // 主循环标志
    bool running = true;
    SDL_Event event;

    while (running) {
        // 处理事件
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                running = false;
            }
        }

        // 清空渲染器
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); // 黑色背景
        SDL_RenderClear(renderer);

        // 绘制正方形
        SDL_Rect square = { 350, 250, 100, 100 }; // 正方形的位置和大小
        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255); // 红色
        SDL_RenderFillRect(renderer, &square);

        // 呈现渲染结果
        SDL_RenderPresent(renderer);
    }

    // 清理资源
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}

```
保存后按F11编译运行，可得到图形显示效果：
![测试SDL2结果](/courses_resource/c_language/devcpp_usage_images/sdl2_draw_square_1.png)
