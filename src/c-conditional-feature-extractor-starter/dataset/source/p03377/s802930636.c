    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include <ctype.h>
    #include <math.h>

    int main() {

        int a,b,x;
        
        scanf("%d %d %d",&a,&b,&x);
        
        if(a>x || a + b<x){
            printf("NO");
        }else{
            printf("YES");
        }
        
        
        return 0;

    }
