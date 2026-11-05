#include <stdio.h>

main(){
  int a, b, c, temp, n;
  int a_lng, b_lng;
  scanf("%d", &n);
  if(n>1000){
    printf("error\n");
    return 0;
  }
  while(n>0){
    scanf("%d %d %d", &a, &b, &c);
    if((a<1&&a>1000) || (b<1&&b>1000) || (c<1&&c>1000)){
      printf("error\n");
      return 0;
    }
    if(c>b){
      temp=b;
      b=c;
      c=temp;
    }
    if(b>a){
      temp=a;
      a=b;
      b=temp;
    }
    if(b*b+c*c==a*a) printf("YES\n");
    else printf("NO\n");
    n--;
    return 0;
  }
}