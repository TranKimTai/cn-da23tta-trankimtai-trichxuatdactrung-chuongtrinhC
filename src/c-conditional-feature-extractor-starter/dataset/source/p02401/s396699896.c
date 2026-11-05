#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	char **pp;
	int i, j;
	double answers[20];
	double a, c;
	char *b;
	
	pp = (char **)malloc(sizeof(char *) * 20);
	for (i = 0; i< 20; i++){
		pp[i] = (char *)malloc(sizeof(char) * 20);
		fgets(pp[i], sizeof(char) * 20, stdin);
		a = atof(strtok(pp[i], " "));
		b = strtok(NULL, " ");
		c = atof(strtok(NULL, " "));
	
		switch((int)*b){
			case 42:
				answers[i] = a * c;
				break;
			case 43:
				answers[i] = a + c;
				break;
			case 45:
				answers[i] = a - c;
				break;
			case 47:
				answers[i] = (int)(a / c);
				break;
			case 63:
				goto prin;
		}
	
	}
	
	prin:
	for (j = 0; j < i; j++){
	printf("%g\n", answers[j]);
	}
	
	return 0;
}