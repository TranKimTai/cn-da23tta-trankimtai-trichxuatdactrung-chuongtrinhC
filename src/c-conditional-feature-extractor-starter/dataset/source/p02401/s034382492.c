#include <stdio.h>

int main()
{
	int a[1000], b[1000], x, y, i, j, ans[1000];
	char op;

	i=0;

	while(1){
		scanf("%d %c %d", &a[i], &op, &b[i]);

		if(b[i]==0){
			break;
		}

		x = a[i];
		y = b[i];
	
		switch(op){
			case '+' : ans[i] = x + y;	break;
			case '-' : ans[i] = x - y;	break;
			case '*' : ans[i] = x * y;	break;
			case '/' : ans[i] = x / y;	break;
			default : break;
		}

		i++;
	}

	for(j=0;j<i;j++){
		printf("%d\n", ans[j]);
	}

	return 0;
}
