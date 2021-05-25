---
layout:     post
title:      asm_volatile
date:       2020-12-09
author:     Yukun SHANG
catalog: 	 true
tags:       [C/C++, Assembly]
---

## What is asm volatile?

`asm volatile` is Inline assembly in **Linux C**

## Basic Rules

```c
 asm [ volatile ] (  
         assembler template
         [ : output operands ]                /* optional */
         [ : input operands  ]                /* optional */
         [ : list of clobbered registers ]    /* optional */
         );
```

**asm** is `keyword`

**volatile** is optional. 

