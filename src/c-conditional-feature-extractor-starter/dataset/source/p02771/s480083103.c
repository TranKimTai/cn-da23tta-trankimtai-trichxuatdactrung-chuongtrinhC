#include <stdio.h>

int main(void)
{
    
    int i_inputA;
    int i_inputB;
    int i_inputC;

    scanf("%d%d%d", &i_inputA, &i_inputB, &i_inputC);

    if ((i_inputA == i_inputB && i_inputB == i_inputC) || (i_inputA != i_inputB && i_inputB != i_inputC && i_inputA != i_inputC))
    {
        printf("No");
    }
    else
    {
        printf("Yes");
    }

}