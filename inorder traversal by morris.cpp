#include <bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node *left, *right;
};

/* Helper function that allocates a new node with the
given data and NULL left and right pointers. */
node* newNode(int data)
{
    node* temp = new node();
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

// inorder traversal without recursion and without stack
void morrisTraversalinorder(node* root)
{
    while (root)
    {
        // If left child is null, print the current node data. Move to
        // right child.
        if (root->left == NULL)
        {
            cout<<root->data<<" ";
            root = root->right;
        }
        else
        {
            // Find inorder predecessor
            node* current = root->left;
            while (current->right !=NULL && current->right != root)
                current = current->right;

            // If the right child of inorder predecessor already points to
            // this node
            if (current->right == NULL)
            {

                current->right = root;
                root = root->left;
            }

            // If right child doesn't point to this node, then print this
            // node and make right child point to this node
            else
            {

                cout<<root->data<<" ";
                root = root->right;
                 current->right = NULL;
            }
        }
    }
}

// Function for sStandard inorder traversal
void inorder(node* root)
{
    if (root)
    {

        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

/* Driver program to test above functions*/
int main()
{
    node* root = NULL;

    root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);

    root->left->left = newNode(4);
    root->left->right = newNode(5);

    root->right->left = newNode(6);
    root->right->right = newNode(7);

    root->left->left->left = newNode(8);
    root->left->left->right = newNode(9);

    root->left->right->left = newNode(10);
    root->left->right->right = newNode(11);

    morrisTraversalinorder(root);

    cout<<endl;
    inorder(root);

    return 0;
}
