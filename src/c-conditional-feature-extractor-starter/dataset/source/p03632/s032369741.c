        #include <stdio.h>
        #include <stdlib.h>
         
        int main() {
         
        	int num_a, num_b, num_c, num_d;
        	int max_s,min_e;
        	int res = 0;
         
        	scanf("%d %d %d %d", &num_a, &num_b, &num_c, &num_d);
         
        	max_s = (num_a > num_c) ? num_a : num_c;
         
        	min_e = (num_b < num_d) ? num_b : num_d;
         
        	res = min_e - max_s;
         
        	if (res < 0) {
        		printf("%d", 0);
        	} else {
        		printf("%d", res);
        	}
         
        	return 0;
         
        }