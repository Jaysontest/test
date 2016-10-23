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

*/
