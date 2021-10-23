#include <iostream>
using namespace std;
struct bstnode
{
    int data;
    bstnode *left;
    bstnode *right;
};
class bst
{
    bstnode *root;

public:
    bst()
    {
        root = NULL;
    }
    void insert(int x)
    {
        bstnode *temp;
        temp = new bstnode;
        temp->data = x;
        temp->left = NULL;
        temp->right = NULL;
        if (root == NULL)
        {
            root = temp;
            return;
        }
        bstnode *t;
        t = root;
        while (1)
        {
            if (x < t->data)
            {
                if (t->left == NULL)
                {
                    t->left = temp;
                    break;
                }

                t = t->left;
            }
            else
            {
                if (t->right == NULL)
                {
                    t->right = temp;
                    break;
                }
                t = t->right;
            }
        }
    }
    void display()
    {
        inorder(root);
        cout<<endl;
        preorder(root);
    }
    void inorder(bstnode *t)
    {
        if (t == NULL)
        {
            return;
        }
        
        inorder(t->left);
        
        
        cout << t->data << " ";
        
        inorder(t->right);
        
    }

    void preorder(bstnode *t)
    {
        if (t == NULL)
        {
            return;
        }
        cout<<t->data<<" ";
        preorder(t->left);
        preorder(t->right);
        
    }
};
int main()
{
    bst b;
    b.insert(15);
    b.insert(35);
    b.insert(30);
    b.insert(13);
    b.insert(11);
    b.display();
    cout<<endl;
    b.insert(56);
    b.insert(12);
    b.insert(71);
    b.insert(66);
    b.display();
    return 0;
}