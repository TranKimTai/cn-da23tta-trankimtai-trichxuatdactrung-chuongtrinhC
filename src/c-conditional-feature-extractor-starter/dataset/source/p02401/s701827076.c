#include <stdio.h>

int print(int kotae)
{
	printf("%d\n", kotae);
}
int main(void)
{
	int kazu1, kazu2,kotae;
	char op[2];

	scanf("%d %s %d",&kazu1, op, &kazu2);

	if (op[0] == '+')
	{
		kotae = kazu1 + kazu2;
		print(kotae);
	}
	else if (op[0] == '-')
	{
		kotae = kazu1 - kazu2;
		print(kotae);
	}
	else if (op[0] == '*')
	{
		kotae = kazu1 * kazu2;
		print(kotae);
	}
	else if (op[0] == '/')
	{
		kotae = kazu1 / kazu2;
		print(kotae);
	}
	else
	{
	
	}
	return 0;
}
