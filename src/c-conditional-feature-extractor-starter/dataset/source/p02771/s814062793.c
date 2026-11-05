#include<stdio.h>
#include<math.h>
#include <stdlib.h>

int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

main()
{
  int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    if(a==b){
        if(a!=c){
            printf("Yes");
        }
        else{
            printf("No");
        }
    }
    else if(a==c){
        printf("Yes");
    }
    else{
        if(b==c){
            printf("Yes");
        }
        else{
            printf("No");
        }
    }


   // int data[] = {4, 2, 3, 6, 3, 2, 1, 3, 5, 7};
   // int i;

    //when you use sort
    /*qsort(data, 10, sizeof(int), compare_int);
    for (i = 0; i < 10; i++) {
        printf("%3d", data[i]);
    }
    printf("\n");
    */


}
