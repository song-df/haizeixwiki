---
title: ACM金牌带你零基础直达C语言精通-课程资料
description: 
published: true
date: 2024-03-07T13:47:46.256Z
tags: 编程语言
editor: markdown
dateCreated: 2024-03-06T09:39:04.268Z
---

---
title: ACM金牌带你零基础直达C语言精通-课程资料
description: 
published: true
date: 2024-03-04T03:56:15.035Z
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

# 第二章 类型、运算符与表达式
> 学习提要  
> 1. 理解什么是类型，什么是变量。
> 2. 看完课程后有二进制，十六进制的概念，学会各种进制之间的转换。
> 3. 存储数据的基本单位是字节，一字节代表8位，每一位都有相对应的地址，并且是用二进制进行表示的。
> 4. 理解记忆整形(int)有多少个字节，以及他的范围是如何来的，还有补码的概念。
> 5. 理解记忆长整形(long long),单精度浮点类型(float),双精度浮点类型(double),字符类型(char),以及他们的大小;对于字符类型(char),记住常用的'a','A','0'的对应的ASCII编码。

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

> 参考程序



# 第六章 结构体与联合体
> 授课PPT 
> 参考程序

