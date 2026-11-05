#include<stdio.h>
int main(void){
    int a,b,c,p;
    while(1){
        scanf("%d%d%d",&a,&b,&c);
        if (a==-1&&b==-1&&c==-1){break;}
        p=a+b;
        if(a==-1&&b>=0){printf("F\n");}
        else if(b==-1&&a>=0){printf("F\n");}
        else if(p>=80){printf("A\n");}
        else if(p>=65&&p<85){printf("B\n");}
        else if(p>=50&&p<65){printf("C\n");}
        else if(p>=30&&p<50&&c<50){printf("D\n");}
        else if(p>=30&&p<50&&c>=50){printf("C\n");}
        else if(p<30){printf("F\n");}
    }
    return 0;
}