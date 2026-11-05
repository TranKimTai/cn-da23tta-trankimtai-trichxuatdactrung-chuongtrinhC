#include<stdio.h>

int main(void)
{
	int m=0,f=0,r=0;
	
	while((m!=-1)||(f!=-1)||(r!=-1))
	{
		scanf("%d %d %d",&m,&f,&r);
		if((m!=-1)||(f!=-1)||(r!=-1))
		{
			if(m+f>=80)
			{printf("A\n");}

			if((m+f>=65)&&(m+f<80))
			{printf("B\n");}
	
			if((m+f>=50)&&(m+f<65))
			{printf("C\n");}

			if(m==-1||f==-1||m+f<30)
			{printf("F\n");}

			if((m!=-1)&&(f!=-1)&&(m+f>=30)&&(m+f<50))
			{
				if(r>=50)
				{printf("C\n");}
				if(r<50)
				{printf("D\n");}
			}
		}
		
	}
	return 0;
}
