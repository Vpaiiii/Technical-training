#include <stdio.h>

int main() {
   int x=10,y=20;
   int *p=&x,*q=&y;
   *p=*q
   printf("%d %d",x,y);

    return 0;
}