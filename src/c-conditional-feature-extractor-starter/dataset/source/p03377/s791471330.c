#include <stdio.h>


int main (void){
    int a,b,x;
    scanf("%d%d%d",&a,&b,&x);
    if(a + b >= x){
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
