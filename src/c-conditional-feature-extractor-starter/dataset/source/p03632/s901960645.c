#include<stdio.h>
 
int main(void){
	int i,temp,temp2;
	int a[4];

	for(i=0;i<4;i++){
	scanf("%d",&a[i]);
	}
 	
 	if(a[1] < a[3]) temp = a[1];
 	else temp = a[3];
	
	printf("%d\n",temp); 	

 	if(a[0] < a[2]) temp2 = a[2];
 	else temp2 = a[0];
 	printf("%d\n",temp2); 	

 	if(0 > temp - temp2)
 		printf("%d\n",0);
 	else
    printf("%d\n",temp - temp2);
	
	return 0;
}