#include <stdio.h>

#define DATA_SET 10000

int main()
{
    int input[DATA_SET][2];
    char op[DATA_SET];
    int output[DATA_SET];

    for(int i = 0; i < DATA_SET; i++) { 
        scanf("%d %s %d", &input[i][0], &op[i], &input[i][1]);

        if (op[i] == '?') {
            break;
        }
        else {
            /* NOP */
        }
    }

    for(int i = 0; i < DATA_SET; i++) { 
        if (op[i] == '?') {
            break;
        }
        else if (op[i] == '+') {
            output[i] = input[i][0] + input[i][1];            
        }
        else if (op[i] == '-') {
            output[i] = input[i][0] - input[i][1];            
        }
        else if (op[i] == '*') {
            output[i] = input[i][0] * input[i][1];            
        }
        else if (op[i] == '/') {
            output[i] = input[i][0] / input[i][1];            
        }
        else {
            /* NOP */
        }
        
        printf("%d\n", output[i]);

    }  

}
