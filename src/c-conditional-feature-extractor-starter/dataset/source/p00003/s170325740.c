#include <stdio.h>

int main()
{
    int i,j, n[3],tempmax,rowcount;
	long temp;
	scanf("%d\n",&rowcount);
	for(i=0;i<rowcount;i++){
		scanf("%d%d%d\n",&n[0],&n[1],&n[2]);
		tempmax=0;
		for(j=1;j<3;j++){
			if(n[tempmax]<n[j]) tempmax=j;
		}
		switch(tempmax){
			case 0:
				temp=(n[1]*n[1])+(n[2]*n[2]);
			case 1:
				temp=(n[0]*n[0])+(n[2]*n[2]);
			case 2:
				temp=(n[0]*n[0])+(n[1]*n[1]);
		}

		if(n[tempmax]*n[tempmax]==temp){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}