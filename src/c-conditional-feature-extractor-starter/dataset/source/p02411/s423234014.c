#include <stdio.h>
int main(void){
	int n=0,m=0,i=0;
	int t[100],k[100],s[100];

	while(1){
		scanf("%d %d %d",&t[i],&k[i],&s[i]);
		if((t[i] == -1) && (k[i] == -1))
			break;
		i++;
		n++;
	}
	i = 0;
	while(m != n){
		if((t[i]==-1) || (k[i]==-1)){
			printf("F\n");
			goto w;}
		if(t[i]+k[i]<=30){
			printf("F\n");
			goto w;}
		if((30<=t[i]+k[i] && t[i]+k[i]<50) && s[i]<50)
			printf("D\n");
		if((30<=t[i]+k[i] && t[i]+k[i]<50) && s[i]>=50)
			printf("C\n");
		if((50<=t[i]+k[i] && t[i]+k[i]<65))
			printf("C\n");
		if((65<=t[i]+k[i]) && (t[i]+k[i]<80))
			printf("B\n");
		if(80<=t[i]+k[i])
			printf("A\n");
		w:
		i++;
		m++;
	}
	return 0;
}