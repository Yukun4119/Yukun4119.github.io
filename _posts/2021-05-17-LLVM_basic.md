---
layout:     post
title:      LLVM基础
date:       2021-05-17
author:     Yukun SHANG
catalog: 	 true
tags:		[LLVM,Compiler]
---

# LLVM Basic

想要理解Xcode的编译过程，想要学习编译原理的实际使用，LLVM是必经之路。

最开始，LLVM是**Low Level Virtual Machine**的缩写。但是后来，随着LLVM的发展，用**Compiler Infrastructure**形容它更为合适。

## What is LLVM？

和其他编辑器相比，LLVM最大的不同是它的三段式结构（前端、优化器和后端）。

* 前端：接收源代码，产生IR
* 优化器：接收IR，产生优化后的IR
* 后端：接收优化后的IR，产生机器码

LLVM有多个Pass小模块。每一个Pass模块可以由优化器加载执行。

