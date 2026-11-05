#include<stdio.h>
int main(void){
	int m , r, f,g,h;
	while(1){
		scanf("%d %d %d",&m,&f,&r);
		g = m + r + f;
		if(g == -3) break;
		h = m + f;
		if(m == -1 || f == -1) puts("F");
		else if( h >= 80) puts("A");
		else if(h >= 65) puts("B");
		else if(h >= 50) puts("C");
		else if(h >= 35){
			if(r >= 50) puts("C");
			else puts("D");
		}
		else puts("F");
	}
	return 0;
}