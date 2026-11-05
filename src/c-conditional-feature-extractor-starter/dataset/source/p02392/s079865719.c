#include <stdio.h>

#define COMP_TRUE 1
#define COMP_FALSE 0

int main(void)
{
	int a, b, c;
	int ret;
	
	a = 0;
	b = 0;
	c = 0;
	ret = COMP_FALSE;
	
	// 数値入力
	scanf("%d%d%d", &a, &b, &c);
	
	// 数値比較
	if(a < b)
	{
		if(b < c)
		{
			ret = COMP_TRUE;
		}
		else
		{
			ret = COMP_FALSE;
		}
	}
	else
	{
		ret = COMP_FALSE;
	}
	
	// 結果出力
	if(ret == COMP_TRUE)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	
	return 0;
}
