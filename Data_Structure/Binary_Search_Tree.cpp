#include <bits/stdc++.h>
using namespace std;

template <class M>
class node
{
public:
    int id;
    M value;
    node *right;
    node *left;
};

template <class M>
class Binary_Tree
{
private:
    node<M> *root;
    node<M> *CreatNewNode(int id, M value)
    {
        node<M> *New = new node<M>;
        New->value = value;
        New->right = NULL;
        New->left = NULL;
        New->id = id;
        return New;
    }

public:
    Binary_Tree()
    {
        root = NULL;
    }
    void Insert_BFS(int id, M value)
    {
        node<M> *New = CreatNewNode(id, value);
        if (root == NULL)
        {
            root = New;
            return;
        }
        queue<node<M> *> q;
        q.push(root);
        while (!q.empty())
        {
            node<M> *a = q.front();
            q.pop();
            if (a->left != NULL)
                q.push(a->left);
            else
            {
                if (a->value >= New->value)
                {
                    a->left = New;
                    return;
                }
            }
            if (a->right != NULL)
                q.push(a->right);
            else
            {
                if (a->value < New->value)
                {
                    a->right = New;
                    return;
                }
            }
        }
    }

    void BFS_Traverse()
    {
        if (root == NULL)
        {
            cout << "Tree is Still NULL"
                 << "\n";
            return;
        }
        queue<node<M> *> q;
        q.push(root);
        while (!q.empty())
        {
            node<M> *a = q.front();
            q.pop();
            if (a->left != NULL)
                q.push(a->left);
            if (a->right != NULL)
                q.push(a->right);
            cout << a->value << " ";
        }
    }

    void DFS_Traverse()
    {
        if (root == NULL)
        {
            cout << "Tree is still empty ."
                 << "\n";
            return;
        }

        Dfs(root);
    }

    void BFS()
    {
        queue<node<M>*>q;
        q.push(root);
        while (!q.empty())
        {
            node<M> *x = q.front();
            int a = -1, b = -1;
            q.pop();
            if (x->left != NULL)
            {
                q.push(x->left);
                a = x->left->value;
            }

            if (x->right != NULL)
            {
                q.push(x->right);
                b = x->right->value;
            }

            cout << "Id Value-> " << x->value << " Right Child ->" << b << " Left Child ->" << a << "\n";
        }
    }

    void Dfs(node<M> *a)
    {
        if (a == NULL)
            return;
        cout << a->value << " ";
        Dfs(a->left);
        Dfs(a->right);
    }
};
int main()
{
    Binary_Tree<int> bt;
    bt.Insert_BFS(0, 10);
    bt.Insert_BFS(1, 20);
    bt.Insert_BFS(2, 70);
    bt.Insert_BFS(3, 6);
    bt.Insert_BFS(4, 5);
    bt.DFS_Traverse();
    cout << "\n";
    bt.BFS_Traverse();
    cout << '\n';
    bt.BFS();
    cout<<"\n";
    return 0;
}
