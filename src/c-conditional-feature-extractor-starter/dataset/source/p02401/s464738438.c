#include<stdio.h>

int main()
{
   int a,b,flag;
   char  c;

   for(;;)
   {
       flag=0;
       scanf("%d %c %d", &a,&c,&b);
       switch(c)
       {
       case '+':
        printf("%d\n",a+b);
        break;
         case '-':
        printf("%d\n",a-b);
        break;
         case '*':
        printf("%d\n",a*b);
        break;
         case '/':
             if(b==0)
              printf("0\n");
                else
        printf("%d\n",a/b);
        break;
         default:
             flag=1;
       }
       if(flag==1)
        break;
   }

}

