#include <stdio.h>

int main(void)

{

  int W,H,x,y,r;

  scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);

  if(-100<=x<=100 && -100<=y<=100 && 0<W<=100 && 0<H<=100 && 0<r<=100)

  {

    printf("Yes\n");

  }

  else

  {

    printf("No\n");

  }

  return 0;

}