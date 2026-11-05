#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main (int argc, char const *argv[])
{
    int64_t S;
    int64_t ans = 0;

    scanf("%"PRId64, &S);

    if (S >= 100 && S < 1300) {
        S %= 100;
        if (S > 1 && S < 13) {
            puts("AMBIGUOUS");
        } else {
            puts("MMYY");
        }
    } else {
        S %= 100;
        if (S >= 1 && S < 13) {
            puts("YYMM");
        } else {
            puts("NA");
        }
    }

    return 0;
}
