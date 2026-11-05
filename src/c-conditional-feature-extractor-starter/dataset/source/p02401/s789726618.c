#include <stdio.h>
#include <stdlib.h> // ?????????????????´?????¶?????¨malloc???free????????°

int main()
{
    int* p;
	int n,min = 0,max = 0;
	int sum = 0;
	int i;
    scanf("%d", &n);
    
    p = (int*)malloc(sizeof(int)*n);

    for(i = 0; i < n; ++i) {
		if(p[i] > max){
			max=p[i];
		}
		if(p[i] < min){
			min=p[i];
		}
		sum += p[i];
    }
	    printf("%d %d %d\n",min,max,sum);
    
    free(p); 
    return 0;
}