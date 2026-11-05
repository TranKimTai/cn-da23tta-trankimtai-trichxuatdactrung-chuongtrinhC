#include<stdio.h>

#define RTC(a, b, c) (a*a+b*b == c*c)

int main(void)
{
    int n;
    scanf("%d", &n);
    while(n--){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        puts(RTC(a, b, c) || RTC(a, c, b) || RTC(b, a, c) || RTC(b, c, a) ||
             RTC(c, a, b) || RTC(c, b, a) ? "YES" : "NO");
    }
    return 0;
}