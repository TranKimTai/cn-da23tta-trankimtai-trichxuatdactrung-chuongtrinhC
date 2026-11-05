#include <stdio.h>

void judge_righttriangle(int a, int b, int c);

int main(void)
{
  int n, a, b, c;

  scanf("%d",&n);
  while(n-- > 0)
  {
    scanf("%d %d %d", &a, &b, &c);
	judge_righttriangle(a,b,c);
  }

  return 0; 		
}

void judge_righttriangle(int a, int b, int c)
{
  int tmp;

  //sort as a<b<c
  if(b > c){tmp=b; b=c; c=tmp;}
  if(a > b){tmp=a; a=b; b=tmp;}
  if(b > c){tmp=b; b=c; c=tmp;}

  if(c*c==a*a+b*b) printf("YES\n");
  else             printf("NO\n");
}