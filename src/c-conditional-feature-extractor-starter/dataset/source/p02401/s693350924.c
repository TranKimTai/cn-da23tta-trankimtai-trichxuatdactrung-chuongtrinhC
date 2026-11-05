#include <stdio.h>
//#define scanf scanf_s
typedef long long int lli;

// ITP1_2_D
// 3つの整数a,b,cを読み込み、aからbの中にcの約数がいくつ含まれているかをカウント
int main()
{
	int iInputA, iInputB;
	char chInputOp;

	scanf("%d %c %d", &iInputA, &chInputOp, &iInputB);

	while (chInputOp != '?')
	{

		switch (chInputOp)
		{
		case '+':
			printf("%d\n", iInputA + iInputB);
			break;
		case '-':
			printf("%d\n", iInputA - iInputB);
			break;
		case '*':
			printf("%d\n", iInputA * iInputB);
			break;
		case '/':
			printf("%d\n", iInputA / iInputB);
			break;
		default:
			break;
		}

		scanf("%d %c %d", &iInputA, &chInputOp, &iInputB);
	}


	return 0;
}
