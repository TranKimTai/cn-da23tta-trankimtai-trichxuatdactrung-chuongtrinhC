


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#define INFINI 100000001


int main(){

int a,b,c,d;
scanf("%d %d %d %d",&a,&b,&c,&d);


    int maxmin=(a<c)?c:a;
    int minmax=(b<d)?b:d;

    
    if(maxmin>minmax)
        printf("0");
    else
        printf("%d",minmax-maxmin);

}
