#include <iostream>
#include <stack>
#include <cctype>
using namespace std;

struct Node
{
    char data;
    Node *left;
    Node *right;
    Node(char val) : data(val), left(nullptr), right(nullptr) {}
};

bool isOperator(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

int getHeight(Node *root)
{
    if (root == nullptr)
        return 0;
    int leftHeight = getHeight(root->left);
    int rightHeight = getHeight(root->right);
    return max(leftHeight, rightHeight) + 1;
}

int main()
{
    string str;
    getline(cin, str);

    stack<Node *> s;

    for (char c : str)
    {
        if (isalnum(c))
        {
            s.push(new Node(c));
        }
        else if (isOperator(c))
        {
            Node *newNode = new Node(c);
            newNode->right = s.top();
            s.pop();
            newNode->left = s.top();
            s.pop();
            s.push(newNode);
        }
    }

    Node *root = s.top();
    int height = getHeight(root);

    cout << height << endl;

    return 0;
}
