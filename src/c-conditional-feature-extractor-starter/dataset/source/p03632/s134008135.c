#include<stdio.h>
int main(){
    int a,b,c,d;

    scanf("%d %d %d %d",&a,&b,&c,&d);
    int j;
    if(c > b || a>d){
        j = 0;
        printf("%d\n",j);
        return 0;
    }else{
        int t0 =  a;
        int tf = b-a;
        j = tf - c;
        printf("%d\n",j);
        return 0;
    }
}
