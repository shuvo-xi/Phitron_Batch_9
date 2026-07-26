#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
    return;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        int val;
        while (true)
        {
            cin >> val;
            if (val == -1)
            {
                break;
            }
            insert_at_tail(head, tail, val);
        }
        int x;
        cin >> x;
        int idx = 0;
        int flag=-1;
        Node *temp = head;
        while (temp != NULL)
        {

            if (temp->val == x)
            {
               flag=idx;
               break;
            }
            idx++;
            temp = temp->next;
        }
         cout<<flag<<endl;
    }
   
    return 0;
}