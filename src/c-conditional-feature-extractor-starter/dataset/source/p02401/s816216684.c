#include<stdio.h>
int main(void)
{
	char op;
	int a,b;
	do{
	scanf("%d %c %d",&a,&op,&b);
	if(0<a && b<20000){
	if(op=='+'){
		a=a+b;
		printf("%d\n",a);
	}
	else if(op=='-'){
		a=a-b;
		printf("%d\n",a);
	}	
	else if(op=='*'){
		a=a/b;
		printf("%d\n",a);
	}	
	else if(op=='/'){
		a=a/b;
		printf("%d\n",a);
	}
	}
	}while(op!='?');
return 0;
}