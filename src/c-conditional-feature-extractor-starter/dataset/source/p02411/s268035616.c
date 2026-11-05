
#include <stdio.h>

int main(int argc, const char * argv[])
{
    int m,f,r,sum=0;
    char s;
    
    while(1){
        scanf("%d %d %d",&m,&f,&r);
        if(m==-1 && f==-1 && r==-1){
            break;
        }
        
        if(sum>=80){
            s = 'A';
        }else if(65<=sum && sum<80){
            s = 'B';
        }else if(50<=sum && sum<65){
            s = 'C';
        }else if (30<=sum && sum<50){
            if(r>=50){
                s = 'C';
            }else{
                s = 'D';
            }
        }else if (sum<30){
            s='F';
        }else if(m==-1 || f==-1){
            s='F';
        }
        printf("%c\n",s);
    }
    return 0;
}