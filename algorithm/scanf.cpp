#include <stdio.h>
int main(){
  char c;
  long long i;
  long long l;
  double d;
  char s[101] = {};

  scanf("%c", &c);
  scanf("%lld", &i);
  scanf("%lld", &l);
  scanf("%lf", &d);
  scanf("%s", s);
  printf("%s ", s);
  printf("%lf ", d);
  printf("%lld ", l);
  printf("%lld ", i);
  printf("%c ", c);
}
