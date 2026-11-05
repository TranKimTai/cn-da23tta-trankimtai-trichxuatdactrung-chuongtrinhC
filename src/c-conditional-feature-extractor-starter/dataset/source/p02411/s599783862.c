#include <stdio.h>

int main(void){
	int a,b,c,d,p;
	while(1){
	scanf("%d%d%d",&a,&b,&c);
	if(a==-1&&b==-1&&c==-1){break;}
	if(a+b>=80&&a!=-1&&b!=-1){printf("A\n");}
	if(a+b>=65&&a+b<80&&a!=-1&&b!=-1){printf("B\n");}
	if(a+b>=50&&a+b<65&&a!=-1&&b!=-1){printf("C\n");}
	if(a+b>=30&&a+b<50&&a!=-1&&b!=-1||c>=50&&a!=0&&b!=0){printf("D\n");}
	if(a+b<30&&a!=-1&&b!=-1&&c<50||a==-1||b==-1){printf("F\n");}
	}
	return 0;
}