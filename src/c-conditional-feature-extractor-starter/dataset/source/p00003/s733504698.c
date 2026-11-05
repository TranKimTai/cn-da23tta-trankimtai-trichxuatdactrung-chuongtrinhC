#include<stdio.h>
int main(){
	int a,i=0,u=0,e=0,o,yama[1001]={},ka,ki,ku;
	scanf("%d",&a);
	for(i=0;i<a;i++){
		ka=0;
		scanf("%d %d %d",&u,&e,&o);
		if(ka<u){ka=u;ki=e;ku=o;}
		if(ka<e){ka=e;ki=o;ku=u;}
		if(ka<o){ka=o;ki=e;ku=u;}
		if(ka*ka==ki*ki+ku*ku)yama[i]=1;
	}
	for(i=0;i<a;i++){
				if(yama[i]==1){printf("Yes\n");}else{printf("No\n");
				}
	}
	return 0;
	
	
}