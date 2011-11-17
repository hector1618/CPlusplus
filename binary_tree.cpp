# include <stdio.h>
# include <stdlib.h>

struct node
{
  int a;
  node * lchild;
  node * rchild;
};

class Binary_tree
{
private:
  void distory_tree(node *);
  void insert(node * n1, int k);
  void inorder(node * n1);
  void preorder(node * n1);
  void postorder(node * n1);
  int size(node *);
  int max_depth(node *);
  int max1(int a, int b)
  {
    if (a > b) return a;
    return b;
  }
  void print_paths(node * n1, int P[], int k);
  void print_array(int P[], int k);
public:
  node * root;
  Binary_tree();
  ~Binary_tree();
  void insert(int k);
  void inorder();
  void preorder();
  void postorder();
  int size();
  int max_depth();
  int min_value();
  int max_value();
  bool has_path_sum(node * n1, int s);
  void print_paths();
  void mirror(node * n1);
};

Binary_tree::Binary_tree()
{
  root = NULL;
}

Binary_tree::~Binary_tree()
{
  distory_tree(root);
}

void Binary_tree::distory_tree(node * n1)
{
  if(n1)
    {
      distory_tree(n1->lchild);
      distory_tree(n1->rchild);
      delete n1;
    }
}

void Binary_tree::insert(int k)
{
  node * temp;
  temp = new node;
  temp->a = k;
  temp->lchild = 0;
  temp->rchild = 0;
  if(!root)
    {
      root = temp;
      return;
    }

  node * temp1 = root;
  while(true)
    {
      if(k < temp1->a)
	{
	  if(!(temp1->lchild))
	    {
	      temp1->lchild = temp;
	      return;
	    }
	  else
	    {
	      temp1 = temp1->lchild;
	    }
	}
      else
	{
	  if(!(temp1->rchild))
	    {
	      temp1->rchild = temp;
	      return;
	    }
	  else
	    {
	      temp1 = temp1->rchild;
	    }
	}
    }
}

void Binary_tree::inorder()
{
  inorder(root);
}

void Binary_tree::inorder(node * n1)
{
  if(n1)
    {
      inorder(n1->lchild);
      printf("%d ", n1->a);
      inorder(n1->rchild);
    }
}

void Binary_tree::preorder()
{
  preorder(root);
}

void Binary_tree::preorder(node * n1)
{
  if(n1)
    {
      printf("%d ", n1->a);
      preorder(n1->lchild);
      preorder(n1->rchild);
    }
}

void Binary_tree::postorder()
{
  postorder(root);
}

void Binary_tree::postorder(node * n1)
{
  if(n1)
    {
      postorder(n1->lchild);
      postorder(n1->rchild);
      printf("%d ", n1->a);
    }
}

int Binary_tree::size()
{
  return size(root);  
}

int Binary_tree::size(node * n1)
{
  if(n1)
    return size(n1->lchild) + size(n1->rchild) + 1;
  return 0;
}

int Binary_tree::max_depth()
{
  return max_depth(root) - 1;
}

int Binary_tree::max_depth(node * n1)
{
  if(n1)
    return 1 + max1(max_depth(n1->lchild), max_depth(n1->rchild));
  return 0;
}

int Binary_tree::min_value()
{
  node * temp, * prev;
  temp = root;
  prev = root;
  while(temp)
    {
      prev = temp;
      temp = temp->lchild;
    }
  return prev->a;
}

int Binary_tree::max_value()
{
  node * temp, * prev;
  temp = prev = root;
  while(temp)
    {
      prev = temp;
      temp = temp->rchild;
    }
  return prev->a;
}

bool Binary_tree::has_path_sum(node * n1, int s)
//returns true if given tree contains the path from root to leaf having sum = s
{
  if (s < 0) return false;
    
  if(n1 == NULL)
    {
      return (s == 0);
    }
  else
    {
      return (has_path_sum(n1->lchild, s - n1->a) || has_path_sum(n1->rchild, s - n1->a));
    }
}

void Binary_tree::print_paths()
{
  int P[max_depth()]; // To store path
  int k = 0;
  print_paths(root, P, k);
}

void Binary_tree::print_paths(node * n1, int P[], int k)
{
  if(n1 == NULL) return;

  if(!(n1->lchild) and !(n1->rchild))
    {
      P[k++] = n1->a;
      print_array(P, k);
    }
  else
    {
      P[k++] = n1->a;
      print_paths(n1->lchild, P, k);
      print_paths(n1->rchild, P, k);
    }
}

void Binary_tree::print_array(int P[], int k)
{
  for(int i=0; i < k; i++)
    {
      printf("%d ", P[i]);
    }
  printf("\n");
}

void Binary_tree::mirror(node * n1)
{
  if(n1)
    {
      node * temp;
      temp = n1->lchild;
      n1->lchild = n1->rchild;
      n1->rchild = temp;
      mirror(n1->lchild);
      mirror(n1->rchild);
    }
}

int main()
{
  Binary_tree b;
  int A[] = {60, 30, 18, 35, 63, 61, 79, 10, 19, 20, 21, 22, 23};
  for(int i=0; i < sizeof(A)/sizeof(A[i]); i++)
    {
      b.insert(A[i]);
    }
  b.inorder();
  printf("\n");
  //b.preorder();
  //printf("\n");
  //b.postorder();
  //printf("\n");
  //printf("%d\n", b.size());
  //printf("%d\n", b.max_depth());
  //printf("%d\n", b.min_value());
  //printf("%d\n", b.max_value());
  //printf("%d\n", b.has_path_sum(b.root, 125));
  //printf("%d\n", b.has_path_sum(b.root, 184));
  b.print_paths();
  b.mirror(b.root);
  b.inorder();
  printf("\n");
  return 0;
}
