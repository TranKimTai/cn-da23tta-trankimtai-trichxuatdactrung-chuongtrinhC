#include <stdio.h>
int main(void) 
{
    int i = 0, n, a, b, c;
    scanf("%d", &n);
    while (i < n) {
        scanf("%d %d %d", &a, &b, &c);
        if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
            printf("YES\n");
        else
            printf("NO\n");
        i++;
    }
    return 0;
}
