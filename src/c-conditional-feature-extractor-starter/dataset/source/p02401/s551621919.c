#include<stdio.h>
#include<math.h>

#define MAX_LENGTH 32

int main(void)
{
        char line[MAX_LENGTH];
        char op;
        int a,b;

        while (1) {
                fgets(line, sizeof(line), stdin);
                sscanf(line, "%d %c %d", &a, &op, &b);

                if (op == '?')
                        break;

                switch (op) {
                case '+':
                        printf("%d\n", a + b);
                        break;
                case '-':
                        printf("%d\n", a - b);
                        break;
                case '*':
                        printf("%d\n", a * b);
                        break;
                case '/':
                        printf("%d\n", a / b);
                        break;
                }
        }

        return 0;
}