#include <stdio.h>
#include <inttypes.h>
#include <stdint.h>

#define __STDC_FORMAT_MACROS

int main(void)
{
	int32_t cats, unknown, sum;

	scanf("%PRI32d %PRI32d %PRI32d", &cats, &unknown, &sum);

	printf("%s", ((sum - cats <= unknown) && (sum >= cats)) ? "YES" : "NO");

	return 0;
}
