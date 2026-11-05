#include <stdio.h>

int main(int argc, char *argv[])
{
  int n, i;
  int ds[3];

  scanf("%d", &n);

  for(i=0; i<n; ++i) {
    scanf("%d %d %d", &ds[0], &ds[1], &ds[2]);
    if(ds[0]*ds[0] + ds[1]*ds[1] == ds[2]*ds[2])
      printf("YES\n");
    else
      printf("NO\n");
  }

  return 0;
}