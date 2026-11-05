#include<stdio.h>
int main(){
	int a,b;
	scanf("%d",&a);
	if(a>b){
		printf("a>b %d\n",a>b);	
	}else if(a<b){
		printf("a<b %d\n",a<b);
	}else{
		printf("a==b %d\n",a==b);
	}return 0;
}