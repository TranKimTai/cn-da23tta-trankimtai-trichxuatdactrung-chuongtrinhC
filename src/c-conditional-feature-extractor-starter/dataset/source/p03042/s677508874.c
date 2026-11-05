#include <stdio.h>
int m;
char s[4];
int main(void)
{
    scanf("%s", s);
    if (s[0] == '0' && s[1] >= '1' || s[0] == '1' && s[1] <= '2')
    {
        m = 1;
    }
    else
    {
        m = 2;
    }

    if (m == 1)
    {
        if (s[2] == '0' && s[3] >= '1' || s[2] == '1' && s[3] <= '2')
        {
            printf("AMBIGUOUS");
        }
        else
        {
            printf("MMYY");
        }
    }
    else
    {
        if (s[2] == '0' && s[3] == '0' || s[2] >= '2' || s[2] == '1' && s[3] >= '3')
        {
            printf("NA");
        }
        else
        {
            printf("YYMM");
        }
    }
    return 0;

    /*if(s[0] =='0'&&s[1] == '0'||s[2] =='0'&&s[3] == '0'){
       printf("NA");
    }else
    if (s[0] >= '2')
    {
        printf("YYMM");
    }
    else if (s[1] >= '3')
    {
        printf("YYMM");
    }
    else if(s[2] >= '2'&&s[3] >= '3'){
        printf("MMYY");
    }else {
        printf("AMBIGUOUS");
    }*/
}