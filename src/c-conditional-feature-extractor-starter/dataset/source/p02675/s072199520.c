#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, h, m;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &h);
    scanf("%lf", &m);
    double rad = fabs(30 * h + 0.5 * m - 6 * m);
    if (rad > 180)
    {
        rad -= 180;
    }

    rad = (rad / 180) * M_PI;
    double ans = b * b + a * a - 2 * b * a * cos(rad);
    /* 平方根 */
    ans = sqrt(ans);

    printf("%20.20lf\n", ans);
    return 0;
}
