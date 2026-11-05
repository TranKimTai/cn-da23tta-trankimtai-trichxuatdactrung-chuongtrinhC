#include<stdio.h>
int main(){
  int a[3];
  int count=0;
  for(int i=0;i<3;i++)
    scanf("%d",&a[i]);
  for(int i=0;i<3;i++){
    for(int j=i+1;j<3;j++){
      if(a[i]==a[j])
        count++;
    }
  }
  if(count==2)
    printf("Yes");
  else
    printf("No");
}