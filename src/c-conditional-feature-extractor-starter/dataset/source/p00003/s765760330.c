#include <stdio.h>

void sort(int data[], int length)
{
  int i, j;
  int tmp;

  for (i = length; i > 0; i--) {
    for (j = 0; j < i - 1; j++) {
      if (data[j] > data[j + 1]) {
        tmp = data[j];
        data[j] = data[j + 1];
        data[j + 1] = tmp;
      }
    }
  }
}

int main(void)
{
  int n;
  int data[3];
  int i;

  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d %d %d", &data[0], &data[1], &data[2]);
    sort(data, 3);
    if (data[2] * data[2] == (data[0] * data[0] + data[1] * data[1])) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }

  return 0;
}