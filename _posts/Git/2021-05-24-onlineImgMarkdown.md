---
layout:     post
title:      在Typora中插入在线图片
date:       2021-05-24
author:     Yukun SHANG
catalog: 	 true
tags:		[Git, Markdown]
---

# 在Typora中插入在线图片(使用Picgo-cli)



## Step1

download picgo

```
yarn global add picgo
```



## Step2

Config picgo

in `/Users/yukun/.picgo/config.json`:

```
{
  "picBed": {
    "uploader": "githubPlus",
    "current": "githubPlus",
    "githubPlus": {
      "repo": "USER NAME/REPO NAME",
      "branch": "BRANCH NAME",
      "token": "[YOUR TOKEN]",
      "path": "FOLDER/",
      "customUrl": "",
      "origin": "github"
    }
  },
  "picgoPlugins": {
    "picgo-plugin-github-plus": true
  },
  "picgo-plugin-github-plus": {
    "lastSync": "2021-05-24 12:50:06"
  }
}
```



## Step3

Config Typora

<img src="https://raw.githubusercontent.com/Yukun4119/BlogImg/main/img/Screen%20Shot%202021-05-24%20at%2000.50.00.png" alt="Screen Shot 2021-05-24 at 00.50.00" style="zoom:50%;" />

where `Command` should be :

```
/usr/local/bin/node /usr/local/bin/picgo upload
```



