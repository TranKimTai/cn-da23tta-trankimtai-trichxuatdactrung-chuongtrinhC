#include <stdio.h>
#include <stdlib.h>

int main(void){
    char s[4];

    scanf("%s",s);
    if(s[0] == '0'){
        if(s[1] == '0'){
            printf("NA");
        }else{
            if(s[2] == '0'){
                if(s[3] != '0') printf("AMBIGUOUS");
                else printf("NA");
            }else if(s[2] == '1'){
                if((int)s[3] <= 50){
                    printf("AMBIGUOUS");
                }else{
                    printf("MMYY");
                }
            }else{
                printf("MMYY");
            }
        }    
    }else if(s[0] == '1'){
        if((int)(s[1]) <= 2){
            if(s[2] == '0'){
                if(s[3] != '0') printf("AMBIGUOUS");
                else printf("NA");
            }else if(s[2] == '1' && (int)(s[3]) <= 2){
                printf("AMBIGUOUS");
            }else{
                printf("MMYY");
            }
        }else{
            if(s[2] == '0'){
                if(s[3] != '0') printf("YYMM");
                else printf("NA");
            }else if(s[2] == '1' && (int)(s[3]) <= 2){
                printf("YYMM");
            }else{
                printf("NA");
            }
        }
    }else{
        if(s[2] == '0'){
            if(s[3] != '0') printf("YYMM");
            else printf("NA");
        }else if(s[2] == '1' && (int)(s[3]) <= 2){
            printf("YYMM");
        }else{
            printf("NA");
        }    
    }
    
}