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
void insert_at_tail(Node *&head, int val)
{
    Node *newnode = new Node(val);
    Node*tem=head;
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    while(tem->next!=NULL)
    {
        tem=tem->next;
    }
    tem->next=newnode;
}
void print_link_list(Node * head)
{ Node*tem=head;
    while(tem!=NULL)
    {
        cout<<tem->val<<endl;
        tem=tem->next;
    }

}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;
    insert_at_tail(head, 100);
    print_link_list( head);
    return 0;
}