#include <stdio.h>
#include <string.h>
#define PI 3.14);
#define MAX(a, b) (a) > (b) ? (a) : (b)
void p25_50()
{
    char *a[] = {"mondy", "tuesday", "wendesday"}, *p;
    p = a[1];

    printf("%c,%s\n", *(p + 1), a[0]);
    //u,mondy
}
void p25_49()
{
    void fun(char *a, char *b)
    {
        while (*a == '*')
            a++;
        while (*b = *a)
        {
            b++;
            a++;
        }
    }
    char *s = "*****a*b*****", t[80];
    fun(s, t);
    puts(t);
}
void p25_48()
{ /*
字符串指针相减
*/
    int fun(char *s)
    {
        char *p = s;
        while (*p != 0)
            p++;

        return p - s;
    }
    printf("%d\n", fun("goodbey!"));
}
void useString()
{
    char *s, *b;
    s = "abc";
    b = "abcdefg";
    printf("%d", b - s);
}
void p23_36()
{
    void fun(char *s)
    {
        while (*s)
        {
            if (*s % 2)
                printf("%c", *s);
            s++;
        }
    }
    char a[] = "BYTE";
    fun(a);
}
void p20_48()
{
    int fun(char s[])
    {
        char *p = s;
        while (*p != 0)
            p++;
        return (p - s);
    }
    printf("%d", fun("0ABCDEFGHIJK"));
}
void someWay()
{
        printf("%f",PI
}
void p20_47()
{
    //
    char a[5] = {"ABCDE"};
    char b[5] = {'A', 'B', 'C', 'D', 'E'};
    char *c;
    c = "ABCDE";
    char *d;
    printf("%s\n", a);
    printf("%s\n", b);
    printf("%s\n", c);
    printf("%s\n", d);
    char s[10] = "Chinese\0\0";
    printf("%d\n", strlen(s));
}
void p15_24()
{
    int k = 0;
    char *flag = "Fales";
    if (k = 1)
    {
        flag = "True";
    }
    int kEqualeTo1 = (k = 1);
    printf("kEqualeTo1 = %d\n", kEqualeTo1);
    printf("k=%d\n", k);
    printf("flag = %s\n", flag);
    // kEqualeTo1 = 1
    // k=1
    // flag = True
}
// void structSnippets{
//     typedef struct MyStruct
//     {

//     };
// }

void p33_34()
{
    int fun()
    {
        static int m = 1;
        return m *= 3;
    }
    int i = 2, s = 1;
    while (i--)
    {
        s = fun();
    }
    printf("%d\n", s);
    // 9
}
void cmp_plus()
{
    int i, j, k, l;
    for (i = 0; i < 10; i++)
        printf("%d\n", i);

    for (j = 0; j < 10; ++j)
        printf("%d\n", j);
    k = 3;
    while (k--)
    {
        printf("while k-- = %d\n", k);
        // while k-- = 2
        // while k-- = 1
        // while k-- = 0
    }
    k = 3;
    while (--k)
    {
        printf("while --k = %d\n", k);
        // while --k = 2
        // while --k = 1
    }
}

void p32_26()
{
    int a[2][3], *p;
    p = a;
    p = a[1][2];
    p = &a[1][2];
    p = &a;
    // a为二维数组，需要使用行指针，
    // int (*p)[3] a[2][3]
    // p=a
    // 159:6: warning: assignment to 'int *' from incompatible pointer type 'int (*)[3]' [-Wincompatible-pointer-types]
    //      p=a;
    //       ^
    // 160:6: warning: assignment to 'int *' from 'int' makes pointer from integer without a cast [-Wint-conversion]
    //      p=a[1][2];
    //       ^
    // 162:6: warning: assignment to 'int *' from incompatible pointer type 'int (*)[2][3]' [-Wincompatible-pointer-types]
    //      p=&a;
}

void p30_13()
{
    /*
    原题目要求选出不合法的c语言常量
    正确答案为 '\083' ，八进制中不能出现八
    但是我选的是 '\' 这在程序中无论如何不能编译通过。
    
    */
    const char a = '\n';
    const char b = '\\';
    const char c = '\073';
    const char d = '\xcc';
}
void null_()
{
    printf("gbs=%d\n", NULL);
    // 0;
    // 小写的null会被编译器当成变量。产生错误
}

void p44_35()
{
    struct st
    {
        int x;
        int y;
    } * ps;
    int a[] = {1, 2};
    int b[] = {3, 4};
    struct st c[2] = {10, a, 15, b};
    ps = c;
    printf("%d", ++ps->x);
    // 11 ++的优先级没有 -> 高
    printf("%d", ps->x);
    // 10
    //printf("%d",*ps->y); 这个选项有语法错误
    printf("%d", (ps++)->x);
    // 10
}
// void p43_29()
// {
//     char *a;
//     a = {"Chinese"};
//     // 无需括号
//     //     main.c:12:7: error: expected expression before ‘{’ token
//     //      a={"Chinese"};
//     //        ^
//     char *b;
//     b = "Chinese!";
//     //right
//     char c[10];
//     c = "Chinese!";
//     //error: assignment to expression with array type
//     //      c="Chinese!";
//     //       ^
//     char d[];
//     d = "Chinese!";
//     //error: array size missing in ‘d’
//     //          char d[];
//     //               ^
//     char c[10] = "Chinese!";
//     char d[] = "Chinese!";
// }
void p43_29m()
{
    char *tmp = "Chinese!";
    char *a;
    a = tmp;
    char *b;
    b = tmp;
    tmp = "USA";
    printf("%s\n", a);
    printf("%s\n", b);
    //Chinese!
    //Chinese!
    /*
    a 和 b 的值不会改变！！！
    */
}
void string_pointer()
{
    char s[] = "ABCD", *p;
    for (p = s; p < s + 4; p += 2)
        printf("%c", *p);
    //abcdcd
}
void a()
{
    // #define MAX(a,b) (a)>(b)?(a):(b)
    int a = 5, b = 2, c = 3, d = 3, t;
    t = MAX(a + b, c + d) * 10;
    //t=(a+b)>(c+d)?(a+b):(c+d)*10;
    printf("%d\n", t);
    // 7
}
void b()
{
    //输入“1234567890”
    //ch = 1

    char ch;
    while ((ch = getchar()) == '0')
        printf("#");
}
void char_p(){
    char *f(char *str){
        return str="fun";
    }
    char *str="one";
    printf("%s,%c\n",f(str)+1,*f(str)+1);
    

}

void pointer(){
    int *a,*b,*c;
    int d=2;
    a=b=c=&d;
    a=0;
    *b=1;
    *c=2;
    a=b;
    printf("%d,%d,%d\n",*a,*b,*c);
}
int main()
{

    //p25_48();
    //p23_36();
    //p20_48();
    //p20_47();
    // p15_24();
    // p33_34();
    //cmp_plus();
    return 0;
}
