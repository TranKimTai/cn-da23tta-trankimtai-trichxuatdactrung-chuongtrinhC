#include<stdio.h>
int main(){
        int n,i,j,x=0,k;
        scanf("%d",&n);
        for(i=0;i<n;i++){
                int a[5]={0};
                scanf("%d %d %d",&a[0],&a[1],&a[2]);
                for(k=0;k<10;k++){
                for(j=0;j<3;j++){
                        if(a[j]<a[j+1]){
                                x=a[j];
                                a[j]=a[j+1];
                                a[j+1]=x;
                                x=0;
                        }
                }
                }
                if(a[1]*a[1]+a[2]*a[2]==a[0]*a[0])printf("YES\n");
                else printf("NO\n");
        }
        return 0;
}