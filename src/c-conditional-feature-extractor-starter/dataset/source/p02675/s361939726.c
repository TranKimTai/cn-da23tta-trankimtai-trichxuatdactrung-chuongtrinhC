#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <locale.h>
#define N 1000
int dizi[N];
int main(){
	int a;scanf("%d",&a);
	int ans = a%10;
	if(ans == 3)printf("bon");
	else if(ans == 0 || ans == 1 ||ans == 6 || ans ==8)printf("pon");
	else printf("hom");
  return 0;
}