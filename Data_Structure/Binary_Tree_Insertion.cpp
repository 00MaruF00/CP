#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int value;
    int id;
    node* lft;
    node* rgt;
    node* parent;
};

class Binary_Tree{
public:
    node* root;
    Binary_Tree()
    {
        root = NULL;
    }
    node* CreatNewnode(int id, int value)
    {
        node* a = new node;
        a->id = id;
        a->lft = NULL;
        a->parent = NULL;
        a->rgt = NULL;
        a->value = value;
        return a;
    }

    void Insertion(int id,int value)
    {
        node* a= CreatNewnode(id,value);
        if(root == NULL)
        {
            root = a;
            return ;
        }
        queue<node*>q;
        q.push(root);
        while(!q.empty())
        {
            node* x = q.front();
            q.pop();
            if(x->lft != NULL)
                q.push(x->lft);
            else
            {
                a->parent = x;
                x->lft = a;
                return ;
            }
            if(x->rgt != NULL)
                q.push(x->rgt);
            else
            {
                a->parent = x;
                x->rgt = a;
                return ;
            }
        }
    }

    void BFS_Traverse()
    {
        if(root == NULL)
        {
            cout<<"Empty Tree"<<'\n';
            return ;
        }
        queue<node*>q;
        q.push(root);
        while(!q.empty())
        {
            node* a = q.front();
            q.pop();
            if(a->lft != NULL)
                q.push(a->lft);
            if(a->rgt  != NULL)
                q.push(a->rgt);
            cout<<"Id -> "<<a->id<<" "<<"Value -> "<<a->value<<"\n";
        }
    }

    void DFS()
    {
        if(root == NULL)
        {
            cout<<"Tree is Empty"<<"\n";
            return;
        }
        DF(root);
    }

    void DF(node* a)
    {
        if(a == NULL)
            return ;
        cout<<"Id -> "<<a->id<<" "<<"Value -> "<<a->value<<"\n";
        DF(a->lft);
        DF(a->rgt);
    }

    void Search(int value)
    {
        Srs(root,value);
    }
    void Srs(node* a,int value)
    {
        if(a == NULL)
            return;
        if(a->value == value)
            cout<<"Item found -> "<<a->id<<"\n";
        Srs(a->lft,value);
        Srs(a->rgt,value);
    }

};

int main()
{
    Binary_Tree bt;
    bt.Insertion(2,1);
    bt.Insertion(1,20);
    bt.Insertion(4,30);
    bt.Insertion(5,40);
    bt.Insertion(10,40);
    bt.BFS_Traverse();
    bt.DFS();
    bt.Search(40);
    return 0;
}
