#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>
#include <assert.h>
typedef int64_t ll;
typedef uint64_t ull;
int acs(const void *a, const void *b){return *(int*)a - *(int*)b;} /* 1,2,3,4.. */
int des(const void *a, const void *b){return *(int*)b - *(int*)a;} /* 8,7,6,5.. */
#define min(a,b) (a < b ? a: b)
#define max(a,b) (a > b ? a: b)

#define MAXN (200001)
#define MOD (1000000007)

int main(void)
{
    ll a,b;
    scanf("%ld %ld",&a,&b);

    if(a>=10||b>=10)
    {
        printf("-1\n");
        return 0;
    }

    
    ll ans=a*b;
    printf("%ld\n", ans);
    return 0;
}
