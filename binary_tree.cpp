# include <stdio.h>
# include <stdlib.h>

struct node
{
  int a;
  node * lchild;
  node * rchild;
  node * parent;
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

int main()
{
  Binary_tree b;
  b.insert(5);
  b.insert(10);
  b.insert(15);
  b.insert(4);
  b.insert(8);
  b.insert(20);
  b.inorder();
  printf("\n");
  b.preorder();
  printf("\n");
  b.postorder();
  printf("\n");
  printf("%d\n", b.size());
  printf("%d\n", b.max_depth());
  return 0;
}
