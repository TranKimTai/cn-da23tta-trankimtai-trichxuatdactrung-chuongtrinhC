#include<stdio.h>

int main(){

int g, gc,X;
scanf("%d %d %d", &g, &gc, &X);

while(g <X){

g++;
gc--;
}

if( gc != X || g!=X){
    printf("NO\n");
}
else{printf("YES\n");}
    return 0;
}