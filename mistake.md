# C 语言考试易错点

任何看上去有简单答案的问题都藏有坑。


#### 永远都要看清楚等号是一个还是两个
- `=` 是赋值
- `==` 是比较

#### `if`, `else`, `for` 和 `while` 语句没有花括号时只包含之后一行，如：
```c
if (condition)
    optionally_executed();
    always_executed();
```
if else语句在没有花括号时，else总是匹配最近的if（Dangling Else），如：


```c
if (a)
    if (b) do_b();
else do_c();
```

实际上是：
```c
if (a) {
    if (b) {
        do_b();
    } else {
        do_c();
    }
}
```
#### 注意`if`, `else`, `for` 和 `while` 语句后的分号：

```c
for (...);
if (1); 
```
`;`表示语句结束

####  switch 语句的 case 只是一个标号，分支结束不加 break 控制流程会穿过下一个 case 标号。
```c
switch(a){
    case 1 : sth1();break;
    case 2 : sth2();
    case 3 : sth3();
}// a 的值为2 时 会执行 sth2();sth3();
```

#### 逻辑值的问题 

1. 在表达式中 `true` == 1， `false` == 0。
```c
if((3<4)==1);
//这里的 (3<4) 会被编译器认为等于 1
```
2. 判断逻辑表达式时， 非 0 == `true`，0 == `false`。
```c
while(2);
//无限循环
```

#### 注意函数为传值，指针也是值传递，形参永远是实参的拷贝，例如：

```c
void swap(int *a, int *b) {
    int *temp = a;
    a = b;
    b = temp;
}
//swap 没有任何返回值，它仅仅只是更改了形参 a 和 b 的值并不影响外部。
```

#### 无论 x 是数组还是指针，在定义上编译器认为 x[i] 与*(x+i)是等价的。因此 x[i]可以写成i[x]

#### 注意 && 或 || 具有 `短路求值` 特性，不会执行无必要求值的表达式。

```c


```
#### strcpy(dst, src)中目标(dst)在前，源(src)在后。

####  x<=y<=z 意为(x<=y)<=z，意义非预期但合法。

####  scanf遇到空白字符截止，为输入一行可使用 scanf("[^\n]",str) 或gets()。

