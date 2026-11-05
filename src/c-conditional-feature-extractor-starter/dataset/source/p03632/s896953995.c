#include<stdio.h>
#include<string.h>
void mozi_sort(char str[], int length) {
	int tmp[10000] = {};
	int memo = 0;
	for (int i = 0; i < length; i++) {
		tmp[(int)str[i]]++;
	}
	for (int i = 0; i < 256; i++) {
		while (tmp[i] > 0) {
			str[memo] = (char)i;
			memo++;
			tmp[i]--;
		}
	}
}
//大小比較(小)
long long int small(long long int a, long long int b) {
	if (a >= b) {
		return b;
	}
	else {
		return a;
	}
}
int main() {
	long long int a, b, c, d, n, m, num[2000][2] = {}, result = 0;
	char str[200005];
	scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
	if (b <= c || d <= a) { printf("0"); }
	else if (c <= a && b <= d) {
		printf("%lld", b - a);
	}
	else if (a <= c && d <= b) {
		printf("%lld", d - c);
	}
	else if(c<=b){
		printf("%lld", b-c);
	}
	else {
		
	}
			
}
