#include"stdio.h"
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int f[101];
    for(int i=0;i<101;i++)
        f[i]=0;
    for(int i=a;i<b;i++)
        f[i]++;
    int cnt=0;
    for(int i=c;i<d;i++){
        f[i]++;
        if(f[i]==2)
            cnt++;
    }
    printf("%d\n",cnt);
}
