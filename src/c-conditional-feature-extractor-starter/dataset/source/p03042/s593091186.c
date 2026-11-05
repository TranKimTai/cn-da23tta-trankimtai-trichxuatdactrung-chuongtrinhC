#include <stdio.h>

int main()
{
    int s;
    scanf("%d", &s);
    int a = s/100;
    int b = s%100;
    
    if(a <= 12){
        if(b > 0 && b <= 13 ) printf("AMBIGUOUS\n");
        else printf("MMYY\n");
        return 0;
    }else{
        if(b > 0 && b <= 12){
            printf("YYMM\n");
            return 0;
        } 
    }
    printf("NA\n");
    return 0;
}