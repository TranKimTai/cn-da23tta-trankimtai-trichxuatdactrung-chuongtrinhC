#include<stdio.h>

int main()
{
     int N;
    scanf("%d",&N);
    
    if(N>=0 && N<=99){ 
    printf("pon");}
    
    else if(N>=100 && N<=199){ 
    printf("pon\n");}
    
    else if(N>=200 && N<=299){ 
    printf("hon\n");}
    
    else if(N>=400 && N<=499){ 
    printf("hon\n");}
    
    else if(N>=500 && N<=599){ 
    printf("hon\n");}
    
    else if(N>=600 && N<=699){ 
    printf("pon\n");}
    
    else if(N>=700 && N<=799){ 
    printf("hon\n");}
    
    else if(N>=800 && N<=899){ 
    printf("pon\n");}
    
    else if(N>=900 && N<=999){ 
    printf("hon\n");}
    
    else if(N>=300 && N<=399){ 
    printf("bon\n");}
    
    return 0;
}