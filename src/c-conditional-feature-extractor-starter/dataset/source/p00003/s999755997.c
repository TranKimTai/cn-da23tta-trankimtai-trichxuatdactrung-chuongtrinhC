#include<stdio.h>
int main(){
	int n=0;
	scanf("%d",&n);
	
	int tmp,data[3000]={0};
	for(tmp=0;tmp<n;tmp=tmp+3){
		while(scanf("%d %d %d",&data[tmp],&data[tmp+1],&data[tmp+2])!=EOF){
			//sort
			int i,j,longer;
			for(i=0;i<3;i++){
				for(j=i+1;j<3;j++){
					if(data[i]<data[j]){
						longer=data[j];
						data[j]=data[i];
						data[i]=longer;
					}
				}
			}
			//judge
			if(data[tmp]*data[tmp]==data[tmp+1]*data[tmp+1]+data[tmp+2]*data[tmp+2]){
				printf("YES");
			}else{
				printf("NO");
			}
		}
	}
	return 0;
}