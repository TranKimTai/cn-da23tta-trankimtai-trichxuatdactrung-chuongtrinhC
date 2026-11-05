#include <stdio.h>
int main(){
    int S[4];
    int a;
    scanf("%d",&a);
    S[0]=a/1000;
    S[1]=(a/100)%10;
    S[2]=(a/10)%10;
    S[3]=a%10;
    if(12<S[0]*10+S[1]){
        if(S[2]*10+S[3]<=12){
            if(S[2]==0 && S[3]==0){printf("NA\n");}
            else{printf("YYMM\n");}}
        else{printf("NA\n");}
    }
    else{if(S[2]*10+S[3]>12){if(S[0]==0 && S[1]==0){printf("NA\n");}
                             else{printf("MMYY\n");}}
        else{if(S[0]==0 && S[1]==0 && S[2]== 0 && S[3]==0){printf("NA\n");}
             else if(S[0]==0 && S[1]==0){printf("YYMM\n");}
             else if(S[2]==0 && S[3]==0){printf("MMYY\n");}
             else{printf("AMBIGUOUS\n");}
             }
    }
    return 0;
}