#include<stdio.h>
#include<stdlib.h>

int main()
{
  char str[10],x[5],y[5];
  int a,b,i=0,j=0;
  
    fgets(str,sizeof(str),stdin);
    
    for(;;){
      if(str[i]==' '){
	break;
      }
      x[i]=str[i];
      i++;
    }
    
    for(;;){
      if(str[i]=='\0'){
	break;
      }
      y[j]=str[i];
      i++;
      j++;
    }

    a=atoi(x);
    b=atoi(y);

    if(a<-1000 || 1000<b){
      printf("Error!!\n");
    }else{
      if(a<b){
	printf("a < b\n");
      }else if(a>b){
	printf("a > b\n");
      }else{
	printf("a == b\n");
      }
    }
    return 0;
}