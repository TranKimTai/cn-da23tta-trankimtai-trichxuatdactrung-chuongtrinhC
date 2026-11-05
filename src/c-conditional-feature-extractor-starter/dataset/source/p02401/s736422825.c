#include<stdio.h>

int main(){
int a,b ;
char op ;
int rst ;

scanf("%d %c %d",&a,&op,&b) ;


    switch(op){
    case '+' :
     rst = a+b ;
     printf("%d\n",rst) ;
     break ;


    case '-' :
     rst = a-b ;
     printf("%d\n",rst) ;
     break ;
   

    case '*' :
     rst = a*b ;
     printf("%d\n",rst) ;
     break ;


    case '/' :
     
     rst = a/b ;
     printf("%d\n",rst) ;
     break ;


    case '?' :
     break ;
}

return 0 ;

}
 