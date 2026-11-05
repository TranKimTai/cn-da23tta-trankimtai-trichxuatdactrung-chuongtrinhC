#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	char s[4];
	int b[2];
	int i;
	
	scanf("%s", &s);
	
	for(i = 0; i < 2; i++){
		if(s[i * 2] >= '2' || (s[i * 2] == '1' && s[i * 2 + 1] >= '3') || (s[i * 2] == '0' && s[i * 2 + 1] == '0'))
			b[i] = 0;
		else
			b[i] = 1;
	}
	
	if(b[0] == 1){
		if(b[1] == 1)
			printf("AMBIGUOUS");
		else
			printf("MMYY");
	}else{
		if(b[1] == 1)
			printf("YYMM");
		else
			printf("NA");
	}
	
	return 0;
}