#include <stdio.h>

int main() {
   int x=5;
   int *p=&x;
   int **pp=&p;
   printf("%d",**pp);

    return 0;
}