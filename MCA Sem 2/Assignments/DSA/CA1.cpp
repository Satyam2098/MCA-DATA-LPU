
#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
}*head=NULL,*ptr,*temp;
void create(int x)
{
    temp=new node;
    temp->data=x;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
}
void dispaly_recursive(node *ptr)
{
    if(ptr!=NULL)
    {
        dispaly_recursive(ptr->next);
        cout<<ptr->data<<" ";
    }
}
int main()
{
    int a=1;
    cout<<"Enter seat number of bus:"<<endl;
    while(a!=0) // to define the lasT seat of bus
    {
        cin>>a;
        if(a!=0)
        create(a);
    }
    dispaly_recursive(head);
    return 0;
}