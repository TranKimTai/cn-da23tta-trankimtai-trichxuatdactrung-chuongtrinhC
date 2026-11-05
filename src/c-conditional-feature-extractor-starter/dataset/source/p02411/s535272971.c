#include <stdio.h>
int main(void){
int m, f, r;
int s = m + f;

while(scanf("%d %d %d", &m, &f, &r)!=EOF){
  
  if(m == -1 && f == -1 && r == -1){ 
      break;
  }
  
  if (s>=80){
      printf("A");
  }
  else if(65<=s&&s<80){
      printf("B");
  }
  else if(50<=s&&s<65){
      printf("C");
  }    
  else if(r<=50){
      printf("C");   
  }
  else if(30<=s&&s<50){
      printf("D");
  }
  else if(s<30){
      printf("F");
  }
  printf("\n");
}
  return(0);
}
