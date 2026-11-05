#include<stdio.h>

int main (void){
	
	int a,i,l,m,n,max1,max2,max3;
	
	scanf("%d",&a);
	
	for(i=0;i<a;i++){
		scanf("%d",&l);
		max1 = l;
		
		scanf("%d",&m);
		if(max1<m){
			max1 = m;
			max2 = l;
		}else{
			max1 = l;
			max2 = m;
		}
		
		scanf("%d",&n);
		if(max1<n){
			max3 = max2;
			max2 = max1;
		    max1 = n;
		}else if(max2>n){
			max3 = n;
		}else if(max2<n<max1){
			max3 = max2;
			max2 = n;
		}
	if((max1)*(max1)==(max2)*(max2)+(max3)*(max3)){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	}
return 0;
}
		