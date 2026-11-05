#include <stdio.h>
#include <stdlib.h>

int main()
{   
	int a, b, result;
	char op;
	
	while(1)
	{
		scanf("%d %c %d", &a, &op, &b);
		if(op == '+')
		{
			result = a + b;
		}
		if(op == '-')
		{
			result = a - b;
		}
		if(op == '*')
		{
			result = a * b;
		}
		if(op == '/')
		{
			result = a / b;
		}
		
		if(op == '?')
		{
			break;
		}
		printf("%d\n", result);
	}
	
	return 0;
}
