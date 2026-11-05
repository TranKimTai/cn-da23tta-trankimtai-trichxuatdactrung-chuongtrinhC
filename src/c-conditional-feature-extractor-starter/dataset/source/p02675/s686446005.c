#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n%10==2||n%10==4||n%10==5||n%10==7||n%10==9) printf("hon\n");
    else if(n%10==0||n%10==1||n%10==6||n%10==8) printf("pon\n");
    else if(n%10==3) printf("bon\n");
    return 0;
}
