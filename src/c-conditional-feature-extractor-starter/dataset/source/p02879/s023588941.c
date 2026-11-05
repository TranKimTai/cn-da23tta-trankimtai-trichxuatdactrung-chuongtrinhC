#include <stdio.h>
#include <string.h>

int main(void)
{
    char buf[5];
    int A,B;
    int ans = -1;
    fgets(buf,sizeof(buf),stdin);
    sscanf(buf,"%d %d",&A, &B);
    if (A<10 && B<10) {
        ans = A*B;
    }
    printf("%d", ans);
}