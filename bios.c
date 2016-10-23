#include <stdio.h>
main(){
scanf("new file %s");
printf("creadt finish!  \n");
}
/*
1.git config --global user.name 'Jasyon'
  git config --global user.email '1@163.com'
 初始化仓库
  mkdir test
  cd test
  git init

  touch test.c//在工作区 
  git add -A / git add . 添加全部的文件//将文件添加到 暂存区
  git commit -m 'descreption ' 提交到本地仓库中

2.与远程仓库建立连接
git remote add origin https://github.com/Jaysontest/test.git //github已存在的账户

git clone https://github.com/Jaysontest/test.git

3.提交到远程仓库
git push -u origin master // -u 第一次提交记住本地仓库与远程仓库的连接 以后不要重新连接


git diff 命令
1.git diff bios.c 将工作区的修改与暂存区对比
2.git diff --cached 将暂存区与本地历史版本区中的最新版本对比
3.git diff HEAD --bios.c 将本地工作区（包含了暂存区内容）与本地历史版本区里的最新版本对比

查看版本提交的记录 或则历史版本
git log 或 git log --graph --pretty=oneline 
简短形式的git log --graph --pretty=oneline --abbrev-commit
当需要版本回滚的时候 特别重要


配合git git log --graph --pretty=oneline --abbrev-commit使用，可以方便回滚
git reset --hard 238a90a(版本的前七个数)--绝对回退

--相对回退
或git reset --hard HEAD^ ^代表上个版本个数 ^^ ^^^ ^^^^ ....
还可以使用git reset HEAD~100 回到上100个版本

我们都知道HEAD默认指向当前分支的最新历史版本，而git给了我们一种以HEAD方式的相对语句就是HEAD^ 这个代表当前版本的上一个版本，HEAD^^ 代表当前版本的上上一个版本。

*********注意：*************
当我们使用回退命令之后就无法查看当前版本的信息 
这时用：git reflog git log是版本历史记录，git reflog是命令历史记录。从这个里面就可以找到最新版本的commitid，就可以回退到任意一个版本。

*yson@DESKTOP-86U6H0H MINGW32 ~/Desktop/pro/test (master)
$ git log --graph --pretty=oneline --abbrev-commit
* 3fa92a0 git log
* e7c2f68 git diff
* 8999fc5 详细的操作命令
* 00e2e18 modified test2
* ce189a7 Update bios.c
* 48b567c Create bios.c
* 785f03e Initial commit

Jayson@DESKTOP-86U6H0H MINGW32 ~/Desktop/pro/test (master)
$ vi bios.c

Jayson@DESKTOP-86U6H0H MINGW32 ~/Desktop/pro/test (master)
$ git reflog
3fa92a0 HEAD@{0}: reset: moving to 3fa92a0
ab4f8dc HEAD@{1}: commit: test git reset
3fa92a0 HEAD@{2}: commit: git log
e7c2f68 HEAD@{3}: commit: git diff
8999fc5 HEAD@{4}: commit: 详细的操作命令
00e2e18 HEAD@{5}: clone: from https://github.com/Jaysontest/test.git
/


**********************************************************************************
这几个命令慎用：
git checkout -- filename:将工作区下的文件恢复到暂存区下的状态：取消本地为暂存的修改
暂存区不会被删除；

git reset HEAD filename：将暂存区的修改恢复到本地工作区，暂存区将被清空。


