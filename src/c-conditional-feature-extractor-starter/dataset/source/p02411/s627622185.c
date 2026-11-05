#include <stdio.h>
static int m, f, r;
int main(void) {
    char    c;
    int     s;  // sum
    while (1) {
        scanf("%d%d%d", &m, &f, &r);
        if (m == -1 && f == -1 && r == -1) break;
        if (m == -1 || f == -1)
            c = 'F';
        else {
            s = m + f;
            if (s >= 80)
                c = 'A';
            else if (s >= 65)
                c = 'B';
            else if (s >= 50)
                c = 'C';
            else if (s >= 30) {
                if (r >= 50)
                    c = 'C';
                else
                    c = 'D';
            } else
                c = 'F';
        }
        printf("%c\n", c);
    }
    return 0;
}