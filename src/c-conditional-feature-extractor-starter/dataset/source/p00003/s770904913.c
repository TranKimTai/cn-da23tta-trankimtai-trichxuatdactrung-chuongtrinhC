#include <stdio.h>
int main(void){
    
    int i,num ;
    
    scanf("%d",&num);

    for(i=1;i<=num;i++){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a>b&&a>c&&a<=b+c)
        printf("YES\n");
        
        if(b>a&&b>c&&b<=a+c)
        printf("YES\n");
        
        if(c>a&&c>b&&c<=a+b)
        printf("YES\n");
        
        else 
        printf("NO\n");
        
    }
    
    
}
