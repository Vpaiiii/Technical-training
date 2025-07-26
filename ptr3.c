#include <stdio.h>


int main() {
  
  int x=10;int *p=&x;x+=*p;
  printf("%p",x);

    return 0;
}