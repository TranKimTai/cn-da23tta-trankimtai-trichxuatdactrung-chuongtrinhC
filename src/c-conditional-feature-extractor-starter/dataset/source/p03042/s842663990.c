main(a,b){
  scanf("%2d%d",&a,&b);
  a=(a+99)%100/12;
  b=(b+99)%100/12;
  puts(!a?!b?"AMBIGUOUS":"MMYY":!b?"YYMM":"NA");
}