#include <iostream>
using namespace std;

struct Node
{
    int info;
    Node *next;
};

Node *TaoNut(int x)
{
    Node *p = new Node;
    p->info = x;
    p->next = NULL;
    return p;
}

void Duyet(Node *head)
{
    Node *p = head;
    while (p != NULL)
    {
        cout << p->info << " ";
        p = p->next;
    }
    cout << endl;
}

void ChenDau(Node *&head, int x)
{
    Node *p = TaoNut(x);
    p->next = head;
    head = p;
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
    int n, m, a[100];
    cin >> n >> m;
    Node *p, *head = NULL;
    for (int i = 0; i < m; i++)
        cin >> a[i];

    for (int i = n; i >= 1; i--)
        ChenDau(head, i);

    for (int i = 0; i < m; i++)
    {
        XoaNut(head, a[i]);
        ChenDau(head, a[i]);
    }

    Duyet(head);

    while (head)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
