#include <bits/stdc++.h>
using namespace std;
struct node
{
   int data;
   struct node* left;
   struct node* right;
};
/* Helper function that allocates a new node with the
given data and NULL left and right pointers. */
struct node* newnode(int data)
{
  struct node* node = (struct node*)
                       malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;

  return(node);
}

bool pa(struct node *root,int target)
{
    if(root==NULL)
        return false;
    if(root->data==target)
    {
        cout<<root->data<<" ";
         return true;
    }
    bool left=pa(root->left,target);

        if(left== true)
        {
            cout<<root->data<<" ";
            return true;
        }
    bool right=pa(root->right,target);
    if(right== true)
    {
        cout<<root->data<<" ";
        return true;
    }
}


/* Driver program to test above functions*/
int main()
{
    /* Construct the following binary tree
              1
            /   \
          2      3
        /  \
      4     5
     /
    7
  */
  struct node *root = newnode(1);
  root->left        = newnode(2);
  root->right       = newnode(3);
  root->left->left  = newnode(4);
  root->left->right = newnode(5);
  root->left->left->left  = newnode(7);

  pa(root, 7);

  getchar();
  return 0;
}
