#include <stdio.h>
int cmp( const void *p, const void *q ) {
    return *(int*)p - *(int*)q;
}
int main(void) {
	int l[3];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		scanf("%d %d %d",&l[0],&l[1],&l[2]);
		qsort(l,3,sizeof(int),cmp);
		if(!(l[0]*l[0]+l[1]*l[1]-l[2]*l[2])) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}