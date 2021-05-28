---
layout:     post
title:      SSH in PD
date:       2020-09-29
author:     Yukun SHANG
catalog: 	 true
tags:       [ssh, Parallel Desktop]
---

# SSH in PD

## Step 1 Set PD Network

<img src="https://raw.githubusercontent.com/Yukun4119/BlogImg/main/img/Screen%20Shot%202020-09-29%20at%2019.14.19.png" alt="Screen Shot 2020-09-29 at 19.14.19" style="zoom:50%;" />

Set this **network** to Host-Only Network.

However, once you set this, Ubuntu will not have any connection with the Internet, therefore, if you are going to `apt-get` some package, you'd better set **network** back to Shared Network



## Step 2 install ssh on Ubuntu

```
sudo apt-get install openssh-server
```



## Step 3 check ip address on Ubuntu

```
ifconfig
```

![Screen Shot 2020-09-29 at 19.18.23](https://raw.githubusercontent.com/Yukun4119/BlogImg/main/img/Screen%20Shot%202020-09-29%20at%2019.18.23.png)

The **highlight** part is the ip of Ubuntu

## Step4  use ssh on Mac

```
ssh syk@10.37.129.4
```

<img src="https://raw.githubusercontent.com/Yukun4119/BlogImg/main/img/Screen%20Shot%202020-09-29%20at%2019.19.35.png" alt="Screen Shot 2020-09-29 at 19.19.35" style="zoom:50%;" />

After typing the password:

![Screen Shot 2020-09-29 at 19.20.22](https://raw.githubusercontent.com/Yukun4119/BlogImg/main/img/Screen%20Shot%202020-09-29%20at%2019.20.22.png)

Here, we can login in Ubuntu on MacOS.



## Step 5 I don't like typing password EVERYTIME : (

On MacOS:

```shell
cd ~/.ssh
ssh-keygen -f ubt -t rsa -b 2048 -C for_OS  
#-f : file name
#-t : type
#-b : bits
#-C : comment
```

At this time, we will find `ubt` and `ubt.pub` in `~/.ssh/`



Copy `ubt.pub` to Ubuntu:

```
ssh-copy-id -i ~/.ssh/ubt.pub syk@10.37.129.4
```

You will find `authorized_keys` on Ubuntu:

![authorized_keys_pd](https://raw.githubusercontent.com/Yukun4119/BlogImg/main/img/authorized_keys_pd.png)

Now, we have copy the public key to Ubuntu



The final part is to add the ssh config on  MacOS:

```shell
vim ~/.ssh/config
```

add the following content

```shell
Host ubt
      HostName 10.37.129.4
      User syk
      IdentityFile ~/.ssh/ubt
```

![Host_ubt](https://raw.githubusercontent.com/Yukun4119/BlogImg/main/img/Host_ubt.png)

## Step 6 ENJOY :P

![Enjoy](https://raw.githubusercontent.com/Yukun4119/BlogImg/main/img/Enjoy.png)