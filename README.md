# CPPLearning
## c plus plus learning <br>
****
* [0. bool type](#0-bool-type) <br>
* [1. reference](#1-reference) <br>


* [plan](#plan) <br>

### 0. bool type
![image](./Example/res/output/e0_bool.jpg) <br>
c++ bool 类型非0即1  0 为假 1 为真 
<br>

### 1. reference
引用是变量的别名，实际指向的是同一变量；<br>
这里比较有趣的是，声明为const的变量引用，引用本身不能修改，但引用指向的值会随原变量改变<br>
![image](./Example/res/output/e1_ref_1.jpg) <br>
![image](./Example/res/output/e1_ref_2.jpg) <br>
引用与指针的区别：<br>
1、引用访问一个变量是直接访问，而指针是间距访问；<br>
2、引用是一个变量的别名，和变量共享内存空间（本身不分配内存空间），而指针本身是一个变量，有自己独立的内存空间；<br>
3、声明引用必须初始化，一旦初始化就不能再引用其他变量，而指针可以（因为指针是变量）；<br>
<br>

<br>
<br>

### plan
inline 内联函数 <br>
文件操作<br>

