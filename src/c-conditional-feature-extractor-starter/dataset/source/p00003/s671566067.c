#include <stdio.h>

int N;
int x, y, z;

int min(int a, int b) {
    if(a <= b) {
        return a;
    } else {
        return b;
    }
}

int max(int a, int b) {
    if(a >= b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    scanf("%d", &N);

    int i = 0, a = 0, b = 0, c = 0;
    for(i = 0; i < N; ++i) {
        scanf("%d %d %d", &x, &y, &z);
        a = min(x, min(y, z));
        c = max(x, max(y, z));
        b = (x + y + z) - (a + c);

        if(a*a + b*b == c*c) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}
