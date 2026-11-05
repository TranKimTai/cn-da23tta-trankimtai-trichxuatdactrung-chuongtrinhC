#include <stdio.h>

int main()
{
    int n;
    do{
        scanf("%d", &n);

    }while(n<0 || n>1000);

    int n1 = (n + 1)%10;//9
    int n2 = (n + 2)%10;//8
    int n3 = (n + 3)%10;//7
    int n4 = (n + 4)%10;//6
    int n5 = (n + 5)%10;//5
    int n6 = (n + 6)%10;//4
    int n7 = (n + 7)%10;//3
    int n8 = (n + 8)%10;//2
    int n9 = (n + 9)%10;//1
    int n0 = n;    //0

    if(n8==0 || n6==0 || n5==0 || n3==0 || n1==0) {
        printf("%s\n", "hon");
    }

    if(n0==0 || n9==0 || n4==0 || n2==0) {
        printf("%s\n", "pon");
    }

    if(n7==0) {
        printf("%s\n", "bon");
    }






    return 0;
}
