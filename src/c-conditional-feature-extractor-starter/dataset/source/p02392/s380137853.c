/*３つの整数a, b, cを読み込み、
 それらが a < b < cの条件を満たすならば"Yes"を、
 満たさないならば"No"を出力するプログラム*/

#include <stdio.h>

int main(){
    
    int a,b,c;
    
    do{
        scanf("%d %d %d",&a,&b,&c);
    }while(a<0 || a>100 || b<0 || b>100 || c<0 || c>100); /*0 ≤ a, b, c ≤ 100を満たすまで繰り返される*/
    
    if(a<b && b<c){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    
    return 0;
}
