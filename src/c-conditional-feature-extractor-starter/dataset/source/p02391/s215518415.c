#include <stdio.h>

int main(void)
{
	int a, b;
	printf("一つ目の数値は？");
	scanf("%d",&a);
	printf("二つ目の数値は？");
	scanf("%d",&b);
	if(a < b){
		printf("大きい数値は%d\n",b);
		printf("小さい数値は%d\n",a);
	}
	else if(a==b){
		printf("%d=%d\n",a,b);
	}
	else{
	printf("大きい数値は%d\n",a);
	printf("小さい数値は%d\n",b);
	}
	return 0;
}
