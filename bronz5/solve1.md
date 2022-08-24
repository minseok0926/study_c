[백준 문제 2754](https://www.acmicpc.net/problem/2754)  
```c
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

[백준 문제 4999](https://www.acmicpc.net/problem/4999)
```c
#include <stdio.h>
#include <string.h>
int main() {
  int a;
  char c[1001] = {};
  char c1[1001] = {};
  scanf("%s", c);
  scanf("%s", c1);

  if(strlen(c)>=strlen(c1)) puts("go");
  else if(strlen(c)<=strlen(c1)) puts("no");
  return 0;
}
```
