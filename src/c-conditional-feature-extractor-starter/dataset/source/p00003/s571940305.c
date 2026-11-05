#include<stdio.h>

int main (){
  long long a[1000],x,b,c,i,j,n;
  scanf("%lld",&n);
  while(n){
   i=1;
   while(i<=3){
    scanf("%lld",&a[i]);
    i++;
   }

   for(i=1;i<3;i++){
     for(j=1; j <= 3-i; j++){
       if(a[j]>a[j+1]){
        x= a[j];
        a[j] = a[j+1];
        a[j+1] = x;
       }

     }

   }
   if(a[1]*a[1]+a[2]*a[2]==a[3]*a[3]){
    printf("YES\n");
   }
   else{
    printf("NO\n");
   }

   n--;
}

return 0;
}