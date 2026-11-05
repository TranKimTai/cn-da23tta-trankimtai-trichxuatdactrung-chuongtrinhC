#include <stdio.h>

int main(){
    int s;
    int m[4];

    scanf("%d",&s);
    for(int i=3;i>=0;i--){
        m[i]=s%10;
        s=s/10;
    }
    if(m[0]*10+m[1]<=12&&m[2]*10+m[3]<=12&&m[0]*10+m[1]>0&&m[2]*10+m[3]>0){
        printf("AMBIGIOUS\n");
    }else if(m[0]*10+m[1]<=12&&m[0]*10+m[1]>0){
        printf("MMYY\n");
    }else if(m[2]*10+m[3]<=12&&m[2]*10+m[3]>0){
        printf("YYMM\n");
    }else{
        printf("NA");
    }
    return 0;
}