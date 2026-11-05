#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define PI 3.141592653

void solve() 
{
    int n;
    scanf("%d",&n);
    if(n%10==2 || n%10==4 || n%10==5 || n%10==7 || n%10==9)
        printf("hon\n");
    else if(n%10==0 || n%10==1 || n%10==6 || n%10==8)
        printf("pon\n");
    else printf("bon\n");
    
}  
int main(){
    int t;
    // scanf("%d",&t);
    // while(t--){
        solve();
    // }
    return 0;
}