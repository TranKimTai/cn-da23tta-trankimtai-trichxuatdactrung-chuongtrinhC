#include <stdio.h>
#include <math.h>

int main(void) {
	int A, B, H, M;
	if(scanf("%d %d %d %d", &A, &B, &H, &M) == -1){
      return -1;
    }

	double argA, argB, arg;
	double C;
	double rad;

	argA = (double)H * 360 / 12;
	argB = (double)M  * 360 / 60;
	
	if (argA < argB) {
		if (argB - argA > 180) {
			rad = (argB - argA - 180) * M_PI / 180;
			C = sqrt((double)(A * A + B * B) - (2 * (double)A * (double)B * cos(rad)));
		}
        else if(argB - argA == 180){
           C = A + B;
        }
		else {
			rad = (argB - argA) * M_PI / 180;
			C = sqrt((double)(A * A + B * B) - (2 * (double)A * (double)B * cos(rad)));
		}
		
	}
  	else if(argB  == argA){
        C = 0;
    }
	else {
		if (argA - argB >= 180) {
			rad = (argA - argB - 180) * M_PI / 180;
			C = sqrt((double)(A * A + B * B) - (2 * (double)A * (double)B * cos(rad)));
		}
        else if(argB - argA == 180){
          C = A + B;
        }
		else {
			rad = (argA - argB) * M_PI / 180;
			C = sqrt((double)(A * A + B * B) - (2 * (double)A * (double)B * cos(rad)));
		}
	}

	printf("%lf\n", C);
	

	return 0;
}