#include<stdio.h>

int main (){
	int a,b;
	scanf("%d %d",&a,&b);
	int i,j,check;
	check = 0;
	for (i=1;i<=9;i++){
		for (j=1;j<=9;j++){
			if (a*b==i*j){
				printf("%d\n",i*j);
				check = 1;
				j=10;
				i=10;
			}
		}
	}
	if (check ==0){
		printf("-1\n");
	}
	return 0;
}
