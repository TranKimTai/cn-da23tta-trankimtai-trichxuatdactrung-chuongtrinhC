int main(void){
  int a,b;
  scanf("%d %d",&a,&b);
  
  if(a>=10 || b>=10){
      printf("%d\n",-1);
  }else{
      printf("%d\n",a*b);
  }
  
  return 0;
}