#include <stdio.h>

int main (void)
{
    int a, b, c, temp;
    int n, i;
    scanf("%d", &n);
    

    for (i = 1; i <= n; i++){
        scanf("%d%d%d", &a, &b, &c);
        if (a > c){
            temp = c;
            c = a;
            a = temp;
        }
        if(b > c){
            temp = c;
            c = b;
            b = temp;
        }
        if (a * a + b * b == c * c)  printf("YES\n");
        else printf("NO\n");
    }
    return (0);
}
