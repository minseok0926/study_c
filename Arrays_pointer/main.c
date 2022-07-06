#include <stdio.h>
#include <string.h>
int main() {
  int ar[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  int i;


  *(ar+0) = 34;
  *(ar+1) = 21;
  printf("%d %d\n", ar[0], *(ar+0));
  printf("%d %d\n", ar[1], *(ar+1));
  printf("%d %d", *(ar+2), *(ar+3));
  return 0;
  }


#include <stdio.h>
#include <string.h>
int main() {
  int a;
  int b;
  int j;
  int ar[100][100];
  scanf("%d %d", &a, &b);
  int num;
  j = 0;
  for(int i = 0; i < a; i++){
    for(j = 0; j < b; j++){
      scanf("%d", &num);
      ar[i][j] = num;
    }
  }
  for(int i = 0; i < a; i++){
    for(j = 0; j < b; j++){
      scanf("%d", &num);
      ar[i][j] += num;
    }
  }
  for(int i = 0; i < a; i++){
    for(j = 0; j < b; j++){
      printf("%d ", ar[i][j]);
    }
    printf("\n");
  }
  return 0;
}
