part 1
создаем пустой репозиторий на github

$mkdir lab02homework //создаем директорию для того чтобы создать в ней  
локальную копию репозитория на github 
//команды длясоздания локальной копии удаленного репозитория 
$ git init 
$git add .
$git commit -m "first commit"
$git remote add origin https://github.com/klich26/lab02homework.git
$git pull origin main 

$nano hello_world.cpp // с помощью редактора nano реализуем программу Hello world на языке C++ используя плохой стиль кода

$git add  hello_world.cpp // добавляем файл
$git commit -m "hello_world1" //создаем первый коммит
[master a4e8ada] hello_world1
 1 file changed, 8 insertions(+)
 create mode 100644 hello_world.cpp

$nano hello_world.cpp // изменяем исходный, так чтобы запрашивалось имя пользователя и выводилось "Hello world from @name"

$git commit -am "hello_world2" // создаем новый commit  с флагом -а для того чтобы коммитить без добавления файла 
//флаг -а помогает закоммитить все существующие файлы, которые были изменены

[master 10da038] hello_world2
 1 file changed, 5 insertions(+), 1 deletion(-)


$git push origin master


numerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 16 threads
Compressing objects: 100% (6/6), done.
Writing objects: 100% (6/6), 708 bytes | 708.00 KiB/s, done.
Total 6 (delta 0), reused 0 (delta 0), pack-reused 0
remote: 
remote: Create a pull request for 'master' on GitHub by visiting:
remote:      https://github.com/klich26/lab02homework/pull/new/master
remote: 
To https://github.com/klich26/lab02homework.git
 * [new branch]      master -> master

part 2

$git switch -c patch1 //создаем локальную ветку
$nano hello_world //вносим изменения в код
$git commit -am "hello_world3_patch1" 
[patch1 743ef3e] hello_world3_patch1
 1 file changed, 4 insertions(+), 4 deletions(-)
$git push origin patch1
Enumerating objects: 5, done.
Counting objects: 100% (5/5), done.
Delta compression using up to 16 threads
Compressing objects: 100% (3/3), done.
Writing objects: 100% (3/3), 385 bytes | 385.00 KiB/s, done.
Total 3 (delta 0), reused 0 (delta 0), pack-reused 0
remote: 
remote: Create a pull request for 'patch1' on GitHub by visiting:
remote:      https://github.com/klich26/lab02homework/pull/new/patch1
remote: 
To https://github.com/klich26/lab02homework.git
 * [new branch]      patch1 -> patch1
// после того как произвели push локального репозитория, на github 
//создаем pull-request для того чтобы перенести все данные из ветки patch1  в ветку main
$ nano hello_world.cpp //редактируем файл
 
$git commit -am "hello_world4_patch1"
[patch1 fa06f4c] hello_world4_patch1
 1 file changed, 3 insertions(+), 1 deletion(-)
$git push origin patch1
Enumerating objects: 5, done.
Counting objects: 100% (5/5), done.
Delta compression using up to 16 threads
Compressing objects: 100% (3/3), done.
Writing objects: 100% (3/3), 402 bytes | 402.00 KiB/s, done.
Total 3 (delta 0), reused 0 (delta 0), pack-reused 0
To https://github.com/klich26/lab02homework.git
   743ef3e..fa06f4c  patch1 -> patch1
// в удаленном репозитории создаем pull-request patch1-> main и удаляем ветку patch1 теперь осталась одна ветка main
$git pull origin main 
remote: Enumerating objects: 3, done.
remote: Counting objects: 100% (3/3), done.
remote: Compressing objects: 100% (3/3), done.
remote: Total 3 (delta 0), reused 0 (delta 0), pack-reused 0 (from 0)
Unpacking objects: 100% (3/3), 2.57 KiB | 1.29 MiB/s, done.
From https://github.com/klich26/lab02homework
 * branch            main       -> FETCH_HEAD
   ac82014..d902a4f  main       -> origin/main
Updating fa06f4c..d902a4f
Fast-forward
$git log
commit d902a4f6917fd3f45dc462e985aa97dc6490d2c2 (HEAD -> patch1, origin/main)
Merge: 9f64b23 fa06f4c
Author: klich26 <dimus0007@gmail.com>
Date:   Fri Mar 21 00:32:34 2025 +0300

    Merge pull request #3 from klich26/patch1
    
    hello_world4_patch1

commit fa06f4cee7e0cd5f5510b3719d84f54bcb08718c (origin/patch1)
Author: klich26 <dimus0007@gmail.com>
Date:   Fri Mar 21 00:30:07 2025 +0300

    hello_world4_patch1

commit 9f64b23fafdf4facf9c280f6f9793940dc12f791
Merge: 80e1643 743ef3e
Author: klich26 <dimus0007@gmail.com>
Date:   Fri Mar 21 00:28:18 2025 +0300

    Merge pull request #2 from klich26/patch1
    
    hello_world3_patch1

$git branch -d patch1 //удаляем ветку patch1

Deleted branch patch1 (was d902a4f).
$git branch // список всех существующих веток
* main

part3

$git switch -c patch2 // создаем новую ветку
Switched to a new branch 'patch2'

//чтобы использовать clang-format  сначала устанавливаем 
$apt install clang-format

$clang-format -i --style=webkit hello_world.cpp // изменяем code style используя флаг -i сохраняем изменение в файле
$git commit -am "patch2"
[patch2 2b2de43] patch2
 1 file changed, 7 insertions(+), 9 deletions(-)
$git push origin patch2
Enumerating objects: 5, done.
Counting objects: 100% (5/5), done.
Delta compression using up to 16 threads
Compressing objects: 100% (3/3), done.
Writing objects: 100% (3/3), 405 bytes | 405.00 KiB/s, done.
Total 3 (delta 0), reused 0 (delta 0), pack-reused 0
remote: 
remote: Create a pull request for 'patch2' on GitHub by visiting:
remote:      https://github.com/klich26/lab02homework/pull/new/patch2
remote: 
To https://github.com/klich26/lab02homework.git
 * [new branch]      patch2 -> patch2
//создаем pull-request patch2->main
//в удаленном репозитории меняем код hello_world.cpp  путем добавления коментариев
// в pull-request появляются конфликты
// чтобы исправить ошибки выполняем
$git pull --rebase origin main
* branch            main       -> FETCH_HEAD
Updating 2b2de43..70adaa6
Fast-forward
 hello_world.cpp | 5 ++++-
 1 file changed, 4 insertions(+), 1 deletion(-)
$git add hello_world.cpp
$git rebase --continue 
$git push origin patch2 --force
//создаем pull-request patch2->main
