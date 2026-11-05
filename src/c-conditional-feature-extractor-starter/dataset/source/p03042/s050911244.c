#include <stdio.h>

int main(){
    char YM[4];
    int first,last;
    int first1,first2;
    int last1,last2;
    scanf("%s",&YM);
    first1 = ( YM[0] - '0' ) * 10;
    first2 = ( YM[1] - '0' );
    last1 = ( YM[2] - '0' ) * 10;
    last2 = ( YM[3] - '0' );
    first = first1 + first2;
    last = last1 + last2;
    if( ((first >= 1) && (first <= 12)) && ((last >= 0) && (last <= 99)) && ((first >= 0) && (first <= 99)) && ((last >= 1) && (last <= 12))){
        printf("AMBIGUOUS\n");
    }else if( ((first >= 1) && (first <= 12)) && ((last >= 0) && (last <= 99)) ){
        printf("MMYY\n");
    }else if( ((first >= 0) && (first <= 99)) && ((last >= 1) && (last <= 12)) ){
        printf("YYMM\n");
    }else{
        printf("NA\n");
    }
    //printf("%d %d",first,last);
    return 0;
}