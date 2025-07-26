#include <stdio.h>


int main() {
  
  int x=10;
  int*p=&x;
  *p+=x++;
  printf("%d %d",x,*p);

    return 0;
}