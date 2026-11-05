#include <stdio.h>

int main(void) {
    int m[50] = { 0 }, f[50] = { 0 }, r[50] = { 0 }, i = 0, count = 0;

    while (1) {
        scanf("%d %d %d", &m[i], &f[i], &r[i]);
        if (m[i] == -1 && f[i] == -1 && r[i] == -1) {
            break;
        }
        i++;
        count++;
    }

    for (i = 0; i < count; i++) {
        if (m[i] == -1 || f[i] == -1) {
            printf("F\n");
        }
        else if (m[i] + f[i] >= 80) {
            printf("A\n");
        }
        else if (m[i] + f[i] < 80 && m[i] + f[i] >= 65) {
            printf("B\n");
        }
        else if (m[i] + f[i] < 65 && m[i] + f[i] >= 50) {
            printf("C\n");
        }
        else if (m[i] + f[i] < 50 && m[i] + f[i] >= 30) {
            if (r[i] >= 50) {
                printf("C\n");
            }
            else {
                printf("D\n");
            }
        }
        else {
            printf("F\n");
        }
    }
    return 0;
}
