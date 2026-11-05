#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int a,c,b,d;
    scanf("%d%d%d%d\n",&a,&b,&c,&d);
    int menor1,menor2,maior1,maior2;
    if(a<c){
        menor1 = a;
        menor2 = c;}
    else{
        menor1 = c;
        menor2 = a;}
    if(b>=d){
        maior1 = b;
        maior2 = d;}
    else{
        maior1 = d;
        maior2 = b;}
    if(maior2-menor2>=0)
        printf("%d\n",maior2-menor2);
    else
        printf("%d\n",0);
    return 0;
}
