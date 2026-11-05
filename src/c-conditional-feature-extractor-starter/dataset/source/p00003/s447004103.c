
 
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    int a[1000],b[1000],c[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d%d",&a[i],&b[i],&c[i]);
    }
    for(i=0;i<n;i++){
        if((c[i]*c[i])==(a[i]*a[i]+b[i]*b[i])||(a[i]*a[i])==(b[i]*b[i]+c[i]*c[i])||(b[i]*b[i])==(a[i]*a[i]+c[i]*c[i])){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}
 