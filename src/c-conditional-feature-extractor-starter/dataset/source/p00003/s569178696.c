main(a,b,c,d){
	d=500;
	for(scanf("%*d");~scanf("%d%d%d",&a,&b,&c)&&d--;puts((a+b-c&&c+b-a&&a+c-b)?"NO":"YES"))a*=a,b*=b,c*=c;
	return 0;
}