#include <stdio.h>
void func(int x){
    x=100;
}
int main() {
  int x=50;
  func(x);
  printf("%d",x);

    return 0;
}