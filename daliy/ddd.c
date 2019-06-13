#include <stdio.h>
#define prt(a,b) if(!a)b=a

int main(viod){
    int x=1,y=0;
    if(x>y)prt(x,y);
    else prt(y,x);
    printf("%d,%d",x,y);
    return 0;

}