#include "stdio.h"

int pt[10000][3];
int grade[10000];//A0 B1 C2 D3 F4
int cnt=0;
int i;
int main(void){
	while(1){
		scanf("%d %d %d",&pt[cnt][0],&pt[cnt][1],&pt[cnt][2]);
		if((pt[cnt][0]==-1)&(pt[cnt][1]==-1)&(pt[cnt][2]==-1)) break;
		cnt++;
	}//3人ならcnt3
	
	for(i=0;i<cnt;i++){
		if((pt[i][0]==-1)||(pt[i][0]==-1)) grade[i]=4;
		int goukei=pt[i][0]+pt[i][1];
		if(goukei>=80) grade[i]=0;
		if((goukei>=65)&(goukei<80)) grade[i]=1;
		if((goukei>=50)&(goukei<65)) grade[i]=2;
		if((goukei>=30)&(goukei<50)){
			if(pt[i][3]>=50) grade[i]=2;
			else grade[i]=3;
		}
		if(goukei<30) grade[i]=4;
		printf("%c\n", "ABCDF"[grade[i]]); 
	}
	
	return 0;
}