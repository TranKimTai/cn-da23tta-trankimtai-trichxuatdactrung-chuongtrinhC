#include <stdio.h>

int main(void) {

	char s[4];
	char head[2], tail[2];
	int  mmyy = 0;
	scanf("%s", &s);
	for (int i = 0; i < 2; i++) {
		head[i] = s[i];
		tail[i] = s[i + 2];
	}

	if (head[0] == '0')	mmyy++;
	else if (head[1] == '1' && (head[1] == '0' || head[1] == '1' || head[1] == '2'))
		mmyy++;
	if (mmyy == 1) {
		if (tail[0] == '0')	printf("AMBIGUOUS");
		else if (tail[1] == '1' && (tail[1] == '0' || tail[1] == '1' || tail[1] == '2'))
			printf("AMBIGUOUS");
		else
			printf("MMYY");
	}
	else {
		if (tail[0] == '0')	printf("YYMM");
		else if (tail[1] == '1' && (tail[1] == '0' || tail[1] == '1' || tail[1] == '2'))
			printf("YYMM");
		else printf("NA");
	}

	return 0;
}
