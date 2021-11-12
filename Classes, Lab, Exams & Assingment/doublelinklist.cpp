#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct node
{
    char num[100];
    node *next, *prev;

} *stnode = NULL, *ennode = NULL;
void createnode(int n);
void display();

int main()
{
    int n;
    cout << "\nEnter No Of Nodes: ";
    cin >> n;
    createnode(n);
    display();
}
void createnode(int n)
{
    node *tmp, *newn;
    for (int i = 0; i < n; i++)
    {
        newn = (node *)malloc(sizeof(node));
        cout << "\nEnter Data: ";
        cin >> newn->num;
        newn->num;
        newn->next = NULL;
        newn->prev = ennode;
        if (stnode == NULL)
        {
            stnode = newn;
            ennode = stnode;
        }
        else
        {
            ennode->next = newn;
            ennode = ennode->next;
        }
    }
}
void display()
{
    node *tmp;
    if (stnode == NULL)
    {
        cout << "List Is Empty" << endl;
    }
    else
    {
        tmp = stnode;
        while (tmp != NULL)
        {
            cout << "Data = " << tmp->prev << " " << tmp << " " << tmp->num << " " << tmp->next << endl;
            tmp = tmp->next;
        }
    }
}
