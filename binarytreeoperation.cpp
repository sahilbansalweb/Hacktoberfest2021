
#include<iostream>
#include<unistd.h>
using namespace std;
struct node
{
    struct node *rchild;
    int data;
    struct node *lchild;
};
int count=0,pnode=0,qnode=0;
struct node *root;

void count_node(struct node *rt)
{
    if(rt!=NULL)
    {
        if(rt->rchild==NULL or rt->lchild==NULL)
        {
            if(rt->lchild==NULL and rt->rchild==NULL)
            {
                count=count+1;
            }
            else
            {
                pnode=pnode+1;
            }

        }
        else if(rt->lchild!=NULL and rt->rchild!=NULL)
        {
            qnode=qnode+1;
        }
        count_node(rt->lchild);
        count_node(rt->rchild);
    }
}


void place_node(struct node *nnode,struct node *rt)
{
    if(nnode->data>=rt->data)
    {
        if(rt->rchild==NULL)
        {
            rt->rchild=nnode;
        }
        else
        {
           place_node(nnode,rt->rchild);
        }
    }
    else
    {
        if(rt->lchild==NULL)
        {
            rt->lchild=nnode;
        }
        else
        {
            place_node(nnode,rt->lchild);
        }

    }

}
void create_node(int d)
{
    struct node *nn;
    nn=(struct node *)malloc(sizeof(struct node));
    nn->data=d;
    nn->rchild=NULL;
    nn->lchild=NULL;
    if(root==NULL)
    {
        root=nn;
    }
    else
    {
        place_node(nn,root);
    }


}

int main()
{
    int arr[20],a;
    cout<<"Enter the nodes of Binary Tree"<<endl;
    cin>>a;
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }

    for(int j=0;j<a;j++)
    {
        create_node(arr[j]);
    }
    sleep(2);
    cout<<"Binary search tree created successfully"<<endl;

    cout<<endl<<"Number of Leaf nodes in Binary search tree: "<<endl;
    count_node(root);
    cout<<count;

     cout<<endl<<"Number of Parent nodes having 1 child in Binary search tree: "<<endl;
    cout<<pnode;

     cout<<endl<<"Number of Parent  nodes  having 2 child in Binary search tree: "<<endl;
    cout<<qnode;




}
