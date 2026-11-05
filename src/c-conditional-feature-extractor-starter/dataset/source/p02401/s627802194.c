#include<stdio.h>

int main(){

	int a,b,ans;
	char op;
	
	
	switch(op){
		scanf("%d %c %d\n",&a,&op,&b);
		case '+': ans=a+b;
		case '-': ans=a-b;
		case '*': ans=a*b;
		case '/': ans=a/b;
		case '?': break;
		default : break;
		printf("%d\n",ans);
	}
	return 0;
}