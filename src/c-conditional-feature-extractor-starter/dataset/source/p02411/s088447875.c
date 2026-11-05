//
//  main.c
//  ITP1_7_A
//
//  Created by k16031kk on 2018/05/25.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int m,f,r;
    scanf("%d %d %d", &m, &f, &r);
    
    //while(m!=-1 && f!=-1 && r!=-1) {
    while(1){
        int sum=0;
        sum=m+f;
        if(m == -1 && f == -1 && r == -1) break;
        if(sum>=80) {
            printf("A\n");
        } else if(sum>=65 && sum<80) {
            printf("B\n");
        } else if(sum>=50 && sum<65) {
            printf("C\n");
        } else if(sum>=30 && sum<50) {
            if(r>=50) {
                printf("C\n");
            }
            printf("D\n");
        } else if(sum<30) {
            printf("F\n");
        }
        scanf("%d %d %d", &m, &f, &r);
    }
    
    return 0;
}


