#include<stdio.h>
#include<string.h>

//構造体を利用
//最も身長の高い人を出力
int main(void)
{
	int a;		
	int b;
	char op[2];
	int iCount=0;
	int iResult[1000];
	int iRoop;

	scanf("%d", &a);
	scanf("%s", op);
	scanf("%d", &b);



	while (strcmp(op, "?") != 0)
	{
		if (strcmp(op, "+") == 0)
		{
			iResult[iCount] = a + b;
		}
		else if (strcmp(op, "-") == 0)
		{
			iResult[iCount] = a - b;
		}
		else if (strcmp(op, "*") == 0)
		{
			iResult[iCount] = a * b;
		}
		else if(strcmp(op, "/") == 0)
		{
			iResult[iCount] = a / b;
		}
		else
		{
			printf("error");
			break;
		}
		iCount++;
		scanf("%d", &a);
		scanf("%s", op);
		scanf("%d", &b);
	}

	for (iRoop = 0; iRoop < iCount; iRoop++)
	{
		printf("%d\n",iResult[iRoop]);
	}

	return 0;
}
