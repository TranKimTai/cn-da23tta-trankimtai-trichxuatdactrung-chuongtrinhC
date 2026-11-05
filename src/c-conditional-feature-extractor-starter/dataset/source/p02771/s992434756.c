#include <stdio.h>

int main(void)
{
    int i, n;
    int A[1000];

    scanf("%d", &n);
    for (int i=0; i<n; i++)
        scanf("%d", &A[i]);

    int ans = 1;

    for (i=0; i<n; i++) {
        if (A[i]%2==0) {
            if (!(A[i]%3==0 || A[i]%5==0)) {
                ans = 0;
                break;
            }
        }
    }

    printf("%s\n", ans ? "APPROVE":"DENIED");

    return 0;
}
