#include <stdio.h>
#include <stdlib.h>

int main() {
        int a, b, result;
  char op;
        while(1) {

                scanf("%d %c %d", &a, &op, &b);

                if (op == '?') {
                        break;
                }

                switch(op) {
                                case '+' :
                                                result = a + b;
                                                break;
                                case '-' :
                                                result = a - b;
                                                break;
                                case '*' :
                                                result = a * b;
                                                break;
                                case '/' :
                                                result = a / b;
                                                break;
                                default :
                                                break;

                }
                printf("%d\n", result);
        }
}

