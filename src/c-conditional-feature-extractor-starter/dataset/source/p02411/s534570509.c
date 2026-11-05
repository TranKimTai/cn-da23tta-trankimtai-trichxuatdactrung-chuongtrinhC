#include <stdio.h>
char Grading(int m, int f, int r){
	char g;
	
	if(m>=0 && f>=0 && 80<=m+f) g='A';
	if(m>=0 && f>=0 && 65<=m+f && m+f<80) g='B';
	if(m>=0 && f>=0 && 50<=m+f && m+f<65) g='C';
	if(m>=0 && f>=0 && 30<=m+f && m+f<50 && r<50) g='D';
	if(m>=0 && f>=0 && 30<=m+f && m+f<50 && 50<=r) g='C';
	if(m>=0 && f>=0 && m+f<30) g='F';
	if(m==-1 || f==-1) g='F';
	return g;
}
int main(void){
	int m,f,r;
	char grade;
	while(1){
		scanf("%d %d %d",&m,&f,&r);
		if(m==-1 && f==-1 && r==-1) break;
		grade=Grading(m,f,r);
		printf("%c", grade);
		putchar('\n');
	}
	return 0;
}