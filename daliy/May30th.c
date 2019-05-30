#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char num[10];
    int s;
}st;

int main() {
//int x=0;
//char c;
//for(c=getchar();getchar()!='#';c=getchar())
//    putchar(c);

//for(x=0;x<10;x++){
//    printf("x=%d",x);
//}
//printf("****************\n");
//for(x=0;x<10;++x){
//        printf("x=%d",x);
//    }

//int a=12;
//int b=3;
//float x;
//x=a/b;printf("%.1f\n",x);
//    printf("%.1d",a/b);
    printf("%#o\n",(010<<1^1)&(0xe<<1));
    printf("%#o\n",100);
    printf("%#d\n",(010<<1^1)&(0xe<<1));
    return 0;
}
/*
10000
00001  ^ Xor
-------
10001
11100  & And
----------
10000
*/