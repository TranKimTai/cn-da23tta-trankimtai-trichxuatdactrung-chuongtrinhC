#include<stdio.h>

int main(){
	int a,b,c,aa[100],n,i,temp;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d %d %d",&a,&b,&c);
		if(a > c){
            temp = c;
            c = a;
            a = temp;
        }
        if(b > c){
            temp = c;
            c = b;
            b = temp;
        }
		
		if((c*c)==(a*a)+(b*b)) aa[i]=1;
		else aa[i]=0;
		
	}
	
	for(i=0;i<n;i++){
		if(aa[i]==0){
			printf("NO\n");
		}else if (aa[i]==1) {
			printf("YES\n");
		}
	}
	
	
	return 0;
}