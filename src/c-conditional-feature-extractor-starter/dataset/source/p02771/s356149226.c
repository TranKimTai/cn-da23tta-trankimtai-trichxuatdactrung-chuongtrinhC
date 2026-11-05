#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define max(x,y)(x>y?x:y)
#define min(x,y)(x>y?y:x)
typedef long long int ll;
typedef unsigned long long int ull;;
int asc_cmp(const void* X,const void* Y){int x=*(int*)X,y=*(int*)Y;if(x<y)return -1;else if(x==y)return 0;else return 1;}
ll desc_cmp(const void* X,const void* Y){ll x=*(ll*)X,y=*(int*)Y;if(x<y)return 1;else if(x==y)return 0;else return -1;}

int main(){
    int a[3];scanf("%d %d %d",&a[0],&a[1],&a[2]);
    qsort(a,3,sizeof(int),asc_cmp);

    int cnt=0;
    for(int i=0;i<2;i++){
        if(a[i]==a[i+1])cnt++;
    }
    if(cnt==1)printf("Yes\n");
    else printf("No\n");

}