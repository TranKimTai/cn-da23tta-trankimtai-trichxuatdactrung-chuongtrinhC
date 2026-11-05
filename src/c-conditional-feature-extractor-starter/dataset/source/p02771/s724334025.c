#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
if((a==b&&b==c)||(a!=b&&b!=c)){
	printf("No");
}
else if((a==b&&b!=c)||(b==c&&a!=c)||(a==c&&b!=c)){
	printf("Yes");
}
}