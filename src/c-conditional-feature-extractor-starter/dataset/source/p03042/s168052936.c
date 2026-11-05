#include<stdio.h>

int main(){

    int i = 0;
    int ch;

    int x, y;

    int a[4];

    while((ch = getchar()) != EOF){

        switch(ch){

            case '0':
                a[i] = 0;
                break;

            case '1':
                a[i] = 1;
                break;

            case '2':
                a[i] = 2;
                break;

            case '3':
                a[i] = 3;
                break;
            case '4':
                a[i] = 4;
                break;
            case '5':
                a[i] = 5;
                break;
            case '6':
                a[i] = 6;
                break;
            case '7':
                a[i] = 7;
                break;
            case '8':
                a[i] = 8;
                break;
            case '9':
                a[i] = 9;
                break;
        }

        i += 1;
    }

    x = 10 * a[0] + a[1];
    y = 10 * a[2] + a[3];

    if(x==0 || y==0){
        printf("NA");
    }else if(1 <= x && x <= 12 && 1 <= y && y <= 12){
        printf("AMBIGUOUS");
    }else if(1 <= x && x <= 12 && 12 < y){
        printf("MMYY");
    }else{
        printf("YYMM");
    }

    return 0;
}