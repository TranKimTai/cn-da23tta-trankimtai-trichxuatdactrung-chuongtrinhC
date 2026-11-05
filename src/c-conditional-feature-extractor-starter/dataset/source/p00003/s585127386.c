#include <stdio.h>

int main(void)
{
	int data,triangle[3],i,j,k,tmp;
	
	scanf("%d",&data);
	for(i=0;i<data;i++)
	{
		scanf("%d %d %d",&triangle[0],&triangle[1],&triangle[2]);
		
		for(j=0;j<2;j++)
			{
				for(k=j+1;k<3;k++)
					{
						if(triangle[j]<triangle[k])
						{
							tmp=triangle[j];
							triangle[j]=triangle[k];
							triangle[k]=tmp;
						}
					}
			}
		if((triangle[0]*triangle[0])==(triangle[1]*triangle[1])+(triangle[2]*triangle[2]))
			printf("YES\n");
		else
			printf("NO\n");
			
	}
	
	return 0;
}