#include <stdio.h>
int main () {
    int a,b,job=0;
    scanf("%d" "%d",&a,&b);
    if ((a<1 || a>20) ||  (b<1 || b>20)) {
        printf("%d\n",-1);
    } else {
        for (int i=1;i<=9;i++) {
            for (int j=1;j<=9;j++) {
                if (a*b==i*j) {job=1;break;}
            }
        }
        if (job==1) printf("%d\n",a*b);
        else printf("%d\n",-1);
    }
    return 0;
}
