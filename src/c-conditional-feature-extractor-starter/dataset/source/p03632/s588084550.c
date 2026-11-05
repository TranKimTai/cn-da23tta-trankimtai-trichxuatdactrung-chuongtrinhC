#include<stdio.h>
int main(void){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if((a<c&&d<b)||(a==c&&b==d))
    printf("%d",d-c);
    else if(c<a&&b<d)
    printf("%d",b-a);
    else if(c>=a+b||c+d<=a)
    printf("0");
    else if(a<=c)
    printf("%d",a+b-c);
    else if(c<a)
    printf("%d",c+d-a);
    return 0;
}