---
layout:     post
title:      The Principle in Building iOS project
date:       2021-05-17
author:     Yukun SHANG
catalog: 	 true
tags:
    - iOS
	- Xcode
---



# 构建iOS项目的原理

# The Principle in Building iOS project

## 题外话

聊这个话题之前，首先来回顾一下IDE。

[IDE](https://zh.wikipedia.org/zh/%E9%9B%86%E6%88%90%E5%BC%80%E5%8F%91%E7%8E%AF%E5%A2%83)的中文叫**集成开发环境**， 比如Xcode，Visual Studio，Clion等都是著名的IDE。

IDE的本质其实就是，将各种复杂的命令后操作封装起来，让用户（程序开发人员）能够通过点击按钮或者使用快捷键就可以进行程序的编译、运行和调试。

```
如果真的要潜心学习计算机科学和技术，只会使用IDE是远远不够的。个人认为最佳路径是在Linux或者MacOS里面，学习如何使用命令行去实现程序的编译和运行。在熟悉命令行操作之后，再去使用IDE才能理解IDE内部的运行机制，在IDE报各种奇葩错误的时候，才能更快地去解决问题。
```

IDE其实就是简化了一些操作，比如要运行C语言程序，在命令行里面（假设使用gcc编译，并且忽略中间过程）至少需要两行命令：

```shell
gcc main.c -o main  # compile
./main	            # load
```

但是在IDE里面（比如Dev C++）可能就是点一个按钮就行（暂时没有DEV C++的界面图）。IDE存在的意义就是简化操作流程，让更多的人能够上手编程。



## Xcode编译程序的原理

Macbook里面用xcode进行开发的这一套系统，一般称为Xcode Build System。

Xcode 通过运行一系列编译器工具集将 iOS 源码按一定的顺序编译链接生成可执行文件，而无需手动操作，用户不用关心编译链接背后复杂的过程。与一般的语言编译过程类似，Xcode Build Sytem包括以下五部分：

- Preprocessor
- Compiler
- Assembler
- Linker
- Loader







https://blog.csdn.net/TuGeLe/article/details/84885211









