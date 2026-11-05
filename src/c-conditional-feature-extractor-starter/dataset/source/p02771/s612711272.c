#include <stdio.h>

int main ()
{
    int N[3];
    
    //A,B,Cの値を標準入力から入力
    printf("A B C (1~9):");
        scanf("%d%d%d",&N[0],&N[1],&N[2]);
    
    int flag = 1;
    if ( N[0] != N[1] && N[1] != N[2] && N[2] != N[0] ){
        flag = 0;
    }
    if ( N[0] == N[1] && N[1] == N[2] ){
        flag = 0;
    }
        
    if ( flag == 0 ) puts("No");
    else puts("Yes");
    
    return 0;
}