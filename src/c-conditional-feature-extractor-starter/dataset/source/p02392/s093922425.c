#include <stdio.h>

int answer(int a,int b,int c);

int main(void){
	int num=0;
    int a,b,c;
    
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
	num=answer(a,b,c);
	
	switch(num){
	case 1:
	printf("Yes\n");
	break;
	case 2:
	printf("No\n");
	break;
	case 3:
	printf("0<=a,b,c<=100の数字を入力して下さい\n");
	break;
	}
    return 0;
}

int answer(int a, int b,int c){
	
	if(0>a || 100<a || 0>b || 100<b || 0>c || 100<c){
	return 3;
	}else if(a<b && b<c){
	return 1;
	}else{
	return 2;
	}
}