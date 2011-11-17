# include <iostream>
# include <stdio.h>
# include <stdlib.h>
using namespace std;

struct node
{
  int a;
  node * p;
};

class Linked_list
{
public:
  node * start, * end;
  Linked_list();
  ~Linked_list();
  bool is_empty(){return end == 0;}
  int length();
  void add(int);
  void create();
  void create_random(int, int, int, int);
  void print();
  int find(int);
  bool search(int);
  void delete1(int);
  void insert(int, int);
  void reserse();
  void delele_list(); // Deletes the list
  int pop();
  void sorted_insert(int);
  void insert_sort();
};

Linked_list::Linked_list()
{
  start = 0;
  end = start;
}

Linked_list::~ Linked_list()
{
  node * temp;
  while(start)
    {
      temp = start->p;
      delete start;
      start = temp;
    }
}

int Linked_list::length()
{
  int l = 0;
  node * temp;
  temp = start;
  while(temp)
    {
      l++;
      temp = temp->p;
    }
  return l;
}

void Linked_list::add(int k)
{
  node * temp;
  temp = new node;
  temp->a = k;
  temp->p = 0;
  if (start)
    {
      end->p = temp;
      end = temp;      
    }
  else
    {
      start = temp;
      end = temp;
    }
}

void Linked_list::create()
{
  int n, ele;
  cout << "Enter the number of elements : "<<endl;
  cin >> n;
  cout << "Enter elements :" <<endl;
  while(n)
    {
      cin >> ele;
      add(ele);
      n--;
    }
}

void Linked_list::create_random(int k=15, int m=128, int a=65, int c=3)
{
  int n;
  cout << "Enter the number of elements : "<<endl;
  cin >> n;
  while(n)
    {
      add(k);
      k = (a * k + c) % m;
      n--;
    }
}


void Linked_list::print()
{
  node * temp;
  temp = start;
  while(temp)
    {
      cout << temp->a << "  ";
      temp = temp -> p; 
    }
  cout<<endl;
}

int Linked_list::find(int k)
{
  // Return the 'k'th element
  node * temp;
  temp = start;
  if (k > length())
    {
      return false;
    }
  while(k-1)
    {
      temp = temp->p;
      k--;
    }
  return temp->a;
}

bool Linked_list::search(int ele)
{
  node * temp;
  temp = start;
  while(temp)
    {
      if (temp->a == ele)
	{
	  return true;
	}
      temp = temp->p;
    }
  return false;
}

void Linked_list::delete1(int k)
//Delete the ``k``th element
{
  node * temp, * temp1;
  temp = start;
  while(k - 2)
    {
      temp = temp->p;
      k--;
    }
  temp1 = temp->p;
  temp->p = temp-> p-> p;
  delete temp1;  
}

void Linked_list::insert(int k, int ele)
// Insert element ``ele`` at ``k``th position.
{
  node * temp,  * temp1;
  temp = start;
  while(k - 2)
    {
      temp = temp->p;
      k--;
    }
  temp1 = temp->p;
  temp->p = new node;
  temp->p->a = ele;
  temp->p->p = temp1;
}

void Linked_list::reserse()
{
  node * temp,* next;
  next = start->p;
  start->p = 0;
  do
    {
      temp = next->p;
      next->p = start;
      start = next;
      next = temp;
    }
  while(next);
}


void Linked_list::delele_list()
{
  node * temp;
  temp = start;
  while(start)
    {
      temp = start->p;
      free(start);
      start = temp;
    }
}

int Linked_list::pop()
{
  node * temp;
  int a = start->a;
  temp = start->p;
  free(start);
  start = temp;
  return a;
}

void Linked_list::sorted_insert(int b)
{
  node * temp, * temp1, * prev;
  temp = start;
  temp1 = new node;
  temp1->a = b;
  temp1->p = 0;

  if(is_empty()) 
    {
      start = temp1;
      return;
    }

  if (b < start->a)
    {
      temp1->p = start;
      start = temp1;
      return;
    }

  while((b > temp->a) && temp)
    {
      prev = temp;
      temp = temp->p;
    }
  prev->p = temp1;
  temp1->p = temp;
}

void Linked_list::insert_sort()
{
  Linked_list M;
  int b;
  node * temp, * prev;
  temp = start;
  while(temp)
    {
      b = temp->a;
      M.sorted_insert(b);
      printf("In iteration\n");
      M.print();
      temp = temp->p;     
    }
  M.print();
} 
