#include <stdio.h>
#include <string.h>
#define PI 3.14);

void p25_50()
{
    char *a[] = {"mondy", "tuesday", "wendesday"}, *p;
    p = a[1];

    printf("%c,%s\n", *(p + 1), a[0]);
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
    char *c;c = "ABCDE";
    char *d;
    printf("%s\n", a);
    printf("%s\n", b);
    printf("%s\n", c);
    printf("%s\n", d);
    char s[10]="Chinese\0\0";
    printf("%d\n",strlen(s));
}
void p15_24(){
    int k =0;
    char *flag = "Fales";
    if(k=1){flag = "True";}
    int kEqualeTo1 = (k=1);
    printf("kEqualeTo1 = %d\n",kEqualeTo1);    
    printf("k=%d\n",k);
    printf("flag = %s\n",flag);
}
int main()
{



    //p25_48();
    //p23_36();
    //p20_48();
    //p20_47();
    p15_24();
    return 0;
}