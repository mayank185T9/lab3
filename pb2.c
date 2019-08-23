#include <stdio.h>

int main(int argc, char const *argv[]) {
  int odd[20];
  int even[20];
  int size;
  int b[25];
  printf("enter yo size man\n" );
  scanf("%d",&size);
  for (int i = 0; i < size; i++) {
    if (i==0) {
      printf("enter num\n" );
      scanf("%d", &b[i]);
    }
    if (i!=0) {
      printf("enter next num\n" );
      scanf("%d", &b[i]);
    }
  }
  printf("the array is: " );
  for (int g = 0; g < size; g++) {
    if (g==0) {
      printf("{%d, ", b[g]);
    }
    if (g<(size-1)&&g!=0) {
      printf("%d, ", b[g]);
    }
    if (g==(size-1)) {
      printf("%d}\n", b[g]);
      printf("\n");
    }
  }
  int x = 0;
  for (int w = 0; w < size; w++) {
    if (b[w]%2==0) {
      even[x] = b[w];
      x = x+1;
    }
  }
  int p = 0;
  for (int r = 0; r < size; r++) {
    if (b[r]%2!=0) {
      odd[p] = b[r];
      p = p+1;
    }
  }
  printf("the even array is: " );
  for (int a = 0; a < x; a++) {
    if (a==0) {
      printf("{%d, ", even[a]);
    }
    if (a<(x-1)&&a!=0) {
      printf("%d, ", even[a]);
    }
    if (a==(x-1)) {
      printf("%d}\n", even[a]);
      printf("\n");
    }
  }
  printf("the odd array is: " );
  for (int q = 0; q < p; q++) {
    if (q==0) {
      printf("{%d, ", odd[q]);
    }
    if (q<(x-1)&&q!=0) {
      printf("%d, ", odd[q]);
    }
    if (q==(x-1)) {
      printf("%d}\n", odd[q]);
      printf("\n");
    }
  }
  return 0;
}
