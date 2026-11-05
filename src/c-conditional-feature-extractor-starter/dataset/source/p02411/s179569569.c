#include <stdio.h>
int main(void){
	int n=0,m=0,i=0;
	int t[100],k[100],s[100];

	while((t[i-1] != -1) && (k[i-1] != -1)){
		scanf("%d %d %d",&t[i],&k[i],&s[i]);
		i++;
		n++;
	}
	i = 0;
	while(m != n-1){
		if(t[i]==-1 || k[i]==-1 || t[i]+k[i]<30)
			printf("F\n");
		if((30<=t[i]+k[i] && t[i]+k[i]<50) && s[i]<50)
			printf("D\n");
		if(50<=t[i]+k[i] && t[i]+k[i]<65 || (30<=t[i]+k[i] && t[i]+k[i]<50) && s[i]>=50)
			printf("C\n");
		if(65<=t[i]+k[i] && t[i]+k[i]<80)
			printf("B\n");
		if(80<=t[i]+k[i])
			printf("A\n");
		i++;
		m++;
	}
	return 0;
}