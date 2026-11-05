#include<stdio.h>
int main(){
  int a[4];
  int n;
  scanf("%d",&n);
  a[0] = (n-n%1000)/1000;
  a[1] = (n-a[0]*1000-n%100)/100;
  a[2] = (n-a[0]*1000-a[1]*100)/10;
  a[3] = n%10;
  int m = a[0]*10+a[1];
  int l = a[2]*10+a[3];
  if(l>0 && l<=12 && m>0 && m <=12){
    printf("AMBIGUOUS");
  }else if(m <=12 && (l >12 || l==0) && m!= 0){
    printf("MMYY");
  }else if(l <=12 && (m >12 || m ==0) && l!= 0){
    printf("YYMM");
  }else{
    printf("NA");
  }
  return 0;
}