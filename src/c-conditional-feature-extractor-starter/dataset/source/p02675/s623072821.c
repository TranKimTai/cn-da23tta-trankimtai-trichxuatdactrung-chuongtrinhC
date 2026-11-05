#include<stdio.h>

int main()
{
  
int N,n;
scanf("%d",&N);

n = N % 10;
if (n == (2||4||5||7||9))
{
  printf("hon");
}else if (n == (0||1||6||8))
{
  printf("pon");
}else if(n == 3)
{
  printf("bon");
}

  return 0;
}