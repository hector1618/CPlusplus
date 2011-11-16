# include <stdio.h>
# include "linked_list.h"

int main()
{
  Linked_list L, M;
  M.sorted_insert(4);
  M.print();
  L.create_random();
  L.print();
  L.delete1(10);
  L.print();
  L.insert(13, 10000);
  L.print();
  L.reserse();
  L.print();
  printf("Pop function %d\n", L.pop());
  L.print();
  L.sorted_insert(4000);
  L.sorted_insert(3);
  L.print();
  L.insert_sort();
  //L.print();
  L.delele_list();
  L.print();
  return 0;

}
