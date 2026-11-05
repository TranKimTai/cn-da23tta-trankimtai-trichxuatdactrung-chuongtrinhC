#include<stdio.h>
int main(){
int j,m,r,f,n,total;
int test[50][3]={{0}};
n=0;
while(1){
  scanf("%d %d %d",&m,&f,&r);
  test[n][0]=m;
  test[n][1]=f;
  test[n][2]=r;
++n;
if(m==-1&&f==-1&&r==-1) break;
}
for(j=0;j<n-1;j++){
  total=test[j][0]+test[j][1];
  if(test[j][0]==-1 || test[j][1]==-1){
    printf("%c\n",'F');
  }else if(total>=80 && test[j][2]==-1){
    printf("%c\n",'A');
  }else if(65<=total && total<80){
    printf("%c\n",'B');
  }else if(50<=total && total<65){
    printf("%c\n",'C');
  }else if(total<50 && total>=30){
    if(r>=50){
       printf("%c\n",'C');
}else {
  printf("%c\n",'D');
}
  }else{
     printf("%c\n",'F');
  }
}
  return 0;
}
