---
title: ACM金牌带你零基础直达C语言精通-课程资料
description: 
published: true
date: 2024-03-19T13:14:56.816Z
tags: 编程语言
editor: markdown
dateCreated: 2024-03-01T15:16:58.351Z
---

> :one: 本课程属于船说系列课程之一，[💰单课购买点这里](https://www.bilibili.com/cheese/play/ss3380){target="_blank"}
> :two: 你也可以选择购买『船说系列课程-年度会员』产品『船票』，畅享一年内无限制学习已上线的所有船说系列课程：[💰 船票购买入口](https://www.bilibili.com/cheese/pages/packageCourseDetail?productId=598){target="_blank"}
{.is-success}

# 💗温馨提醒【初航我带你，远航靠自己】

🙋‍♂️哈喽各位同学，👏欢迎加入《船说：C语言全能实战课》的课程学习中来～

> 1️⃣ 本课程的开课日期为6月28日，课程节数为200+节，课程学习永久有效。
{.is-success}

> 2️⃣ 做好课前准备，需自行注册以下刷题平台：{.is-success}

> ✅海贼OJ：https://oj.haizeix.com/
✅欧拉计划：https://projecteuler.net/
{.is-info}

> PS：无法访问欧拉原站，可不注册欧拉账号，使用中文替代站点看题：http://pe-cn.github.io/
{.is-warning}

> 3️⃣ 课程代码&讲义在下方，可以自取。
> 同时也在Github上线了所有代码：👉 https地址: https://github.com/huguangAOA/Bilibili-Clang.git
{.is-success}

> 4️⃣ 课程内容更新上线后，船长都会在群内通知大家
{.is-success}

> 5️⃣ 同学有问题的话可以咨询船长，老师会在看到后第一时间进行解答哦
{.is-success}

> 有其他搞不明白的，可以找Bili姐：
![新bili姐.png](/images/新bili姐.png =200x)

# 第一章 将C语言用起来
> 学习提要
> 1. 学习课程时一定不要跳看课程，每节课都会有着不同的知识点。
> 2. 配置学习环境的配置(必要)，推荐配置Linux环境。
> 3. 学习Linux环境的使用和一些Linux环境中常用的命令。
> 4. 需要熟练掌握VIM编辑器(在Linux环境)的使用。
> 5. 知道[cppreference](https://en.cppreference.com/w/)参考网站，在后续的学习中知道如何查询。
> 6. 对于编码规范，根据船长的代码规范来规范自己的编码习惯。

> 授课PPT  
> 1. [ACM金牌带你零基础直达C语言精通-1.1-课程导学](c_language_resource/part1/chapter01/pptx/c_language_chapter01_1.pdf)
> 2. [ACM金牌带你零基础直达C语言精通-1.2-学环境配置](c_language_resource/part1/chapter01/pptx/c_language_chapter01_2_12_14_15.pdf)
> 3. [ACM金牌带你零基础直达C语言精通-1.3-Linux环境配置:如何获取配置文档](c_language_resource/part1/chapter01/pptx/c_language_chapter01_3.pdf)
> 4. [ACM金牌带你零基础直达C语言精通-1.4-1.6-Linux环境配置:服务器购买-Linux环境配置:云主机链接](c_language_resource/part1/chapter01/pptx/c_language_chapter01_4to6.pdf) 
> 5. [ACM金牌带你零基础直达C语言精通-1.7-1.11-Linux环境配置:云主机的配置-Linux环境配置:vim的基本使用](c_language_resource/part1/chapter01/pptx/c_language_chapter01_7to11.pdf) 
> 6. [ACM金牌带你零基础直达C语言精通-1.13-百度+阿里:编码规范介绍](c_language_resource/part1/chapter01/pptx/c_language_chapter01_13(1).pdf) 
> 7. [ACM金牌带你零基础直达C语言精通-1.13-谷歌:编码规范介绍](c_language_resource/part1/chapter01/pptx/c_language_chapter01_13(2).pdf) 
> 8. [ACM金牌带你零基础直达C语言精通-1.14-将C语言用起来](c_language_resource/part1/chapter01/pptx/c_language_chapter01_14.pdf)   
> ✅DevCpp 6.7.5 和Tabby的安装包:[百度网盘链接](https://pan.baidu.com/s/1771OHbtIEzwRyRJj09ruBw?pwd=3zuh){.is-info}

> 参考程序
```C
    //头文件，包含着实现printf函数的代码
    #include <stdio.h>
    //C语言的主要结构主函数,对于解读会在后续的课程解读
    int main(){
        //printf函数，将""中的内容打印在终端上
        printf("hello world");
        return 0;
    }
```
# 第二章 类型、运算符与表达式
> 学习提要  
> 1. ❗在学习过程中一定要跟着船长一起敲代码;
> 2. 理解什么是类型，什么是变量;
> 3. 看完课程后有二进制，十六进制的概念，学会各种进制之间的转换;
> 4. 记忆常用类型，以及他们的长度，字符类型需要记住常用的ASCII编码，例如'a' = 97;
> 5. 学会使用printf和scanf，以及如何使用sscanf，sprintf函数;
> 6. 学会使用基本运算符，并理解每个运算符的原理，对于运算符优先级，只要多写代码多尝试，就可以记住了;
> 7. 记住常用的数学函数，以及他们的返回值类型是什么，以及如何使用;
> 8. 看完船长对OJ题目的讲解后，通过自己再实现一次加强对代码的理解;

> 授课PPT
> 1. [ACM金牌带你零基础直达C语言精通-2-类型、运算符与表达式](c_language_resource/part1/chapter02/pptx/c_language_chapter02_1.pdf)  

> 参考程序
> 1. [ACM金牌带你零基础直达C语言精通-2.5-常用数据类型:代码演示--1.types.c](c_language_resource/part1/chapter02/code/1.types.c)
> 2. [ACM金牌带你零基础直达C语言精通-2.6-printf函数的基本用法--2.printf.c](c_language_resource/part1/chapter02/code/2.printf.c)
> 3. [ACM金牌带你零基础直达C语言精通-2.7-scanf函数的基本用法--3.scanf.c](c_language_resource/part1/chapter02/code/3.scanf.c)
> 4. [ACM金牌带你零基础直达C语言精通-2.8-随堂练习1:输出数字位数--4.test1.c](c_language_resource/part1/chapter02/code/4.test1.c)
> 5. [ACM金牌带你零基础直达C语言精通-2.9-随堂练习2:读入带空格的字符串--5.string.c](c_language_resource/part1/chapter02/code/5.string.c)
> 6. [ACM金牌带你零基础直达C语言精通-2.9-随堂练习2:读入带空格的字符串--6.test2.c](c_language_resource/part1/chapter02/code/6.test2.c)
> 7. [ACM金牌带你零基础直达C语言精通-2.10-sscanf和sprintf函数的讲解--7.sscanf.c](c_language_resource/part1/chapter02/code/7.sscanf.c)
> 8. [ACM金牌带你零基础直达C语言精通-2.10-sscanf和sprintf函数的讲解--8.sprintf.c](c_language_resource/part1/chapter02/code/8.sprintf.c)
> 9. [ACM金牌带你零基础直达C语言精通-2.11-随堂练习:给输出内容加一个框--9.test3.c](c_language_resource/part1/chapter02/code/9.test3.c)
> 10. [ACM金牌带你零基础直达C语言精通-2.12-基本运算符--10.operator.c](c_language_resource/part1/chapter02/code/10.operator.c)
> 11. [ACM金牌带你零基础直达C语言精通-2.13-位运算:讲解与演示--11.digit.c](c_language_resource/part1/chapter02/code/11.digit.c)
> 12. [ACM金牌带你零基础直达C语言精通-2.14-运算符优先级讲解--12.assign.c](c_language_resource/part1/chapter02/code/12.assign.c)
> 13. [ACM金牌带你零基础直达C语言精通-2.15-常用数学函数--13.math.c](c_language_resource/part1/chapter02/code/13.math.c)
> 14. [ACM金牌带你零基础直达C语言精通-2.16-随堂练习4-5:数学函数的使用--14.test4.c](c_language_resource/part1/chapter02/code/14.test4.c)
> 15. [ACM金牌带你零基础直达C语言精通-2.16-随堂练习4-5:数学函数的使用--15.test5.c](c_language_resource/part1/chapter02/code/15.test5.c)
> 16. [ACM金牌带你零基础直达C语言精通-2.17-如何在海贼OJ测试代码--16.HZOJ-1.c](c_language_resource/part1/chapter02/code/16.HZOJ-1.c)
> 17. [ACM金牌带你零基础直达C语言精通-2.18-三数的乘积:HZOJ-86--17.HZOJ-86.c](c_language_resource/part1/chapter02/code/17.HZOJ-86.c)
> 18. [ACM金牌带你零基础直达C语言精通-2.19-矩形面积与周长:HZOJ-87--18.HZOJ-87.c](c_language_resource/part1/chapter02/code/18.HZOJ-87.c)
> 19. [ACM金牌带你零基础直达C语言精通-2.20-取数位Ⅱ:HZOJ-90--19.HZOJ-90-1.c](c_language_resource/part1/chapter02/code/19.HZOJ-90-1.c)
> 20. [ACM金牌带你零基础直达C语言精通-2.20-取数位Ⅱ:HZOJ-90--20.HZOJ-90-2.c](c_language_resource/part1/chapter02/code/20.HZOJ-90-2.c)
> 21. [ACM金牌带你零基础直达C语言精通-2.21-交换两位数:HZOJ-95--21.HZOJ-95.c](c_language_resource/part1/chapter02/code/21.HZOJ-95.c)
> 22. [ACM金牌带你零基础直达C语言精通-2.22-求和2:HZOJ-97--22.HZOJ-97.c](c_language_resource/part1/chapter02/code/22.HZOJ-97.c)
> 23. [ACM金牌带你零基础直达C语言精通-2.23-计算各位和:HZOJ-101--23.HZOJ-101.c](c_language_resource/part1/chapter02/code/23.HZOJ-101.c)
> 24. [ACM金牌带你零基础直达C语言精通-2.24-注水问题:HZOJ-102--24.HZOJ-102.c](c_language_resource/part1/chapter02/code/24.HZOJ-102.c)


# 第三章 控制流
> 授课PPT
> 1. [ACM金牌带你零基础直达C语言精通-3-控制流](c_language_resource/part1/chapter03/pptx/c_language_chapter03.pdf)  

> 参考程序
> 1. [ACM金牌带你零基础直达C语言精通-3.2-条件表达式:编码演示--1.cond_expr.c](c_language_resource/part1/chapter03/code/1.cond_expr.c)
> 2. [ACM金牌带你零基础直达C语言精通-3.3-短路原则及编码技巧--2.and_or.c](c_language_resource/part1/chapter03/code/2.and_or.c)
> 3. [ACM金牌带你零基础直达C语言精通-3.5-if-else语句:代码演示--3.if_else.c](c_language_resource/part1/chapter03/code/3.if_else.c)
> 4. [ACM金牌带你零基础直达C语言精通-3.6-随堂练习1:题目讲解--4.test1.c](c_language_resource/part1/chapter03/code/4.test1.c)
> 5. [ACM金牌带你零基础直达C语言精通-3.7-switch-case语句:基础讲解及代码演示--5.switch_case.c](c_language_resource/part1/chapter03/code/5.switch_case.c)
> 6. [ACM金牌带你零基础直达C语言精通-3.8-随堂练习2、3:题目讲解--6.test2.c](c_language_resource/part1/chapter03/code/6.test2.c)
> 7. [ACM金牌带你零基础直达C语言精通-3.8-随堂练习2、3:题目讲解--7.test3.c](c_language_resource/part1/chapter03/code/7.test3.c)
> 8. [ACM金牌带你零基础直达C语言精通-3.9-一个月有多少天:HZOJ-113--8.HZOJ-113.c](c_language_resource/part1/chapter03/code/8.HZOJ-113.c)
> 9. [ACM金牌带你零基础直达C语言精通-3.12-while语句:代码演示--9.while.c](c_language_resource/part1/chapter03/code/9.while.c)
> 10. [ACM金牌带你零基础直达C语言精通-3.12-while语句:代码演示--10.do_while.c](c_language_resource/part1/chapter03/code/10.do_while.c)
> 11. [ACM金牌带你零基础直达C语言精通-3.13-随堂练习4:题目讲解--11.test4.c](c_language_resource/part1/chapter03/code/11.test4.c)
> 12. [ACM金牌带你零基础直达C语言精通-3.14-for语句:基础讲解及代码演示--12.for.c](c_language_resource/part1/chapter03/code/12.for.c)
> 13. [ACM金牌带你零基础直达C语言精通-3.15-随堂练习5:题目讲解--13.test5.c](c_language_resource/part1/chapter03/code/13.test5.c)
> 14. [ACM金牌带你零基础直达C语言精通-3.16-break与continue语句--14.break_continue.c](c_language_resource/part1/chapter03/code/14.break_continue.c)
> 15. [ACM金牌带你零基础直达C语言精通-3.17-goto语句基础功能讲解--15.goto.c](c_language_resource/part1/chapter03/code/15.goto.c)
> 16. [ACM金牌带你零基础直达C语言精通-3.18-使用goto语句模拟if-else功能--16.goto_if_else.c](c_language_resource/part1/chapter03/code/16.goto_if_else.c)
> 17. [ACM金牌带你零基础直达C语言精通-3.19-使用goto语句模拟while功能--17.goto_while.c](c_language_resource/part1/chapter03/code/17.goto_while.c)
> 18. [ACM金牌带你零基础直达C语言精通-3.20-使用goto语句模拟for功能--18.goto_for.c](c_language_resource/part1/chapter03/code/18.goto_for.c)
> 19. [ACM金牌带你零基础直达C语言精通-3.21-详解:C语言中的【一条语句】--19.one_stmt.c](c_language_resource/part1/chapter03/code/19.one_stmt.c)
> 20. [ACM金牌带你零基础直达C语言精通-3.22-分支-课后实战题:第一讲--20.HZOJ-103.c](c_language_resource/part1/chapter03/code/20.HZOJ-103.c)
> 21. [ACM金牌带你零基础直达C语言精通-3.22-分支-课后实战题:第一讲--21.HZOJ-107.c](c_language_resource/part1/chapter03/code/21.HZOJ-107.c)
> 22. [ACM金牌带你零基础直达C语言精通-3.22-分支-课后实战题:第一讲--22.HZOJ-108.c](c_language_resource/part1/chapter03/code/22.HZOJ-108.c)
> 23. [ACM金牌带你零基础直达C语言精通-3.23-分支-课后实战题:第二讲--23.HZOJ-114.c](c_language_resource/part1/chapter03/code/23.HZOJ-114.c)
> 24. [ACM金牌带你零基础直达C语言精通-3.23-分支-课后实战题:第二讲--24.HZOJ-118.c](c_language_resource/part1/chapter03/code/24.HZOJ-118.c)
> 25. [ACM金牌带你零基础直达C语言精通-3.23-分支-课后实战题:第二讲--25.HZOJ-120.c](c_language_resource/part1/chapter03/code/25.HZOJ-120.c)
> 26. [ACM金牌带你零基础直达C语言精通-3.24-循环-课后实战题:第一讲--26.HZOJ-128.c](c_language_resource/part1/chapter03/code/26.HZOJ-128.c)
> 27. [ACM金牌带你零基础直达C语言精通-3.24-循环-课后实战题:第一讲--27.HZOJ-130.c](c_language_resource/part1/chapter03/code/27.HZOJ-130.c)
> 28. [ACM金牌带你零基础直达C语言精通-3.24-循环-课后实战题:第一讲--28.HZOJ-136.c](c_language_resource/part1/chapter03/code/28.HZOJ-136.c)
> 29. [ACM金牌带你零基础直达C语言精通-3.24-循环-课后实战题:第一讲--29.HZOJ-136.c](c_language_resource/part1/chapter03/code/29.HZOJ-136.c)
> 30. [ACM金牌带你零基础直达C语言精通-3.24-循环-课后实战题:第一讲--30.HZOJ-136.c](c_language_resource/part1/chapter03/code/30.HZOJ-136.c)
> 31. [ACM金牌带你零基础直达C语言精通-3.25-循环-课后实战题:第二讲--31.HZOJ-137.c](c_language_resource/part1/chapter03/code/31.HZOJ-137.c)
> 32. [ACM金牌带你零基础直达C语言精通-3.25-循环-课后实战题:第二讲--32.HZOJ-139.c](c_language_resource/part1/chapter03/code/32.HZOJ-139.c)
> 33. [ACM金牌带你零基础直达C语言精通-3.25-循环-课后实战题:第二讲--33.HZOJ-140.c](c_language_resource/part1/chapter03/code/33.HZOJ-140.c)
> 34. [ACM金牌带你零基础直达C语言精通-3.26-循环-课后实战题:第三讲--34.HZOJ-141.c](c_language_resource/part1/chapter03/code/34.HZOJ-141.c)
> 35. [ACM金牌带你零基础直达C语言精通-3.26-循环-课后实战题:第三讲--35.HZOJ-142.c](c_language_resource/part1/chapter03/code/35.HZOJ-142.c)
> 36. [ACM金牌带你零基础直达C语言精通-3.26-【补充】昨天和明天--36.HZOJ-119.c](c_language_resource/part1/chapter03/code/36.HZOJ-119.c)

# 第四章 函数与程序结构
> 授课PPT
> 1. [ACM金牌带你零基础直达C语言精通-4-函数与程序结构](c_language_resource/part1/chapter04/pptx/c_language_chapter04.pdf)
> 2. [ACM金牌带你零基础直达C语言精通-4-20-【附加题】HZOJ-239-不规则的街道](c_language_resource/part1/chapter04/pptx/c_language_chapter04_20.pdf)

> 参考程序
> 1. [ACM金牌带你零基础直达C语言精通-4.1-作用域的基本概念--1.block.c](c_language_resource/part1/chapter04/code/1.block.c)
> 2. [ACM金牌带你零基础直达C语言精通-4.2-函数的定义与使用--2.function.c](c_language_resource/part1/chapter04/code/2.function.c)
> 3. [ACM金牌带你零基础直达C语言精通-4.3-为什么一定要有函数结构--3.sum.c](c_language_resource/part1/chapter04/code/3.sum.c)
> 4. [ACM金牌带你零基础直达C语言精通-4.4-实参与形参:李逵与李鬼--4.param.c](c_language_resource/part1/chapter04/code/4.param.c)
> 5. [ACM金牌带你零基础直达C语言精通-4.5-函数的定义与声明--5.function_declear.c](c_language_resource/part1/chapter04/code/5.function_declear.c)
> 6. [ACM金牌带你零基础直达C语言精通-4.6-递归函数:基础讲解--6.f_function.c](c_language_resource/part1/chapter04/code/6.f_function.c)
> 7. [ACM金牌带你零基础直达C语言精通-4.8-实现递归函数:欧几里得算法--7.gcd.c](c_language_resource/part1/chapter04/code/7.gcd.c)
> 8. [ACM金牌带你零基础直达C语言精通-4.10-【附加内容】递归函数设计:扩展欧几里得算法--8.ex_gcd.c](c_language_resource/part1/chapter04/code/8.ex_gcd.c)
> 9. [ACM金牌带你零基础直达C语言精通-4.11-随堂练习1:令人为难的打印1到100--9.print_100.c](c_language_resource/part1/chapter04/code/9.print_100.c)
> 10. [ACM金牌带你零基础直达C语言精通-4.12-函数拓展1:变参函数--10.max_int.c](c_language_resource/part1/chapter04/code/10.max_int.c)
> 11. [ACM金牌带你零基础直达C语言精通-4.13-主函数也是有参数的!--11.main_2.c](c_language_resource/part1/chapter04/code/11.main_2.c)
> 12. [ACM金牌带你零基础直达C语言精通-4.13-主函数也是有参数的!--12.main_3.c](c_language_resource/part1/chapter04/code/12.main_3.c)
> 13. [ACM金牌带你零基础直达C语言精通-4.14-函数-课后实战题:第一讲--13.HZOJ-464.c](c_language_resource/part1/chapter04/code/13.HZOJ-464.c)
> 14. [ACM金牌带你零基础直达C语言精通-4.14-函数-课后实战题:第一讲--14.HZOJ-465.c](c_language_resource/part1/chapter04/code/14.HZOJ-465.c)
> 15. [ACM金牌带你零基础直达C语言精通-4.15-函数-课后实战题:第二讲--15.HZOJ-466.c](c_language_resource/part1/chapter04/code/15.HZOJ-466.c)
> 16. [ACM金牌带你零基础直达C语言精通-4.15-函数-课后实战题:第二讲--16.HZOJ-467.c](c_language_resource/part1/chapter04/code/16.HZOJ-467.c)
> 17. [ACM金牌带你零基础直达C语言精通-4.15-函数-课后实战题:第二讲--17.HZOJ-468.c](c_language_resource/part1/chapter04/code/17.HZOJ-468.c)
> 18. [ACM金牌带你零基础直达C语言精通-4.16-函数-课后实战题:第三讲--18.HZOJ-185.c](c_language_resource/part1/chapter04/code/18.HZOJ-185.c)
> 19. [ACM金牌带你零基础直达C语言精通-4.16-函数-课后实战题:第三讲--19.HZOJ-183.c](c_language_resource/part1/chapter04/code/19.HZOJ-183.c)
> 20. [ACM金牌带你零基础直达C语言精通-4.17-HZOJ-236递归实现组合型枚举--20.HZOJ-235.cpp](c_language_resource/part1/chapter04/code/20.HZOJ-235.cpp)
> 21. [ACM金牌带你零基础直达C语言精通-4.18-HZOJ-236递归实现组合型枚举--21.HZOJ-236.cpp](c_language_resource/part1/chapter04/code/21.HZOJ-236.cpp)
> 22. [ACM金牌带你零基础直达C语言精通-4.19-HZOJ-237递归实现排列型枚举--22.HZOJ-237.cpp](c_language_resource/part1/chapter04/code/22.HZOJ-237.cpp)
> 23. [ACM金牌带你零基础直达C语言精通-4.20-HZOJ-239不规则的街道--23.HZOJ-239.cpp](c_language_resource/part1/chapter04/code/23.HZOJ-239.cpp)


# 第五章 指针与数组
> 授课PPT
> 1. [ACM金牌带你零基础直达C语言精通-5-指针与数组](c_language_resource/part1/chapter05/pptx/c_language_chapter05.pdf)

> 参考程序
> 1. [ACM金牌带你零基础直达C语言精通-5.1-必须要知道的概念:【地址】--1.address.c](c_language_resource/part1/chapter05/code/1.address.c)
> 2. [ACM金牌带你零基础直达C语言精通-5.4-【代码演示】十六进制数字--2.hex.c](c_language_resource/part1/chapter05/code/2.hex.c)
> 3. [ACM金牌带你零基础直达C语言精通-5.5-【地址】是一个几位的二进制数据？--3.address_len.c](c_language_resource/part1/chapter05/code/3.address_len.c)
> 4. [ACM金牌带你零基础直达C语言精通-5.6-数组的定义与使用--4.array.c](c_language_resource/part1/chapter05/code/4.array.c)
> 5. [ACM金牌带你零基础直达C语言精通-5.7-素数筛算法及代码演示--5.prime.c](c_language_resource/part1/chapter05/code/5.prime.c)
> 6. [ACM金牌带你零基础直达C语言精通-5.8-二分查找算法及代码演示--6.binary_search.c](c_language_resource/part1/chapter05/code/6.binary_search.c)
> 7. [ACM金牌带你零基础直达C语言精通-5.9-二分查找算法及代码演示--7.mult_array.c](c_language_resource/part1/chapter05/code/7.mult_array.c)
> 8. [ACM金牌带你零基础直达C语言精通-5.11-字符串:代码演示--8.string.c](c_language_resource/part1/chapter05/code/8.string.c)
> 9. [ACM金牌带你零基础直达C语言精通-5.12-考研必考:数组的存储方式--9.row_col_array.c](c_language_resource/part1/chapter05/code/9.row_col_array.c)
> 10. [ACM金牌带你零基础直达C语言精通-5.13-数组-恪守实战题:第一讲--10.HZOJ-144.c](c_language_resource/part1/chapter05/code/10.HZOJ-144.c)
> 11. [ACM金牌带你零基础直达C语言精通-5.13-数组-恪守实战题:第一讲--11.HZOJ-144.c](c_language_resource/part1/chapter05/code/11.HZOJ-144.c)
> 12. [ACM金牌带你零基础直达C语言精通-5.13-数组-恪守实战题:第一讲--12.HZOJ-145.c](c_language_resource/part1/chapter05/code/12.HZOJ-145.c)
> 13. [ACM金牌带你零基础直达C语言精通-5.13-数组-恪守实战题:第一讲--13.HZOJ-146.c](c_language_resource/part1/chapter05/code/13.HZOJ-146.c)
> 14. [ACM金牌带你零基础直达C语言精通-5.14-数组-恪守实战题:第二讲--14.HZOJ-147.c](c_language_resource/part1/chapter05/code/14.HZOJ-147.c)
> 15. [ACM金牌带你零基础直达C语言精通-5.14-数组-恪守实战题:第二讲--15.HZOJ-148.c](c_language_resource/part1/chapter05/code/15.HZOJ-148.c)
> 16. [ACM金牌带你零基础直达C语言精通-5.14-数组-恪守实战题:第二讲--16.HZOJ-149.c](c_language_resource/part1/chapter05/code/16.HZOJ-149.c)
> 17. [ACM金牌带你零基础直达C语言精通-5.15-数组-恪守实战题:第三讲--17.HZOJ-150.c](c_language_resource/part1/chapter05/code/17.HZOJ-150.c)
> 18. [ACM金牌带你零基础直达C语言精通-5.15-数组-恪守实战题:第三讲--18.HZOJ-828.c](c_language_resource/part1/chapter05/code/18.HZOJ-828.c)
> 19. [ACM金牌带你零基础直达C语言精通-5.17-函数传递指针变量的场景和用途--19.pointer.c](c_language_resource/part1/chapter05/code/19.pointer.c)
> 20. [ACM金牌带你零基础直达C语言精通-5.17-函数传递指针变量的场景和用途--20.funtion_with_pointer.c](c_language_resource/part1/chapter05/code/20.funtion_with_pointer.c)
> 21. [ACM金牌带你零基础直达C语言精通-5.18-交换指针变量:HZOJ-881--21.HZOJ-881A.c](c_language_resource/part1/chapter05/code/21.HZOJ-881.c)
> 22. [ACM金牌带你零基础直达C语言精通-5.19-深入理解【p+1】操作--22.pointer_add_one.c](c_language_resource/part1/chapter05/code/22.pointer_add_one.c)
> 23. [ACM金牌带你零基础直达C语言精通-5.20-深入理解【*p】操作--23.pointer_get_value.c](c_language_resource/part1/chapter05/code/23.pointer_get_value.c)
> 24. [ACM金牌带你零基础直达C语言精通-5.21-随堂练习1:IP转换--24.test1.c](c_language_resource/part1/chapter05/code/24.test1.c)
> 25. [ACM金牌带你零基础直达C语言精通-5.22-重要：指针的几种等价形式--25.demo1.c](c_language_resource/part1/chapter05/code/25.demo1.c)
> 26. [ACM金牌带你零基础直达C语言精通-5.23-数组指针与函数指针--26.function_pointer.c](c_language_resource/part1/chapter05/code/26.function_pointer.c)
> 27. [ACM金牌带你零基础直达C语言精通-5.24-常用：内存管理方法--27.memory.c](c_language_resource/part1/chapter05/code/27.memory.c)
> 28. [ACM金牌带你零基础直达C语言精通-5.25-指针学习技巧总结--28.const.c](c_language_resource/part1/chapter05/code/28.const.c)
> 29. [ACM金牌带你零基础直达C语言精通-5.25-指针学习技巧总结--29.typedef.c](c_language_resource/part1/chapter05/code/29.typedef.c)
> 30. [ACM金牌带你零基础直达C语言精通-5.26-qsort 函数的使用方法--30.qsort.c](c_language_resource/part1/chapter05/code/30.qsort.c)
> 31. [ACM金牌带你零基础直达C语言精通-5.27-『回调函数』的基本概念--31.call_back_function_binary_search.c](c_language_resource/part1/chapter05/code/31.call_back_function_binary_search.c)
> 32. [ACM金牌带你零基础直达C语言精通-5.28-随堂练习3：个人所得税求解--32.test3.c](c_language_resource/part1/chapter05/code/32.test3.c)
> 33. [ACM金牌带你零基础直达C语言精通-5.29-【附加内容】快速排序--33.quick_sort.cpp](c_language_resource/part1/chapter05/code/33.quick_sort.cpp)
> 34. [ACM金牌带你零基础直达C语言精通-5.31-小项目：从0实现 qsort 函数--34.my_qsort.c](c_language_resource/part1/chapter05/code/34.my_qsort.c)

# 第六章 结构体与联合体
> 授课PPT 
> 1. [ACM金牌带你零基础直达C语言精通-6-预处理命令与结构体](c_language_resource/part1/chapter06/pptx/c_language_chapter06.pdf)

> 参考程序
> 1. [ACM金牌带你零基础直达C语言精通-6.2-重新认识程序的『编译』过程--1.test.c](c_language_resource/part1/chapter06/code/1.test.c)
> 2. [ACM金牌带你零基础直达C语言精通-6.2-重新认识程序的『编译』过程--1.test.o](c_language_resource/part1/chapter06/code/1.test.o)
> 3. [ACM金牌带你零基础直达C语言精通-6.3-『编译阶段』究竟在做什么？--2.project1](c_language_resource/part1/chapter06/code/2.project1)
> 4. [ACM金牌带你零基础直达C语言精通-6.4-『链接阶段』究竟在做什么？--3.project2](c_language_resource/part1/chapter06/code/3.project2)
> 5. [ACM金牌带你零基础直达C语言精通-6.5-明确概念：声明和定义--4.project3](c_language_resource/part1/chapter06/code/4.project3)
> 6. [ACM金牌带你零基础直达C语言精通-6.6-认识：预处理命令家族--5.pre_processing.c](c_language_resource/part1/chapter06/code/5.pre_processing.c)
> 7. [ACM金牌带你零基础直达C语言精通-6.6-认识：预处理命令家族--output.c](c_language_resource/part1/chapter06/code/output.c)
> 8. [ACM金牌带你零基础直达C语言精通-6.7-『#include』的工作原理--6.project4](c_language_resource/part1/chapter06/code/6.project4)
> 9. [ACM金牌带你零基础直达C语言精通-6.8-『#define』基础知识--7.define.c](c_language_resource/part1/chapter06/code/7.define.c)
> 10. [ACM金牌带你零基础直达C语言精通-6.8-『#define』基础知识--output2.c](c_language_resource/part1/chapter06/code/output2.c)
> 11. [ACM金牌带你零基础直达C语言精通-6.9-编译器内置宏--8.built_in.c](c_language_resource/part1/chapter06/code/8.built_in.c)
> 12. [ACM金牌带你零基础直达C语言精通-6.10-宏定义中 # 和 ## 的作用--9.string_cat.c](c_language_resource/part1/chapter06/code/9.string_cat.c)
> 13. [ACM金牌带你零基础直达C语言精通-6.11-随堂练习：没有 BUG 的 MAX 宏--10.max.c](c_language_resource/part1/chapter06/code/10.max.c)
> 14. [ACM金牌带你零基础直达C语言精通-6.12-『#if』基础知识--11.ifdef.c](c_language_resource/part1/chapter06/code/11.ifdef.c)
> 15. [ACM金牌带你零基础直达C语言精通-6.12-『#if』基础知识--12.if_function.c](c_language_resource/part1/chapter06/code/12.if_function.c)
> 16. [ACM金牌带你零基础直达C语言精通-6.12-『#if』基础知识--output3.c](c_language_resource/part1/chapter06/code/output3.c)
> 17. [ACM金牌带你零基础直达C语言精通-6.13-课后实战题1：带等级的日志打印功能--13.log.c](c_language_resource/part1/chapter06/code/13.log.c)
> 18. [ACM金牌带你零基础直达C语言精通-6.14-课后实战题2：统计函数运行时间--14.time.c](c_language_resource/part1/chapter06/code/14.time.c)
> 19. [ACM金牌带你零基础直达C语言精通-6.15-课后实战题3：让 C 函数支持默认参数--15.args.c](c_language_resource/part1/chapter06/code/15.args.c)
> 20. [ACM金牌带你零基础直达C语言精通-6.16-课后实战题4：不许抄我作业！--16.hahaha.c](c_language_resource/part1/chapter06/code/16.hahaha.c)
> 21. [ACM金牌带你零基础直达C语言精通-6.17-结构体的基本使用--17.struct.c](c_language_resource/part1/chapter06/code/17.struct.c)
> 22. [ACM金牌带你零基础直达C语言精通-6.18-『对齐规则』全解析--18.struct_size.c](c_language_resource/part1/chapter06/code/18.struct_size.c)
> 23. [ACM金牌带你零基础直达C语言精通-6.19-联合体的基本使用--19.union.c](c_language_resource/part1/chapter06/code/19.union.c)
> 24. [ACM金牌带你零基础直达C语言精通-6.20-枚举类型的基本使用--20.enum.c](c_language_resource/part1/chapter06/code/20.enum.c)
> 25. [ACM金牌带你零基础直达C语言精通-6.20-枚举类型的基本使用--21.coloc.c](c_language_resource/part1/chapter06/code/21.color.c)
> 26. [ACM金牌带你零基础直达C语言精通-6.21-随堂练习：两种方法封装COLOR工具--21.coloc.c](c_language_resource/part1/chapter06/code/21.color.c)
> 27. [ACM金牌带你零基础直达C语言精通-6.22-位域相关概念与使用--22.bit.c](c_language_resource/part1/chapter06/code/22.bit.c)
> 28. [ACM金牌带你零基础直达C语言精通-6.22-位域相关概念与使用--23.hex.c](c_language_resource/part1/chapter06/code/23.hex.c)
> 29. [ACM金牌带你零基础直达C语言精通-6.24-【附加内容】链表：代码演示--24.linklist.cpp](c_language_resource/part1/chapter06/code/24.linklist.cpp)
> 30. [ACM金牌带你零基础直达C语言精通-6.25~6.26-实现一种有趣的链表结构--26.funny_linklist.c](c_language_resource/part1/chapter06/code/26.funny_linklist.c)

# 第七章 重学输入输出
> 授课PPT
> 1. [ACM金牌带你零基础直达C语言精通-7-重学输入输出](c_language_resource/part1/chapter07/pptx/c_language_chapter07.pdf)

> 参考程序
> 1. [ACM金牌带你零基础直达C语言精通-7.2-三个标准流：stdin、stdout、stderr--1.stderr.c](c_language_resource/part1/chapter07/code/1.stderr.c)
> 2. [ACM金牌带你零基础直达C语言精通-7.2-三个标准流：stdin、stdout、stderr--2.stdout.c](c_language_resource/part1/chapter07/code/2.stdout.c)
> 3. [ACM金牌带你零基础直达C语言精通-7.3-窥探标准流的工具：fscanf 和 fprintf--3.fprintf.c](c_language_resource/part1/chapter07/code/3.fprintf.c)
> 4. [ACM金牌带你零基础直达C语言精通-7.4-标准流的重定向--4.freopen.c](c_language_resource/part1/chapter07/code/4.freopen.c)
> 5. [ACM金牌带你零基础直达C语言精通-7.4-标准流的重定向--5.control_reopen.c](c_language_resource/part1/chapter07/code/5.control_reopen.c)
> 6. [ACM金牌带你零基础直达C语言精通-7.4-标准流的重定向--6.terminal_output.c](c_language_resource/part1/chapter07/code/6.terminal_output.c)
> 7. [ACM金牌带你零基础直达C语言精通-7.4-标准流的重定向--output.txt](c_language_resource/part1/chapter07/code/output.txt)
> 8. [ACM金牌带你零基础直达C语言精通-7.5-重学：scanf 函数--7.scanf_c.c](c_language_resource/part1/chapter07/code/7.scanf_c.c)
> 9. [ACM金牌带你零基础直达C语言精通-7.5-scanf 函数--8.getchar_fflush.c](c_language_resource/part1/chapter07/code/8.getchar_fflush.c)
> 10. [ACM金牌带你零基础直达C语言精通-7.5-scanf 函数--input.txt](c_language_resource/part1/chapter07/code/input.txt)
> 11. [ACM金牌带你零基础直达C语言精通-7.6-实现 printf 函数：输出『hello world』--9.my_printf.c](c_language_resource/part1/chapter07/code/9.my_printf.c)
> 12. [ACM金牌带你零基础直达C语言精通-7.6~7.9-实现 printf 函数：输出『hello world』--9.my_printf.c](c_language_resource/part1/chapter07/code/9.my_printf.c)

# 第八章 文件操作
> 授课PPT
> 1. [ACM金牌带你零基础直达C语言精通-8-文件操作](c_language_resource/part1/chapter08/pptx/c_language_chapter08.pdf)

> 参考程序
> 1. [ACM金牌带你零基础直达C语言精通-8.2-初识程序中的文件类型--1.fprintf.c](c_language_resource/part1/chapter08/code/1.fprintf.c)
> 2. [ACM金牌带你零基础直达C语言精通-8.3-详解：文件打开模式--2.file_access.c](c_language_resource/part1/chapter08/code/2.file_access.c)
> 3. [ACM金牌带你零基础直达C语言精通-8.4-读写文件的方法与技巧--3.file_operator.c](c_language_resource/part1/chapter08/code/3.file_operator.c)
> 4. [ACM金牌带你零基础直达C语言精通-8.5~8.9-学生信息管理系统-交互界面设计--4.student_system.c](c_language_resource/part1/chapter08/code/4.student_system.c)
> 5. [ACM金牌带你零基础直达C语言精通-8.6-学生信息管理系统-学生列表--student_data.txt](c_language_resource/part1/chapter08/code/student_data.txt)
> 6. [ACM金牌带你零基础直达C语言精通-8.10-操作文件读写位置：fseek与ftell--5.fseek_and_ftell.c](c_language_resource/part1/chapter08/code/5.fseek_and_ftell.c)
> 7. [ACM金牌带你零基础直达C语言精通-8.10-操作文件读写位置：fseek与ftell--6.fscanf_and_fseek.c](c_language_resource/part1/chapter08/code/6.fscanf_and_fseek.c)
> 8. [ACM金牌带你零基础直达C语言精通-8.11-知识补充：设置文件位置时的中心--7.fseek_position.c](c_language_resource/part1/chapter08/code/7.fseek_position.c)
> 9. [ACM金牌带你零基础直达C语言精通-8.12-再学：文件打开模式--8.fseek_and_faccess.c](c_language_resource/part1/chapter08/code/8.fseek_and_faccess.c)
> 10. [ACM金牌带你零基础直达C语言精通-8.14-优化1：代码演示--9.student_system.c](c_language_resource/part1/chapter08/code/9.student_system.c)
> 11. [ACM金牌带你零基础直达C语言精通-8.15-二进制文件操作：fwrite与fread--10.fwrite_fread.c](c_language_resource/part1/chapter08/code/10.fwrite_fread.c)
> 12. [ACM金牌带你零基础直达C语言精通-8.16-优化2：实现数据的二进制存储--11.student_system.c](c_language_resource/part1/chapter08/code/11.student_system.c)
> 13. [ACM金牌带你零基础直达C语言精通-8.17-编程技巧：界面切换流程--12.user_interface.c](c_language_resource/part1/chapter08/code/12.user_interface.c)
> 14. [ACM金牌带你零基础直达C语言精通-8.18-编程技巧：界面切换流程--12.user_interface.c](c_language_resource/part1/chapter08/code/12.user_interface.c)
> 15. [ACM金牌带你零基础直达C语言精通-8.20-编程技巧：注册函数--14.attribute.c](c_language_resource/part1/chapter08/code/14.attribute.c)
> 16. [ACM金牌带你零基础直达C语言精通-8.19~8.30-项目文件--13.project](c_language_resource/part1/chapter08/code/13.project)

# 第九章 初识编码能力
> 授课PPT
> 1. [ACM金牌带你零基础直达C语言精通-9.1-什么是编码能力](c_language_resource/part2/chapter09/pptx/c_language_chapter09_1.pdf)
> 2. [ACM金牌带你零基础直达C语言精通-9.2-欧拉计划介绍](c_language_resource/part2/chapter09/pptx/c_language_chapter09_2.pdf)

> ✅[欧拉计划国内镜像网站](https://pe-cn.github.io/problems/){.is-info}  
> ✅[欧拉计划网站](https://projecteuler.net/){.is-info}

# 第十章 编码能力·启航篇
> 授课PPT
> 1. [ACM金牌带你零基础直达C语言精通-10.1~10.3-EP01:3或5的倍数](c_language_resource/part2/chapter10/pptx/c_language_chapter10_1.pdf)
> 2. [ACM金牌带你零基础直达C语言精通-10.4~10.7-EP02:偶斐波那契数](c_language_resource/part2/chapter10/pptx/c_language_chapter10_2.pdf)


> 参考程序
> 1. [ACM金牌带你零基础直达C语言精通-10.1~10.3-EP01:3或5的倍数--EP01-1.c](c_language_resource/part2/chapter10/code/EP01-1.c)
> 2. [ACM金牌带你零基础直达C语言精通-10.1~10.3-EP01:3或5的倍数--EP01-2.c](c_language_resource/part2/chapter10/code/EP01-2.c)
> 3. [ACM金牌带你零基础直达C语言精通-10.4~10.7-EP02:偶斐波那契数--EP02-1.c](c_language_resource/part2/chapter10/code/EP02-1.c)
> 4. [ACM金牌带你零基础直达C语言精通-10.4~10.7-EP02:偶斐波那契数--EP02-2.c](c_language_resource/part2/chapter10/code/EP02-2.c)
> 5. [ACM金牌带你零基础直达C语言精通-10.4~10.7-EP02:偶斐波那契数--EP02-3.c](c_language_resource/part2/chapter10/code/EP02-3.c)

# 第十三章 操作系统篇·搭建Linux开发环境

>本章学习参考说明

- [1、打造系统编程环境](/courses_resource/c_language/c_language_resource/part3/1build_linux_env)
- [2、验证环境是否符合要求](/courses_resource/c_language/c_language_resource/part3/2check_env)
- [3、云主机的安全加固](/courses_resource/c_language/c_language_resource/part3/3ecs_securet)
- [4、将自己的代码备份到Github](/courses_resource/c_language/c_language_resource/part3/4backup_code_to_github)
{.link-list}


# 第十八章 嵌入式篇·嵌入式中的C语言另一面

>本章参考工具：
:one: [Arduino IDE 2.3.2 官方下载链接](https://www.arduino.cc/en/software){target="_blank"}.
:two: [VSCode及相关插件](https://www.alipan.com/s/Cfjgrz9Fxrd){target="_blank"}

>课程PPT：

>参考程序：


# 第十九章 嵌入式篇·小系统的内存管理

>本章学习参考说明

>课程PPT：

>参考程序：



# 第二十章 嵌入式篇·片上裸程序的多任务机制

>本章学习参考说明

>课程PPT：

>参考程序：



# 第二十一章 嵌入式篇·实现应用于微型芯片中的miniprintf

>本章学习参考说明

>课程PPT：

>参考程序：



# 第二十二章 嵌入式篇·实现微小型系统里的简单内存分配与回收库

>本章学习参考说明

>课程PPT：

>参考程序：


