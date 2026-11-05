#include <stdio.h>
#include <string.h>

int main(void)
{
	int m, f, r;
	int ii;
	char c;
	char rank[1000];

	int idx = 0;
	for (;;) {
		scanf("%d %d %d", &m, &f, &r);
		scanf("%c", &c);
		if (m == -1 && f == -1 && r == -1) {
			break;
		}
		if (m == -1 || f == -1) {
			rank[idx] = 'F';
		} else if (m + f >= 80) {
			rank[idx] = 'A';
		} else if ((m + f) >= 65 && (m + f) < 80) {
			rank[idx] = 'B';
		} else if ((m + f) >= 50 && (m + f) < 65) {
			rank[idx] = 'C';
		} else if ((m + f) >= 30 && (m + f) < 50) {
			if (r >= 50) {
				rank[idx] = 'C';
			} else {
				rank[idx] = 'D';
			}
		} else {
			rank[idx] = 'F';
		}
		idx++;
	}

	for (ii = 0; ii < idx; ii++) {
		printf("%c\n", rank[ii]);
	}


	return 0;
}