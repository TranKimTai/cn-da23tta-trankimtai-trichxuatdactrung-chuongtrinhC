#include <stdio.h>
char s[4];
int main(void)
{
    scanf("%s", s);
    if (s[0] == '0' && s[1] == '0' || s[2] == '0' && s[3] == '0')
    {
        printf("NA");
    }
    else if (s[0] >= '2')
    {
        printf("YYMM");
    }
    else if (s[1] >= '3')
    {
        printf("YYMM");
    }
    else if (s[2] >= '2' && s[3] >= '3')
    {
        printf("MMYY");
    }
    else if(s[0] <= '2'&&s[2] <= '2')
    {
        printf("AMBIGUOUS");
    }
    else 
    {
        printf("NA");
    }
    return 0;
}