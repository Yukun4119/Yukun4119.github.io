---
layout:     post
title:      sort in vector
date:       2021-02-25
author:     Yukun SHANG
catalog: 	 true
tags:       [C/C++]
---

# C++ vector sort方法

如果要自定义sort 方法，最方便的就是用**block**（感觉现代语言都喜欢用这block或者箭头函数的语法糖）

例如自定义二维vector的排序方式

```cpp
sort(a.begin(), a.end(), [](const vector<int>&a, const vector<int>&b) {return a[1] < b[1];});
```

