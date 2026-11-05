#include<stdio.h>

int main(void){
    int S[4];

    int i=0;
    for(;i<4;i++){
        scanf("%d",&S[i]);
    }

    int ans[2]={0,0};
    int b[2];

    b[0]=S[0]*10+S[1];
    b[1]=S[2]*10+S[3];

    for(i=0;i++;i<=1){
        if(b[i]<=12&&b[i]>=1){
            ans[i]=1;
        }
    }

    if(b[0]==0||b[1]==0){
        printf("NA\n");
    }else if(b[0]==0||b[1]==1){
        printf("YYMM");
    }else if(b[0]==1||b[1]==0){
        printf("MMYY");
    }else if(b[0]==1||b[1]==1){
        printf("AMBIGUOUS\n");
    }

    return 0;
}