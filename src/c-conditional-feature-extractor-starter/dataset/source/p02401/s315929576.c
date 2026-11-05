#include <stdio.h>

int main(void)
{
	
	int a,b;
	char op;
	scanf("%d %c %d",&a,&op,&b);
	(((0<a)&&(a<=20000))&&((0<=b)&&(b<=20000)));
	while(!(op=='?'))
	{
		if(op=='+')
		{
			printf("%d\n",a+b);
		}
		else
		{
			if(op=='-')
			{
				printf("%d\n",a-b);
			}
			else
			{
				if(op=='*')
				{
					printf("%d\n",a*b);
				}
				else{
					if((op=='/')&&(!(b==0)))
					{
						printf("%d\n",a/b);
					}
				}
			}
		}
		scanf("%d %c %d",&a,&op,&b);
	}
	return 0;
}