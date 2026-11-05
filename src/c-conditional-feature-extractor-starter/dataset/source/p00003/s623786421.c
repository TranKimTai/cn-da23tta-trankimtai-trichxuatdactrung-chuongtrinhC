#include <stdio.h>

int main ( int argc, char **argv )
{
    char buffer[100];
    int input_size = 0;

    fgets(buffer, 100, stdin);
    sscanf(buffer, "%d", &input_size);

    int counter = 0;
    while ( counter < input_size )
    {
        int a,b,c = 0;
        fgets(buffer, 100, stdin);
        sscanf(buffer, "%d %d %d", &a, &b, &c);

        if ( a == 1 && b == 1 && c == 1 )
        {
            printf("NO\n");
            continue;
        }

        if ( (a * a) + (b * b) == (c * c) )
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

        counter++;
    }

    return 0;
}