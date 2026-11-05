#include<stdio.h>

int main()
{
//変数定義
int A;
int B;
//char S[101];

//入力
scanf("%d", &A);
scanf("%d", &B);
//スペースの入力
//scanf("%d %d",&A, &B);
//文字列の入力
//scanf("%s",S);

//A,Bの判定
if(A<10 && B<10){
 printf("%d\n",A*B);
}else
 printf("-1\n");
}