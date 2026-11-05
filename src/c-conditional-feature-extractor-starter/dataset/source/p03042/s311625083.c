#include<stdio.h>
#include<stdlib.h>



int main(){
    int a,b,ss;
    char s[4];
    scanf("%s",s);
    ss=atoi(s);
    a=ss/100;
    b=ss-a*100;
    if((a>12 && b >12) || (a==0 && b==0))printf("NA\n");
    else if((a>12 && b==0) || (a==0 && b>12))printf("NA\n");
    else if(a>12 || a==0)printf("YYMM\n");
    else if(b>12 || b==0)printf("MMYY\n");
    else printf("AMBIGUOUS\n");

    return 0;
}