#include<stdio.h>
int main(void)
{
	for(;;){
		int a,b;
		char d;
		scanf("%d %s %d\n",&a,&d,&b);
		if(d='?')
		break;
		if(d='+')
		printf("%d\n",a+b);
		else if(d='-')
		printf("%d\n",a-b);
		else if(d='*')
		printf("%d\n",a*b);
		else if(d='/')
		printf("%d\n",a/b);
	}
	return 0;
}