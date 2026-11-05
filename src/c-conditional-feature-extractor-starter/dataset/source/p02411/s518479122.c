#include<stdio.h>
int main(void)
{
	int f,m,r;
	do{
		scanf("%d %d %d",&f,&m,&r);
		if((f<=50&&m<=50)&&(f>-2&&m>-2))
		{
		if(f==-1||m==-1)printf("F\n");
		else if((f+m)>=80)printf("A\n");
		else if((f+m)<80&&(f+m)>=65)printf("B\n");
		else if((f+m)<65&&(f+m)>=50)printf("C\n");
		else if((f+m)<50&&(f+m)>=30&&r<50)printf("D\n");
		else if((f+m)<50&&(f+m)>=30&&r>=50)printf("C\n");
		else if((f+m)<30)printf("F\n");
		}
	}while(f!=-1||m!=-1||r!=-1);
return 0;
}