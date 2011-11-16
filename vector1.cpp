# include <iostream>
# include <stdio.h>
# include <vector>
using namespace std;

void print(vector <int> V)
{
  
  for(int i=0; i<V.size(); i++)// .size returns the size of vector
    {
      printf("%d ", V[i]);      
    }
  printf("\n");
}

int main()
{
  vector <int> first;
  vector <int> second;
  vector <int> third;
  
  first.assign(7, 100); // 7 elements, each 100
  print(first);
  

  int A[] = {1, 2, 3, 4, 5};
  third.assign(A, A + 5); // another way of assiging the vector
  print(third);
  
  // Use of push_back
  for(int i=0; i < 10; i++)
    {
      second.push_back(i); 
    }
  print(second);

  // Another way of print. Using iterators 
  vector <int> :: iterator it;
  for(it = second.begin(); it < second.end(); it++) // use of .begin() and .end()
    {
      printf("%d ", *it);
    }
  printf("\n");

  // .front() = V[0] and .back() = V[V.size() - 1]
  return 0;
}
