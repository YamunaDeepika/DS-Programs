#include <iostream>
#include<stdlib.h>
using namespace std;
class dll
{
struct list
{
int data;
struct list *next;
struct list *prev;
}*head;
public : 
typedef struct list node;
dll();
void create();
void insert();
void display();
void deletepos();
void insertatbeg();
void insertatmid();
void insertatend();
void search();
};
dll :: dll()
{
head=NULL;
}
int main()
{
int ch;
dll obj;
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
case 4: obj.deletepos();
break;
case 5: obj.search();
break;
case 6: exit(0);
}
}while(ch>0&&ch<7);
}
void dll :: create()
{
node *temp,*p;
temp=new node;
cout << "Enter the element : ";
cin >> temp->data;
if(head==NULL)
{
temp->prev=head;
temp->next=head;
head=temp;
}
else
{
p=head;
while(p->next!=NULL)
p=p->next;
temp->next=NULL;
temp->prev = p;
p->next=temp;
}
}
void dll :: display()
{
node *q;
q=head;
cout << "\n Elements in the list are : ";
while(q!=NULL)
{
cout << "->" << q->data;
q=q->next;
}
}
void dll :: insert()
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
void dll :: insertatbeg()
{
node *temp;
temp=new node;
cout << "Enter the Inserted element : ";
cin >> temp->data;
temp->next=head;
temp->prev=NULL;
head->prev=temp;
head = temp;
}
void dll :: insertatmid()
{
int key;
node *temp,*p;
temp=new node;
cout << "Enter the key element : ";
cin >> key;
cout << "Enter the element : ";
cin >> temp->data;
p=head;
while(p!=NULL)
{
if(p->data == key)
{
p->next->prev=temp;
temp->next=p->next;
p->next=temp;
temp->prev=p;
}
p=p->next;
}
}
void dll :: insertatend()
{
node *temp,*p;
temp=new node;
cout << "Enter the element :";
cin >> temp->data;
if(head==NULL)
{
temp->prev=head;
temp->next=head;
head=temp;
}
else
{
p=head;
while(p->next!=NULL)
p=p->next;
temp->next=NULL;
temp->prev=p;
p->next=temp;
}
}
void dll :: deletepos()
{
node *p,*t,*q;
int pos,i;
cout << " Enter the position you want to delete ";
cin >> pos;
if(head!=NULL)
{
if(pos==1)
{
t=head;
head=head->next;
head->prev=NULL;
cout << t->data << "is successfully deleted";
delete (t);
}
else
{
i=1;
p=head;
q=head;
while(i<pos)
{
q=p;
p=p->next;
i++;
}
t=p;
q->next=p->next;
p->next->prev=q;
cout << t->data << "successflly deleted ";
delete (t);
}
}
else
cout << "\n\t LIST IS EMPTY ";
}
void dll :: search()
{
int f=0,k,v,c;
node *p;
p=head;
c=0;
cout << "Enter the element you want to found : ";
 cin >> k;
while(p!=NULL)
{
c++;
if(p->data==k)
{
f=1;
cout << "Element found at " << c;
}
p=p->next;
}
if(f==0)
{
cout << "Element not found";
}
}
#DS-Programs
