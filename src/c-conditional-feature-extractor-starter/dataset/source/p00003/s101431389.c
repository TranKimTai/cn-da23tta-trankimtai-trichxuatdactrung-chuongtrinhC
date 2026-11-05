#include <stdio.h>

int main(void)
{
	int N;
	int array[3];
	int i;
	int j;
	int k;
	int swap;
	
	scanf("%d", &N);
	for (i = 0; i < N; i++){
		scanf("%d %d %d", &array[0], &array[1], &array[2]);
		for (j = 0; j < 2; j++){
			for (k = 0; k < 2; k++){
				if (array[k] > array[k + 1]){
					swap = array[k];
					array[k] = array[k + 1];
					array[k + 1] = swap;
				}
			}
		}
		if ((array[0] * array[0]) + (array[1] * array[1]) == array[2] * array[2]){
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	return 0;
}