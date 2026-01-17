到GitHub创建仓库，复制地址，或者之间复制命令完成创建和主分支提交
# 初始化仓库，会有一个.git的文件夹生成，用于本地存储相关管理数据
git init
# add命令添加到缓冲区，此处为添加解释文档（如果有），可视化操作为点击文件右边小加号
git add README.md
# 提交到git中，在.git文件夹中保存相关修改，可视化操作为输入message以后提交即可
git commit -m "first commit"
# git branch -m/M 重命名分支为 main ，没用-m/M则为新建，另创建并切换到新分支 git checkout -b branch1，没用-b则只是切换
# -M为强制重命名选项（小写则为非强制，要求原来目标分支不存在），将当前所在的分支重命名为 main，如果当前不是 main 分支，则将其改名为 main
git branch -M main
# 给定将要远程提交的地址， 可视化操作为存储库最右边三个点添加远程仓库
git remote add origin 地址（大致由平台名和项目名组成，如果改名了要执行切换命令git remote set-url origin <新仓库地址.git>）
# 提交到GitHub（如果地址是GitHub的），本地 main 分支与远程 origin/main 建立追踪关系，之后可以直接使用 git push 和 git pull 而无需指定分支
# -u - 设置上游分支（--set-upstream 的简写）origin - 远程仓库名称（默认的远程仓库名，可以改）main - 要推送到的远程分支名
git push -u origin main


#################################################
# 如果已经完成过初始化啥的只要
git remote add origin https://github.com/Emm-vv/C_vscode_Chinese_powershell_encoding_solve.git  # 地址要改，此处为示例
git branch -M main
git push -u origin main



## 2
由远程仓库同步内容下来
在存储库栏点击同步更改（如果没有存储库栏则在最上面源代码管理右边三个点中打开即可）
即会同步更新内容

如果对同一个版本有两个冲突更改，对于冲突部分则要求保留一个更改，再提交

## 3
创建分支  可视化操作为点击存储库栏的分支按钮，命名创建分支即可
git branch 分支名
切换分支  可视化操作为点击存储库栏的分支按钮，选择要切换的分支
git checkout 分支名
删除分支
git branch -d 分支名
创建并切换分支
git checkout -b 分支名

合并分支（应该不算常用，把旧分支合并到新分支）
git merge 分支名             可视化为点击存储库栏的分支按钮，选择要合并的分支，注意冲突，打开冲突文件，一个个选择要哪个



## 4
多个存储库
可视化操作为
1.存储库最右边三个点添加远程仓库，指定名称 (区别于origin) 的新名字
2.存储库最右边三个点拉取推送 -> 推送到 -> 选择新的远程仓库

## 5 如何恢复提交revert/reset   即撤销操作，回退版本
# 要使用收费插件会支持好一些 gitlens

直接用就是右键上一版本，复制提交ID
Ctrl+j 打开终端视图 
输入 
git revert 提交ID 
（:wq 退出）只能一步一步撤销，不能撤销到指定版本
会添加一个新的提交，该提交撤销了指定版本的提交，但保留了提交信息

git reset 提交ID 回退到指定版本，但不能直接强制提交，有冲突会删除该分支所以后面内容