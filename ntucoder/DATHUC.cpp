#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
    int hs, mu;
    Node *next;
};

Node *head = NULL;

Node *TaoNut(int x, int y)
{
    Node *n = new Node;
    n->hs = x;
    n->mu = y;
    n->next = NULL;
    return n;
}

void ChenCuoi(Node *&head, int x, int y)
{
    Node *n = TaoNut(x, y);
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

void InDaThuc(Node *head)
{
    Node *p = head;
    while (p != NULL)
    {
        if (p->hs > 0 && p != head)
            cout << "+";
        if (p->hs < 0)
            cout << "-";
        int hs = abs(p->hs);
        if (hs != 1 || p->mu == 0)
            cout << hs;
        if (p->mu == 1)
            cout << "x";
        if (p->mu > 1)
            cout << "x^" << p->mu;

        p = p->next;
    }
}

int main()
{
    int a, b;
    do
    {
        cin >> a >> b;
        if (a != 0)
            ChenCuoi(head, a, b);
    } while (a != 0);
    InDaThuc(head);

    return 0;
}