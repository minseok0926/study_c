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



#include <stdio.h>
#include <string.h>
int main() {
  char a[100];
  scanf("%s", a);
  char b;
  b = strlen(a);
  printf("%d\n", b);
  
  return 0;
}


#include <stdio.h>
#include <string.h>
int main() {
  char a[100];
  scanf("%s", a);
  char b;
  b = strlen(a);
  for(int i=0; i < b; i++){
    if (a[i] < 91){
      a[i] += 32;
    }
    else if (96 < a[i] &&  a[i] < 122){
      a[i] -= 32;
    }
    printf("%c", a[i]);
  }
  
  return 0;
}



#include <stdio.h>
#include <string.h>
int main() 
{
  char *sp = "Hello string";
  char *name = "씨큐브코딩";
  printf("%d %d \n", sp, "Hello string");
  printf("%d %d \n", sp, "씨큐브 코딩");
  printf("%s %s \n", sp, "Hello string");
  printf("%s %s \n", sp, "씨큐브 코딩");
  return 0;
  }



#include <stdio.h>
#include <string.h>
int main() 
{
  char str[] = "Hello string";
  char name[20] = "씨큐브코딩";
  char *p, *q;
  p = str;
  q = name;
  printf("%d %d\n", p, name);
  printf("%s %s\n", str, name);
  return 0;
  }
