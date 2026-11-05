#include <stdio.h>

int main()
{
  char s[6];
  int c1,c2;
  scanf("%s",s+1);
  c1 = (s[1]-'0')*10 + s[2]-'0';
  c2 = (s[3]-'0')*10 + s[4]-'0';
  if(c1<=12&&c1>=1&&c2<=12&&c2>=1)
    printf("AMBIGUOUS\n");
  else if (c1<=12&&c1>=1)
    printf("MMYY\n");
  else if (c2<=12&&c1>=1)
    printf("YYMM\n");
  else
    printf("NA\n");
}