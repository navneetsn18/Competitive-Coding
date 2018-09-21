#include<iostream>
using namespace std;
struct node
{
    int data;
    node *prev,*next;
};
class double_link
{
    public:
    node *head,*tail;
    double_link()
    {
        head=NULL;
        tail=NULL;
    }
    node *getnode()
    {
        node *nnode;
        nnode=new node;
        cout<<"\n Enter data: ";
        cin>>nnode->data;
        nnode->prev=NULL;
        nnode->next=NULL;
        return (nnode);
    }
    void insertb()
    {
        node *temp;
        temp=getnode();
        if(head==NULL)
        {
            head=tail=temp;
        }
        else
        {
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
    }
    void inserte()
    {
        node *temp;
        temp=getnode();
        if(tail==NULL)
        {
            head=tail=temp;
        }
        else
        {
            temp->prev=tail;
            tail->next=temp;
            tail=temp;
        }
    }
    void delb()
    {
        if(head==NULL)
        {
            cout<<"\n Empty List. ";
        }
        else
        {
            cout<<"\n Deleted: "<<head->data;
            if(head==tail)
            {
                head=NULL;
                tail=NULL;
            }
            else
            {
                node *temp;
                temp=head;
                head=head->next;
                head->prev=NULL;
                delete temp;
            }
        }
    }
    void dele()
    {
        if(tail==NULL)
        {
            cout<<"\n Empty List";
        }
        else
        {
            cout<<"\n Deleted: "<<tail->data;
            if(head==tail)
            {
                head=NULL;
                tail=NULL;
            }
            else
            {
                node *temp;
                temp=tail;
                tail=tail->prev;
                tail->next=NULL;
                delete temp;
            }
        }
    }
    void display()
    {
        if(head==NULL)
            cout<<"\n Empty List.";
        else
        {
            node *temp;
            temp=head;
            cout<<"\n Data is: ";
            while(temp!=NULL)
            {
                cout<<temp->data<<" ";
                temp=temp->next;
            }
        }
    }
};
int main()
{
    double_link l;
    int ch;
    do{
        cout<<"\n Choose from the menu below:";
        cout<<"\n 1.Insert at beginning.";
        cout<<"\n 2.Insert at end.";
        cout<<"\n 3.Delete from beginning.";
        cout<<"\n 4.Delete from end.";
        cout<<"\n 5.Display";
        cout<<"\n 6.Exit.";
        cout<<"\n Enter your choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1:l.insertb();
                break;
            case 2:l.inserte();
                break;
            case 3:l.delb();
                break;
            case 4:l.dele();
                break;
            case 5:l.display();
                break;
        }
    }while(ch!=6);
    return 0;
}
