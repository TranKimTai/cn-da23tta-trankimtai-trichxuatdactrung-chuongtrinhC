#include <stdio.h>

const char* answer[4] = {
	"NA", "YYMM", "MMYY", "AMBIGUOUS"
};

int main(void) {
	char S[8];
	int hoge, fuga;
	int yosinagasayuri = 0;
	if (scanf("%s", S) != 1) return 1;
	hoge = (S[0] - '0') * 10 + (S[1] - '0');
	fuga = (S[2] - '0') * 10 + (S[3] - '0');
	if (1 <= fuga && fuga <= 12) yosinagasayuri += 1;
	if (1 <= hoge && hoge <= 12) yosinagasayuri += 2;
	puts(answer[yosinagasayuri]);
;
	return 0;
}
