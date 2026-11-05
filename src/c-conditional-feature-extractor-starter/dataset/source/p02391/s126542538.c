#include <stdio.h>
int main(void){
// Your code here!
    int a,b;

    scanf("%d %d", &a, &b);
     -1000 <= a, b <= 1000;
    if (a > b) printf ("a > b\n");
    if (a < b) printf ("a < b\n");
    else if (a == b)printf ("a == b\n");
    return 0;
}

