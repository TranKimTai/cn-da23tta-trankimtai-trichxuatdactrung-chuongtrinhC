#include <stdio.h>

int main(int argc, char *argv[])
{
  int n, i, j;

  scanf("%d", &n);

  int ds[n][3];

  for(i=0, j=0; i<n; ++i) {
    scanf("%d %d %d", &ds[i][j], &ds[i][j+1], &ds[i][j+2]);
  }

  for(i=0, j=0; i<n; ++i) {
    if(ds[i][j]*ds[i][j] + ds[i][j+1]*ds[i][j+1] == ds[i][j+2]*ds[i][j+2])
      printf("YES\n");
    else
      printf("NO\n");
  }

  return 0;
}