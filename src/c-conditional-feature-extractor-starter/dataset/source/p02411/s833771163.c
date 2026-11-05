#include<stdio.h>

int main(void)
{
	int m,f,r,i,j;
	char scor[10000] = {};

	for(i = 0;;i++){
		scanf("%d %d %d",&m, &f, &r);
		if((m == -1) && (f == -1) && (r == -1))break;
		if(m == -1 || f == -1){scor[i] = 'F';}
		if(m + f >= 80){scor[i] = 'A';}
		if(m + f >= 65 && m + f < 80){scor[i] = 'B';}
		if(m + f >= 50 && m + f < 65){scor[i] = 'C';}
		if(m + f >= 30 && m + f < 50 && r >= 50){scor[i] = 'C';}
		if(m + f >= 30 && m + f < 50 && r < 50){scor[i] = 'D';}
		if(m + f < 30){scor[i] = 'F';}
	}
	for(j = 0;j < i;j++){
		printf("%c\n",scor[j]);
	}
	return 0;
}