# git
## commit 后的回退操作
1.未push
git log 查看记录，选择要回退的版本的哈希值
git reset + 哈希值
此时可以用git status 查看当前的状态，此时的状态相当于更改完代码，但未进行add 和 commit 的操作时的状态，然后可以进行  git restore回退。
这时 会将之前的commit 信息一起删除
2.push过的
此时已经将修改推到远程仓库，