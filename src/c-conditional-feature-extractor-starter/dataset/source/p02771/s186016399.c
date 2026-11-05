#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

#define rep(i,begin,end) for(int i=begin; i<end; i++)
#define revrep(i,begin,end) for(int i=begin; i>end; i--)
#define lld long long int

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if((a==b && b == c) || (a != b && b != c && c != a)){
        printf("No");
    }else{
        printf("Yes");
    }

    return 0;
}