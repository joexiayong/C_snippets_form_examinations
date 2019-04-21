# C 语言应试易错笔记

一言以概
任何看上去有简单答案的问题都藏有坑。

### 1. 看见定义变量，总是注意变量是否被初始化过。

### 2. 注意 if 中的等号是 = 还是 ==。

### 3. if 语句没有花括号时只包含之后一行，如：
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
### 4. switch语句在缺少 break 时将 Fall through。

### 5. 求值逻辑表达式时 真为 1， 假为 0。 判断逻辑表达式时， 非 0为 真，0为 假。

### 6. true、false、TRUE、FALSE 是合法的变量名，因为在 C 中它们不是关键字。

### 7. *p++等价于 *(p++)，因后自增++ 优先级高于解引用*。


### 8. 注意函数为传值，指针也是值传递，形参永远是实参的拷贝例如：

```c
void swap(int *a, int *b) {
    int *temp = a;
    a = b;
    b = temp;
}
```
并不影响外部。

#注意分号：

```c
for (...);

if (0); 
```

`;`表示语句结束


### 无论 x 是数组还是指针，在定义上编译器认为 x[i] 与*(x+i)是等价的。因此 x[i]可以写成i[x]

### 注意 && 或||具有 短路求值 特性，不会执行无必要求值的表达式。

### strcpy(dst, src)中目标在前，源在后。

### 注意 x<=y<=z 意为(x<=y)<=z，意义非预期但合法。

### about `scanf`
1. scanf遇到空白字符截止，为输入一行可使用 scanf("[^\n]",str) 或gets()。

2. 注意：scanf("%s", s)输入 "How are you?" 遇到空格截断，只得到How。

3. strcpy(char *dst, char *src) {while(*dst++ = *src++); };中 ++ 优先级高于*
