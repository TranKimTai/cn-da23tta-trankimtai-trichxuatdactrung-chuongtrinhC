#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define LINE_BUF_SIZE 256

int main(){

    int i,j,k;
    int A,B,X,D;
    char line[LINE_BUF_SIZE];

    fgets(line,sizeof(line),stdin);
    sscanf(line,"%d %d %d", &A,&B,&X);

    if(X >= A){
        if(A+B>=X){
            printf("YES");
            return 0;
        }
        else{
            printf("NO");
            return 0;
        }
    }

    else printf("NO");

    return 0;

}