#include<stdio.h>
int main(void){
int ch1[110]={0},ch2[110]={0},a,b,c,d, ans=0;
scanf("%d%d%d%d", &a,&b,&c,&d);
for(int i=a;i<b;i++){
    ch1[i]=i;
}
for(int j=c;j<d;j++){
    ch2[j]=j;
}
for(int k=0;k<100;k++){
    if(ch1[k]==ch2[k]&&ch1[k]!=0) ans++;
}
printf("%d\n",ans);
return 0;
}