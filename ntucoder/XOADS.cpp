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

void XoaNut(Node *&head, int x)
{
    if (head == NULL)
        return;
    if (head->info == x)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node *p = head;
    // while (p->next != NULL)
    // {
    //     if (p->next->info == x)
    //     {
    //         Node *temp = p->next;
    //         p->next = p->next->next;
    //         delete temp;
    //         return;
    //     }
    //     p = p->next;
    // }
    while (p->next != NULL && p->next->info != x)
        p = p->next;
    if (p->next == NULL)
        return;
    Node *temp = p->next;
    p->next = p->next->next;
    delete temp;
}

int main()
{
    int n, x, a;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        ChenCuoi(head, a);
    }

    XoaNut(head, x);

    Duyet(head);
}