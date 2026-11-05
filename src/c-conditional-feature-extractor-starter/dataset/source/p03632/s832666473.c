 #include<stdio.h>
 int main(void)
 {
     int A,B,C,D;

     scanf("%d%d%d%d",&A,&B,&C,&D);

     if(B>C){
       if(A>D) { printf("0\n"); return 0; }
       if((A>=C)&&(B>=D)){
         printf("%d\n",D-A); return 0;
       }
       if((A>=C)&&(B<=D)){
         printf("%d\n",B-A); return 0;
       }
       if((A<=C)&&(B<=D)){
         printf("%d\n",B-C); return 0;
       }
       if((A<=C)&&(B>=D)){
         printf("%d\n",D-C); return 0;
       }
     }

     else { printf("0\n"); return 0; }

 }
