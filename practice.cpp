#include<iostream>

using namespace std;

struct node {
    int data;
    node* next;
    node* prev;
};
node* h = 0;
node* t;
node* n;
int total=10;
void newnode()
{

    if(h==0){
        n= (node*) new node;
        n->data=total;
        total+=10;
        n->prev= NULL;
        h=n;
        t=n;

    }
    else
    {
        n= (node*) new node;
        n->data=total;
        total+=10;
        n->prev=t;
        t->next=n;
        t=n;
        n->next= NULL;

    }

}
void display()
{
    struct node *q;
    if (h == NULL)
    {
        cout<<"List empty,nothing to display"<<endl;
        return;
    }
    q = h;
    cout<<"The Doubly Link List is :"<<endl;
    while (q != NULL)
    {
        cout<<q -> data<<" <-> ";
        q = q->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    newnode();
    display();
}
