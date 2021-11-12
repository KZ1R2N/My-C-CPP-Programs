#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

struct node{
    int num;
    node *next;
}*startnode=NULL;



void insert1ST(char data)
{
    node *temp, *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    if (newnode==NULL)
    {
        cout<<" MEMORY CAN'T BE ALLOCATED";
    }
    else{
        newnode->num=data;
        newnode->next=NULL;
    }
    if(startnode==NULL)
    {
        startnode=newnode;
        cout<<"\n\nNODE INSERTED SUCCESSFULLY AT 1ST";
    }
    else
    {
        temp=startnode;
        startnode=newnode;
        newnode->next=temp;
    }
}



void insertlast(char data)
{

    node *newnode, *a=startnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {

            cout<<" MEMORY CAN'T BE ALLOCATED";
    }
    else{
        newnode->num=data;
        newnode->next=NULL;
    }
    if(startnode==NULL)
    {
        startnode=newnode;
        cout<<"\n\nNODE INSERTED SUCCESSFULLY AT LAST";
    }
    else
    {
        while(a->next!=NULL)
            a=a->next;
        a->next=newnode;
    }
}



void insertmid(int position,char data)
{
    node *newnode,*a=startnode;
    newnode= (struct node*)malloc(sizeof(struct node));
if(newnode==NULL)
    {

            cout<<" MEMORY CAN'T BE ALLOCATED";
    }
    else{
        newnode->num=data;
        newnode->next=NULL;
    }
    for(int i=1; i<position; i++)
    {
        a=a->next;
        if(a==NULL)
            cout<<"LESS THAN"<<position<< "NODES IN THE LIST...!!!";
    }
    newnode->next=a->next;
    a->next=newnode;
    cout<<"\n\nNODE INSERTED SUCCESSFULLY";

}





void display()
{
    node *tmp;
    if(startnode==NULL)
    {
        cout<<" LIST IS EMPTY...!\n\n\n";

    }
    else{

        tmp = startnode;
        while(tmp != NULL)
        {
            printf("\n\n DATA =  %x     %s     %x \n",tmp,tmp->num,tmp->next);
            tmp = tmp->next;
        }
    }
}



int main()
{
    int n,x;
    int c,position;
    char data;
    cout<<"\n ENTER NUMBER OF NODES:   ";
    cin>>n;
    cout<<"\n\nDATA ENTERED ON LIST : \n";
    display();
    while(c!=5)
    {
        cout<<"\n\n 1. INSERT IN 1ST\n";
        cout<<" 2. INSERT IN LAST\n";
        cout<<" 3. INSERT IN MIDDLE\n";
        cout<<" 4. DISPLAY\n";
        cout<<" 5.EXIT\n";
        cout<<"CHOOSE OPTION :  ";
        cin>>c;
        switch(c)
        {
        case 1:
            {
               cout<<"\n ENTER DATA: ";
            cin>>data;
            insert1ST(data);
            break;
            }

            case 2:
            {
               cout<<"\n ENTER DATA: ";
            cin>>data;
            insertlast(data);
            break;
            }

            case 3:
            {
               cout<<"\n ENTER DATA:  ";
            cin>>data;
            cout<<"\n ENTER POSITION:  ";
            cin>>position;
            insertmid(position,data);
            break;
            }


            case 4:
            {
            display();
            break;
            }
            case 5:
            {
              cout<<"EXIT";
            break;
            }

        }
    }
    return 0;

}