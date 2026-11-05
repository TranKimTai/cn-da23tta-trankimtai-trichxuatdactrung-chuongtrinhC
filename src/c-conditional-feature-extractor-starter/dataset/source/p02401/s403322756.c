#include<stdio.h>

int main(){
int a,b ;
char op ;
int rst ;

scanf("%d %c %d",&a,&op,&b) ;

if( op != ( '+' || '-'|| '*' || '/'|| '?' )){
printf("error\n") ;
}

else{

    switch(op){
    case '+' :
     rst = a+b ;
     printf("%d",rst) ;
     break ;


    case '-' :
     rst = a-b ;
     printf("%d",rst) ;
     break ;
   

    case '*' :
     rst = a*b ;
     printf("%d",rst) ;
     break ;


    case '/' :
     if(b != 0){
     rst = a/b ;
     printf("%d",rst) ;
     break ;}

     else{
     printf("error\n") ;
     }

    case '?' :
     break ;
}
}
return 0 ;

}
 

/* エラーが出ていた原因 :
printfとすべきところをprintにしていた。
if文の条件式の()が閉じられていなかった。
{が閉じる場所を間違えた。
*/ 