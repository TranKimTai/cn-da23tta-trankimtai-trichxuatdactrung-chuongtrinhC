#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define LOOP(i,s,e) for(int i=s;i<e;i++)
#define MAX(a,b) (a>b)?a:b
#define MIN(a,b) (a>b)?b:a
#define MAX3(a,b,c) (a>b)?MAX(a,c):MAX(b,c)
#define MIN3(a,b,c) (a>b)?MIN(b,c):MIN(a,c)

int intcmp(const int *a,const int *b) {return (*a - *b);}

int intrcmp(const int *a,const int *b) {return (*b - *a);}

int dblcmp(const double *a,const double *b) { return (*a < *b) ? -1 : (*a == *b) ? 0 : 1; }

int stcmp(const char *a[],const char *b[]) { return(strcmp(*a, *b)); }

int main() {
	int a=0,b=0;
	scanf("%d %d",&a,&b);	
	if((a>9)||(b>9)||(a<1)||(b<1)){
		printf("-1\n");
	}
	else{
		printf("%d\n",(a*b));
	}
	return 0;
}