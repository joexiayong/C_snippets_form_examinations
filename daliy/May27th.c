#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void noname(){
    char *a;char *b;char *c;char *d;
    char ss[]="text";a=ss;
    scanf("%s",b);
//    c=getchar();
//    *d="text";
    printf("weqeqw");
}
int main() {
    char *a[]={"Mondy","Tuesday","Friday","Saturday","Sunday"};
    char **p =a;
    ++p;
        printf("%s\n",*p);
    return 0;
}
int isprime(num){
        int bool=1;
        int j=0;
        if (num>2) {

            for (j = 2; j < num; j++) {
                if (num % j == 0)
                    bool = 0;
            }

        }
        return bool;