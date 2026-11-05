#include<stdio.h>

int main()
{
    int A,B;
    scanf("%d %d",&A,&B);
    if(A>=1 && A<=9){
   
if(B>=1 && B<=9){

printf("%d×%d=%d",A,B,A*B);

}
else{
printf("-1");
}
}
    return 0;
}