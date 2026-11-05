int main(){
    int a,b,ans[100],n=0;
    char c;
    while(1){
        scanf("%d %c %d",&a,&c,&b);
        if(c=='?'){
            break;
        }else{
            switch(c){
                case '+':
                    ans[n]=a+b;
                    break;
                case '-':
                    ans[n]=a-b;
                    break;
                case '*':
                    ans[n]=a*b;
                    break;
                case '/':
                    ans[n]=a/b;
                    break;
                default:
                    break;
            }
            n++;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d\n",ans[i]);
    }
}

