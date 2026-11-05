#include <stdio.h>

main() {
	int n, j, i; scanf("%d", &n);
	for(int i=1; i<=9; ++i) {
      for(j=1; j<=9 && i*j!=n; ++j);
      if(i*j==n) printf("YES"); break;
    }
  	if(i==10) printf("NO");
    
}
