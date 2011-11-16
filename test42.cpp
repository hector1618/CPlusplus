#include <iostream>
#include <cstdio>

using namespace std;

int main() {
  int a = 10, *j;
  int *k;
  j = k = &a;
  j++;
  k++;
  printf("\n%u  %u\n", k, j);
  return 0;

}
