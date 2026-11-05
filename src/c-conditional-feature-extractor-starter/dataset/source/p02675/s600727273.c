#include <stdio.h>
#include<string.h>

int main()
{
int i;//sei
int t;
char a[101];//mozi

scanf("%d",&i);
scanf("%s",a);

if(t>0)
{
if(strlen(a)<=t)
{
    printf("%s",a);
}
else
{
    for(t=0;t<i;t++)
 {
    printf("%c",a[t]);
  }
  printf("...\n");
}
}
return 0;
}
