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

    for(i=0;i++;i<2){
        if(b[i]<=12){
            ans[i]=1;
        }
    }

    switch(ans[0]){
        case(0):
        switch(ans[1]){
            case(0):
            printf("NA\n");
            case(1):
            printf("YYMM\n");
        }
        case(1):
        switch(ans[1]){
            case(0):
            printf("MMYY\n");
            case(1):
            printf("AMBIGUOUS\n");
        }
    }
    return 0;
}