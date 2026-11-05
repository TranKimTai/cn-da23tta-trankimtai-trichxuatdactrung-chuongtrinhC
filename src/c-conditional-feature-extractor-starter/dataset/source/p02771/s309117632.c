#include <stdio.h>

int	main()
{
	int A,B,C;

	scanf("%d %d %d", &A,&B,&C);

	if((A == B)||(A == C)||(B == C))
	{
		if((A != B)||(A != C))
			printf("YES\n");
	}
	else
		printf("NO\n");

	return 0;

}
