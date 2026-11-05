#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>




int main() {
	int c[5],cnt=0, cnt1=0;
	char s[5];
	scanf("%s", s);
	for (int i = 0; i < 5; i++) {
		
		 c[i] = s[i] - '0';
	}
	int a = c[0] * 10 + c[1];
	int b = c[2] * 10 + c[3];
	if (a>0 &&a<= 12)cnt++;
	if (b>0&&b <= 12)cnt1++;
	
	if (cnt1 == 1 && cnt == 1)puts("AMBIGUOUS");
    if (cnt1 == 0 && cnt == 1)puts("MMYY");
	if (cnt1 == 1 && cnt == 0)puts("YYMM");
	if (cnt1 == 0 && cnt == 0)puts("NA");
	return 0;
}