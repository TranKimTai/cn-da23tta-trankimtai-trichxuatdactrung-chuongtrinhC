#include <stdio.h>
int main (void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if ((a == b && a != c) || (b == c && b != a) || (c == a && c != b)) {
        puts("Yes");
    } else {
        puts("No");
    }
}
