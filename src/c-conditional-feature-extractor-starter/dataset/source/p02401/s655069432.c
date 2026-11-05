#include<stdio.h>

int main(void){
    int a,b,i;
    char op;
    
    for(i=0;i<200000;i++){
        scanf("%d",&a);
        scanf("%c",&op);
        scanf("%d",&b);
        
        if(op=='+'){
            printf("%d\n",a+b);
        }else if(op=='-'){
            printf("%d\n",a-b);
        }else if(op=='*'){
            printf("%d\n",a*b);
        }else if(op=='/'){
            printf("%d\n",a/b);
        }else{
            break;
        }
    }
    
    return 0;
}
