#include <stdio.h>

int a = 0;
int b = 0;
int c = 0;
int yesorno = 0;

int main()
{
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c || a != b && b != c && a != c)
    {
        yesorno = 0;
    }
    else
    {
        yesorno = 1;
    }

    if (yesorno == 0)
    {
        printf("No\n");
    }
    else
    {
        printf("Yes\n");
    }

    return 0;
}