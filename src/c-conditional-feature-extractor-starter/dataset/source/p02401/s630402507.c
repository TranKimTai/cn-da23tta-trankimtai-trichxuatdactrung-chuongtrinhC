#include<math.h>
int main()
{
  int a,b,i;
  char op;
    i = 0;
  while(1){
  scanf("%d %c %d",&a,&op,&b);

  if(op == '?')
    break;
  else if(op == '+')
    printf("%c\n",op);
  else if(op == '-')
    printf("%c\n",op);
  else if(op == '/')
    printf("%c\n",op);
   else if(op == '*')
    printf("%c\n",op);
}

  printf("%d %c %d\n",a,op,b);
return 0;
}
