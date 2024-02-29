#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int id;
    node* parent;
    node* r;
    node* l;
};

class Binary_Tree{
public:
    node* root;
    Binary_Tree()
    {
        root = NULL;
    }
    node* CreatNewNode(int id)

    {
        node* New = new node;
        New->id = id;
        New->r = NULL;
        New->parent = NULL;
        New->l = NULL;
        return New;
    }
    void Tree()
    {
        node* ara[6];
        for(int i =0;i<6;i++)
            ara[i] = CreatNewNode(i);
        ara[0]->l = ara[1];
        ara[0]->r = ara[2];

        ara[1]->l = ara[5];
        ara[1]->parent = ara[0];

        ara[2]->l = ara[3];
        ara[2]->r = ara[4];
        ara[2]->parent = ara[0];

        ara[3]->parent = ara[2];
        ara[4]->parent = ara[2];
        ara[5]->parent = ara[1];
        root = ara[0];
    }

    void BFS()
    {
        queue<node*>q;
        q.push(root);

        while(!q.empty())
        {
            node* x = q.front();
            int a = -1,b = -1,c =-1;
            q.pop();
            if(x->l != NULL)
            {
                q.push(x->l);
                a = x->l->id;
            }


            if(x->r != NULL)
            {
                q.push(x->r);
                b = x->r->id;
            }

            if(x->parent != NULL)
                c = x->parent->id;
            cout<<"Id-> "<<x->id<<" Parent Id -> "<<c<<" Right Child ->"<<b<<" Left Child ->"<<a<<"\n";
        }
    }

    void DFS_Inorder(node* a)
    {
        if(a == NULL)
            return;
        DFS_Inorder(a->l);
        cout<<a->id<<" ";
        DFS_Inorder(a->r);
    }
    void DFS_Preorder(node* a)
    {
        if(a == NULL)
            return;

        cout<<a->id<<" ";
        DFS_Preorder(a->l);

        DFS_Preorder(a->r);
    }
    void DFS_Postorder(node* a)
    {
        if(a == NULL)
            return;
        DFS_Postorder(a->l);

        DFS_Postorder(a->r);
        cout<<a->id<<" ";
    }

};

int main()
{
    Binary_Tree bt;
    bt.Tree();
    //bt.BFS();
    //bt.DFS_Inorder(bt.root);
    bt.DFS_Postorder(bt.root);
    return 0;
}
