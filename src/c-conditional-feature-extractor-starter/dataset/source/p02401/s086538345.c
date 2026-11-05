#include<stdio.h>

int main(void){
	
	int a,b,k;
	char op;
	
	while(1){
		scanf("%d %c %d", &a,&op,&b);
		if(op == '?'){
			break;
		}
		else if(op == '+'){
			k = a + b;
				printf("%d\n",k);
		}
		else if(op == '-'){
			k = a-b;
				printf("%d\n",k);
		}
		else if(op == '*'){
			k = a*b;
				printf("%d\n",k);
		}
		else if(op == '/'){
			k = a/b;
				printf("%d\n",k);
		}
		else{
			k = a%b;
				printf("%d\n",k);
		}
	}
	return 0;
}