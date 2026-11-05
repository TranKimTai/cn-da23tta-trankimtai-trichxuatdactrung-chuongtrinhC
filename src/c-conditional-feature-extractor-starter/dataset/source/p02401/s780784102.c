#include<stdio.h>
int main()
{
	int a,b,c;
	char op;
	do{
		scanf("%d %c %d",&a,&op,&b);
	
	if(op=='+')
	{
		c=a+b;
		printf("%d\n",c);
	}
	else if(op=='-')
	{
		c=a-b;
		printf("%d\n",c);
	}
	else if(op=='*')
	{
		c=a*b;
		printf("%d\n",c);
	}
	else if(op=='/')
	{
		c=a/b;
		printf("%d\n",c);
	}
	}while(op !='?');
	
	
}
