#include <iostream>
#include<stdlib.h>
using namespace std;
class cll
{
struct list
{
int data;
struct list *next;
}*head;
public : 
typedef struct list node;
cll();
void create();
void insert();
void display();
int deletepos();
void insertatbeg();
void insertatmid();
void insertatend();
void search();
};
cll :: cll()
{
head=NULL;
}
int main()
{
int ch,k;
cll obj;
do
{
cout << "\n\t MAINMENU \n";
cout << "\n\t \t1.create\n\t\t2.display\n\t\t3.insert\n\t\t4.deletepos\n\t\t5.search\n\t\t6.exit\n";
cout << "Enter your choice :";
cin >> ch;
switch(ch)
{
case 1: obj.create();
break;
case 2: obj.display();
break;
case 3: obj.insert();
break;
case 4: k=obj.deletepos();
cout << "\ndeleted element from list is : " << k;
break;
case 5: obj.search();
break;
case 6: exit(0);
}
}while(ch>0&&ch<7);
}
void cll :: create()
{
node *temp,*p;
temp=new node;
cout << "Enter the element : ";
cin >> temp->data;
if(head==NULL)
{
temp->next=temp;
head=temp;
}
else
{
p=head;
while(p->next!=head)
p=p->next;
p->next=temp;
temp->next=head;
}
}
void cll :: display()
{
node *q;
q=head;
cout << "\n Elements in the list are : ";
do
{
cout << "->" << q->data;
q=q->next;
}while(q!=head);
cout << "List is empty";
}
void cll :: insert()
{
int ch;
do
{
cout << "\n\t\t1.insertatbeg\n\t\t2.insertatmid\n\t\t3.insertatend\n\t\t4.display\n\t\t5.exit";
cout << "Enter your choice : ";
cin >> ch;
switch(ch)
{
case 1: insertatbeg();
break;
case 2: insertatmid();
break;
case 3: insertatend();
break;
case 4: display();
break;
case 5: exit(0);
}
}while(ch>0&&ch<6);
}
void cll :: insertatbeg()
{
node *temp,*p;
temp=new node;
cout << "Enter the Inserted element : ";
cin >> temp->data;
p=head;
while(p->next!=head)
p=p->next;
p->next=temp;
temp->next=head;
head = temp;
}
void cll :: insertatmid()
{
int key;
node *temp,*p;
temp=new node;
cout << "Enter the key element : ";
cin >> key;
cout << "Enter the element : ";
cin >> temp->data;
p=head;
do 
{
if(p->data == key)
{
temp->next=p->next;
p->next=temp;
}
 else
p=p->next;
}while(p!=head);
}
void cll :: insertatend()
{
node *temp,*p;
temp=new node;
cout << "Enter the element :";
cin >> temp->data;
if(head==NULL)
{
temp->next=temp;
head=temp;
}
else
{
p=head;
while(p->next!=head)
p=p->next;
p->next=temp;
temp->next=head;
}
}
int cll :: deletepos()
{
node *p,*p1;
int pos,i,k;
cout << " Enter the position you want to delete ";
cin >> pos;
p=head;
if(p->data==pos)
{
p1=p->next;
if(p1==p)
{
p=NULL;
head = p;
}
else
{
while(p->next!=head)
{
if(p->next->data==pos)
{
p1=p->next;
p->next=p1->next;
p1->next=NULL;
delete p1;
}
else
p=p->next;
}
}
cout << "List is empty";
}
}
void cll :: search()
{
int f=0,k;
node *p;
p=head;
cout << "Enter the element you want to found : ";
 cin >> k;
do
{
if(p->data==k)
{
f=1;
cout << "Element found";
}
p=p->next;
}while(p!=head);
if(f==0)
{
cout << "Element not found";
}
}
#DS-Programs
