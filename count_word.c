#include <stdio.h>
int main(void)
{
	char a[100]=" dasd  dsada    gfdgfd";
	int count=0,word=0;
	int i;
	char c;
	for(i=0;a[i]!='\0';i++){
		if(a[i]==' '){
			word=0;
		}else if(word==0){//单词的首字母 
			word = 1;
			count++;
		}
	}
	printf("count=%d",count);
	return 0;
}
