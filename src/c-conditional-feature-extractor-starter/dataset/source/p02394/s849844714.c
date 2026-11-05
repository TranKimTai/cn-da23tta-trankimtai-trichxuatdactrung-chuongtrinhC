#include <stdio.h>
int main(void);

int main(void){

    /*Wは横、Hは高さ、円の原点(x, y)、rは円の半径*/
    int W, H, x, y, r;
    scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);   
    
    if(x <= (W - r) && y <= (H - r) && x >= (0 + r) && y >= (0 + r)){
        
        printf("Yes\n");

    } else {
        
        printf("No\n");
    
    }

    return 0;

}

