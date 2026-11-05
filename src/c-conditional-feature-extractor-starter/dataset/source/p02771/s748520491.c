#include <stdio.h>
 int main(void){
int x,y,z;

scanf("%d%d%d", &x,&y,&z);

 int p = 0;
 if (x==y&& y!= z)p=1;
 if (y== z&& z!= x)p = 1;
 if (z==x&& x!= y)p = 1;

 if (p) {
 puts("Yes");
 } else {
 puts("No");
 }
 return 0;
}