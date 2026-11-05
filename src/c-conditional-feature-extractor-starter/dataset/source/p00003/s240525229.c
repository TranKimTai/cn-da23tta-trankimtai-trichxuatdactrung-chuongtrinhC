#include <stdio.h>
 
int ChkRightTriangle(int a,int b,int c){
    if((a*a==b*b+c*c)||(b*b==a*a+c*c)||(c*c==a*a+b*b)){
//    if(a<b+c&&b<a+c&&c<a+b){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}
 
 
int main(void) {
    int i,datano;
    int a,b,c;
    scanf("%d",&datano);
    for(i=0;i<datano;i++){
        scanf("%d %d %d",&a,&b,&c);
        ChkRightTriangle(a,b,c);
    }
 
        return 0;
}