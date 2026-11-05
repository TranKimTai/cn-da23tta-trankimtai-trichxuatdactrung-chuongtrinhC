#include<stdio.h>

int main(void)
{
    int a, b;
    while(1)
    {
        char buffer[256];
        fgets(buffer, 256, stdin);
        sscanf(buffer, "%d %d", &a, &b);
        if((-1000<a && a<1000) &&
        (-1000<b && b < 1000)) break;
    }
    if(a<b) printf("a < b\n");
    else if (a==b) printf("a == b\n");
    else if (a > b) printf("a > b\n");
    
    return(0);
}
