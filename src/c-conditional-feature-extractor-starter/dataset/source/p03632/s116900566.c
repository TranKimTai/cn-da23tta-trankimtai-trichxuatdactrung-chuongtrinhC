#include <stdio.h>
int main(void){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(b<c) printf("0\n");
    else if(a<=c && d<=b) printf("%d\n",d-c);
    else printf("%d\n",b-c);
}