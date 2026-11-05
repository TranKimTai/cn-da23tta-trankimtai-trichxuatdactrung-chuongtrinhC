#include <stdio.h>

int main()
{
	int i,j,values[3];
	scanf("%d\n",&i);

	for(j=0;j<i;j++)
	{
		scanf("%d %d %d",&values[0],&values[1],&values[2]);
		sort_aoj_volume0003(values);
		if(values[0]*values[1] + values[1]*values[1] == values[2]*values[2])
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}

	}
	return 0;
}

void sort_aoj_volume0003(int values[])
{
	int i,count=10;
	while(count > 1)
	{
		for(i=1;i<count;i++)
		{
			if(values[i] < values[i-1])
			{
				int value_2 = values[i-1];
				values[i-1] = values[i];
				values[i] = value_2;
			}
		}
		count--;
	}
	return;
}