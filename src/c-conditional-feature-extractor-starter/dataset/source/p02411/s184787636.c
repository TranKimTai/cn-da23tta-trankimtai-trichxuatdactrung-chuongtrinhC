#include<stdio.h>
int main(void){

	int m,f,r;

	while(1){

	scanf("%d %d %d",&m,&f,&r);

	if(m==-1 && f==-1 && r==-1)break;

	if(m==-1 || f==-1){

		printf("F\n");

	}

	else if(80<=m+f){

		printf("A\n");

	}

	else if(65<=m+f && m+f<80){

		printf("B\n");

	}

	else if(50<=m+f && m+f<65){

		printf("C\n");

	}

	else if(30<=m+f && m+f<50){

		printf("D\n");

	}

	else if(30<=m+f && m+f<50 && 50<=r){

		printf("C\n");

	}

	else if(m+f<30){

		printf("F\n");

	}
	}
	return 0;

}