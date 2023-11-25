#include <iostream>
using namespace std;

struct Node
{
    int info;
    Node *next;
};

Node *head = NULL;

Node *TaoNut(int x)
{
    Node *n = new Node;
    n->info = x;
    n->next = NULL;
    return n;
}

void ChenCuoi(Node *&head, int x)
{
    Node *n = TaoNut(x);
    if (head == NULL)
        head = n;
    else
    {
        Node *p = head;
        while (p->next != NULL)
            p = p->next;
        p->next = n;
    }
}

void Duyet(Node *head)
{
    Node *p = head;
    while (p != NULL)
    {
        cout << p->info << " ";
        p = p->next;
    }
}

int main()
{
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        ChenCuoi(head, x);
    }

    Duyet(head);
}