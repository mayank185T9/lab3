#include <stdio.h>
void duplicatecheck(int a[],int size){
  int b[size];
  for (int i = 0; i < size; i++) {
    b[i]=0;
  }
  for (int j = 0; j < size; j++) {
      b[a[j]] = b[a[j]] + 1;
  }
  for (int q = 0; q < size; q++) {
    if (b[q]>0) {
      printf("the number of duplicates of %d is %d.\n",q,(b[q]-1));
      }
  }
}

int main(int argc, char const *argv[]) {
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
  duplicatecheck(b,size);
  return 0;
}
