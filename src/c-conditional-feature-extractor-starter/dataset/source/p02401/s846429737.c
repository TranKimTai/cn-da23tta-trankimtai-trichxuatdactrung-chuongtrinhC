#include<stdio.h>
#include<math.h>

int main()
{

	int a,b,i,j,juge,ans[100];
	char op;
	i=0;

	while(1){

		scanf("%d %c %d",&a,&op,&b);
		
		switch(op){		//op juge
			case '+':
				ans[i]=a+b;
				
				break;
			case '-':
				ans[i]=a-b;
				
				break;
			case '/':
				ans[i]=a/b;
				
				break;
			case '*':
				ans[i]=a*b;
				
				break;
			case '%':
				ans[i]=a%b;
				
				break;
			case '?':
				juge=1;
				break;
			default:
				break;
		}
		if(juge==1)
			break;
		printf("%d\n",ans[0]);
	}
/*	for(j=0;j<i;j++)
		printf("%d\n",ans[j]);
*/
	return 0;
}