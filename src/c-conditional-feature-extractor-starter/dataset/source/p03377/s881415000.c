    #include <stdio.h>
    int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int d;
    d=a+b;
     
    if(d<=c)puts("No");
    else
    if(a>c) puts("No");
    else
    puts("Yes");
    return 0;
    }