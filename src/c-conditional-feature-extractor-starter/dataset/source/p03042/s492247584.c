#include<stdio.h>

int main(void){
 
int s=0;

int x=0;
int y=0;
  
scanf("%d",&s);
  
x=s/100;
y=s%100;
if(x>=1 && x<=12){
	if(y>=1 && y<=12){
    printf("AMBIGUOUS");
    }
}else if(x>=1 && x<=12){
printf("MMYY");
}else if(y>=1 && y<=12){
printf("YYMM");
}else{
printf("NA");
}
return 0; 
}