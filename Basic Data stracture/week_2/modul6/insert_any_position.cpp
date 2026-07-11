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
void insert_at_anyposition(Node *&head,int idx, int val)
{
    Node *newnode = new Node(val);
    Node*tem=head;
   
    for(int i=0;i<idx-1;i++)
    {
        tem=tem->next;
    }
    newnode->next=tem->next;
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
    insert_at_anyposition(head,2, 100);
    print_link_list( head);
    return 0;
}