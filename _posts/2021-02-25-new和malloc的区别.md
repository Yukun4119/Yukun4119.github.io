---
layout:     post
title:      new和malloc的区别
date:       2021-02-25
author:     Yukun SHANG
catalog: 	 true
tags:       [C/C++]
---



# new和malloc的区别（来自牛客网）

**1、属性**

- new/delete是C++关键字，需要编译器支持。
- malloc/free是库函数，需要头文件支持。

**2、参数**

- 使用new操作符申请内存分配时无须指定内存块的大小，编译器会根据类型信息自行计算。
- 而malloc则需要显式地指出所需内存的尺寸。

**3、返回类型**

- new操作符内存分配成功时，返回的是对象类型的指针，类型严格与对象匹配，无须进行类型转换，故new是符合类型安全性的操作符。
- 而malloc内存分配成功则是返回void * ，需要通过强制类型转换将void*指针转换成我们需要的类型。

**4、分配失败**

- new内存分配失败时，会抛出bac_alloc异常。
- malloc分配内存失败时返回NULL。

**5、自定义类型**

- new会先调用operator new函数，申请足够的内存（通常底层使用malloc实现）。然后调用类型的构造函数，初始化成员变量，最后返回自定义类型指针。delete先调用析构函数，然后调用operator delete函数释放内存（通常底层使用free实现）。
- malloc/free是库函数，只能动态的申请和释放内存，无法强制要求其做自定义类型对象构造和析构工作。

**6、重载**

- C++允许重载new/delete操作符，特别的，布局new的就不需要为对象分配内存，而是指定了一个地址作为内存起始区域，new在这段内存上为对象调用构造函数完成初始化工作，并返回此地址。
- 而malloc不允许重载。

**7、内存区域**

- new操作符从自由存储区（free store）上为对象动态分配内存空间，自由存储区是C++基于new操作符的一个抽象概念，凡是通过new操作符进行内存申请，该内存即为自由存储区。
- 而malloc函数从堆上动态分配内存。堆是操作系统中的术语，是操作系统所维护的一块特殊内存，用于程序的内存动态分配，C语言使用malloc从堆上分配内存，使用free释放已分配的对应内存。