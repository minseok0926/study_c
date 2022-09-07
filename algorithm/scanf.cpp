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

#include <stdio.h>
int main(){
  int h;
  int m;
  int s;
  int t;
  int a;
  scanf("%d %d %d", &h, &m, &s);
  scanf("%d", &t);
  s -= t % 60;
  t /= 60;
  if (s < 0){
    s += 60;
    m--;
  }
  m -= t%60;
  t/= 60;
  h -= t;
  if (m < 0){
    m += 60;
    h--;
    }

    printf("%d %d %d", h, m, s);

}

#include <stdio.h>
int main(){
  int a;
  int b;
  int c;
  int d;
  int e;

  scanf("%d", &e);
  a = e %10;
  e = e/10;
  b = e %10;
  e = e/10;
  c = e %10;
  e = e/10;
  d = e %10;

  printf("%d", a+b+c+d);
}

#include <stdio.h>
int main(){
  long long n, m, i;
  scanf("%lld %lld", &n, &m);
  scanf("%lld", &i);
  if (n/m == (i - 1) /m){
    printf("0");
  }
  else printf("%lld", (i -1)%m+1);
  
}

#include <stdio.h>
int main(){
  int a, b, c, d;

  for (int i = 0; i < 3; i++){
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int sum = a + b + c+ d;
    if(sum == 3) printf("A\n");
    else if(sum == 2) printf("B\n");
    else if(sum == 1) printf("C\n");
    else if(sum == 0) printf("D\n");
    else if(sum == 4) printf("E\n");
  }
  
}

#include <stdio.h>
int main(){
  int a, b, c, d, e, f, g;
  scanf("%1d", &f);
  a = f*f;
  scanf("%1d", &f);
  b = f*f;
  scanf("%1d", &f);
  c = f*f;
  scanf("%1d", &f);
  d = f*f;
  scanf("%1d", &f);
  e = f*f;
  g = a+b+c+d+e;
  printf("%d", g %10);
}

