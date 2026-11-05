#include<stdio.h>
int main()
{
    int i, N, a, b, c;
    scanf("%d", &N);

    for(i=0;i<N;i++){
        scanf("%d %d %d", &a, &b, &c);
        if(a>b && a>c){
            if(a*a==b*b+c*c){
                printf("YES\n");
            }else
                printf("NO\n");
        }else if(b>a && b>c){
            if(b*b==a*a+c*c){
                printf("YES\n");
            }else
                printf("NO\n");
        }else{
            if(c*c==a*a+b*b){
                printf("YES\n");
            }else
                printf("NO\n");
        }   
    }   
    return 0;
}