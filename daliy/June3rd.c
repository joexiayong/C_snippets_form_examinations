#include <stdio.h>
int main(){
//    char str[14]="hello\tworld\n";
//    printf("sizeof(str)=%d,*(str+10)=%c",sizeof(str),*(str+10));

void f1(char s[],char t[]){
    int i =0;
    while (t[i]!='\0'){
        s[i]=t[i];
        i++;
    }
    s[i]=0;
}

void f2(char *s,char *t){
    while (*s++=*t++);
}
char a[]="qwert";
char b[]="12345";
f1(a,b);
f2(a,b);

    return 0;
}
/*
*
在比较 t[i]!='\0' 错误地将其写成了 t[i]!="\0" 双引号表示是一个字符串
编译器报错，无法将指针与整形比较，
*/