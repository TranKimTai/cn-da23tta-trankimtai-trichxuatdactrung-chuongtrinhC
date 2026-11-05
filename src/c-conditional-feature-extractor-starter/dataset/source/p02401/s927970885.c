int main(){
int a,b;
scanf("%d %d", &a, &b);
if (scanf("%d ? %d", &a, &b)){
return 0;
}
else if (scanf("%d+%d", &a, &b)){
	printf("%d", a+b);
}
else if (scanf("%d-%d", &a, &b)){
	printf("%d", a-b);
}
else if (scanf("%d*%d", &a, &b)){
	printf("%d", a*b);
}
else if(scanf("%d/%d", &a, &b)){
	printf("%d", a/b);
}; 
return 0;
}