#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char s[5];
	scanf("%s", s);
	int sei[3] = {0};
	int tuki[3] = {0};
	for (int i = 0;i <= 2;i += 2)
	{
		if(s[i] == '0')
		{
			if (s[i + 1] == '0')
			{
				tuki[i] = 1;
				sei[i] = 1;
			}
		}
		else if(s[i]=='1')
		{
			if (s[i+1]!='0'&&s[i+1] != '1'&&s[i + 1] != '2')tuki[i] = 1;
		}
		else tuki[i] = 1;
	}
		if (sei[0] == 0 && sei[2] == 0 && tuki[0] == 0 && tuki[2] == 0)printf("AMBIGUOUS\n");
		else if (sei[0] == 0 &&  tuki[2] == 0)printf("YYMM\n");
		else if ( sei[2] == 0 && tuki[0] == 0 )printf("MMYY\n");
		else printf("NA\n");
	return 0;
}