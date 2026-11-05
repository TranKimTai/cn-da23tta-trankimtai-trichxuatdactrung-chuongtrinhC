#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ll long long 
int cmp(const void*a,const void*b){return *(int*)a-*(int*)b;}
int main(){
    int a[3];
    scanf("%d%d%d",&a[0],&a[1],&a[2]);
    qsort(a,3,sizeof(int),cmp);
    if(a[0]==a[1]){
        if(a[1]!=a[2]){
            puts("Yes");
            return 0;
        }
    }
    else if(a[0]==a[2]){
        if(a[1]!=a[2]){
            puts("Yes");
            return 0;    
        }
    }
    else if(a[1]==a[2]){
        if(a[0]!=a[1]){
            puts("Yes");
            return 0;
        }
    }
    puts("No");
    return 0;
}