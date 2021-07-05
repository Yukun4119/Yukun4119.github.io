---
layout:     post
title:      docker 基本操作
date:       2020-10-07
author:     Yukun SHANG
catalog: 	 true
tags:		[Docker]
---

# docker 基本操作

## Basic Operation

```shell
# create new container from image
docker run [image name/id]

# list all the containers
docker ps -a

# start container
docker start [container name/id]

# enter container
docker exec -it [container name/id] /bin/sh

# If you are using docker on Linux(like Ubuntu), the following command may be correct.
docker exec -it [container name/id] bash

# stop container
docker stop [container name/id]

# remove container
docker rm [container name/id]

# exit docker interface
exit   # Ctrl-d is also ok

```

## Advanced Operation

```shell
# Create new contain and set up Docker Volume
# where 6666 can be replace by IMAGE ID 
# `pwd` means the current host path, you can also use your customed path.
# /home/oslab/ is the docker container path
# -u oslab denotes the user, which is optional. If omitted, root is the default user
docker run -it -v `pwd`:/home/oslab/ -u oslab -w /home/oslab 6666 /bin/bash
```



## Reference

[Docker Volume - 目录挂载以及文件共享](https://kebingzao.com/2019/02/25/docker-volume/)

