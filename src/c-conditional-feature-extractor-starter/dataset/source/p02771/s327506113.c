#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d",&a, &b, &c);
    if(a==b && a!=b) printf("Yes\n");
    if(b==c && b!=a) printf("Yes\n");
    if(a==c && a!=b) printf("Yes\n");
    if(a!=b && a!=c && b!=c) printf("No\n");
    if(a==b==c) printf("No\n");
    return 0;
}