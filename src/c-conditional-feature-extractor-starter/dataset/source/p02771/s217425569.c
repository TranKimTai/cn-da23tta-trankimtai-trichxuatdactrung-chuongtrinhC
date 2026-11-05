#include <stdio.h>

int	main()
{
	int A,B,C;

	scanf("%d %d %d", &A,&B,&C);

	if((A == B) && (B == C))
	{
		printf("NO");
		return 0;
	}
	else if((A == B) || (A == C) || (B == C))
	{
		if((A != B) || (A != C))
		{
			printf("YES");
			return 0;
		}
	}
	printf("NO");
	return 0;

}
