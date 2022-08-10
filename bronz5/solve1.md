[백준 문제 2754](https://www.acmicpc.net/problem/2754)  
```
#include <stdio.h>
#include <string.h>
int main() {
  char a[3];
  scanf("%s", a);
  if (strcmp(a, "A+") == 0) printf("4.3");
  if (strcmp(a, "A0") == 0) printf("4.0");
  if (strcmp(a, "A-") == 0) printf("3.7");
  if (strcmp(a, "B+") == 0) printf("3.3");
  if (strcmp(a, "B0") == 0) printf("3.0");
  if (strcmp(a, "B-") == 0) printf("2.7");
  if (strcmp(a, "C+") == 0) printf("2.3");
  if (strcmp(a, "C0") == 0) printf("2.0");
  if (strcmp(a, "C-") == 0) printf("1.7");
  if (strcmp(a, "D+") == 0) printf("1.3");
  if (strcmp(a, "D0") == 0) printf("1.0");
  if (strcmp(a, "D-") == 0) printf("0.7");
  if (strcmp(a, "F+") == 0) printf("0.0");
  return 0;
}
```
