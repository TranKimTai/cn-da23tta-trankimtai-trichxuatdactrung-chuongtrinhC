#include<stdio.h>

int main(void)
{
	int i,a,b,c,d,e,f;
	char op;
	for(i=1; ;i++)
	{
	scanf("%d %s %d",&a,&op,&b);
	if(op=='?')break;
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
		if(op=='+'){printf("%d\n",c);}
			else{if(op=='-'){printf("%d\n",d);}
						else{if(op=='*'){printf("%d\n",e);}
								else{printf("%d\n",f);}
						}
			}
	}
return 0;
}
