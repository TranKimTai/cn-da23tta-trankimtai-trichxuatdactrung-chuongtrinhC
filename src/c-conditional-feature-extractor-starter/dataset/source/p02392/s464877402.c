#include <stdio.h>


int main(int argc, char const *argv[])
{
    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c);
    
    
    if (a < b && b < c) {
        puts("YES");
    }
    else
    {
        puts("NO");
    }
    
    
    return 0;
}

