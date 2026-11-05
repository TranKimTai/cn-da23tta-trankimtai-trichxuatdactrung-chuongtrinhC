#include <stdio.h>
#include <math.h>

int main(void){
  int i,j,k,n,tmp;
  int l[3];

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d %d %d",&l[0],&l[1],&l[2]);
    for(j=0;j<3;j++){
      for(k=0;k<2;k++){
	if(l[k]<l[k+1]){
	  tmp=l[k];
	  l[k]=l[k+1];
	  l[k+1]=tmp;
	}
      }
    }
    if(pow(l[0],2)==pow(l[1],2)+pow(l[2],2)){
      printf("YES\n");
    }else{
      printf("NO\n");
    }
  }  

  return 0;
}