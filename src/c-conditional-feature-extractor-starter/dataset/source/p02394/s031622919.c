#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	int width;
	int height;
	int x, y, r;
	char input[30];
	
	fgets(input, sizeof(input), stdin);
	width = atoi(strtok(input, " "));
	height = atoi(strtok(NULL, " "));
	x = atoi(strtok(NULL, " "));
	y = atoi(strtok(NULL, " "));
	r = atoi(strtok(NULL, " "));
	
	if ((x - r) < 0 || (y - r) < 0){
		printf("No\n");
		return 0;
	}else if ((x + r) > width || (y + r) > height){
		printf("No\n");
		return 0;
	}else{
		printf("Yes\n");
	}

	return 0;
}