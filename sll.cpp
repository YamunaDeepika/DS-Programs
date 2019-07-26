#include <iostream>
#include<stdlib.h>
using namespace std;
class sll
{
struct list
{
int data;
struct list *next;
}*head;
public : 
typedef struct list node;
sll();
void create();
void insert();
void display();
int deletepos();
void insertatbeg();
void insertatmid();
void insertatend();
void search();
int count();
};
sll :: sll()
{
head=NULL;
}
int main()
{
int ch,k,c;
sll obj;
do
{
cout << "\n\t MAINMENU \n";
cout << "\n\t \t1.create\n\t\t2.display\n\t\t3.insert\n\t\t4.deletepos\n\t\t5.search\n\t\t6.count\n\t\t7.exit\n";
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
case 6: c=obj.count();
cout << "No. of elements in the list are : " << c;
break;
case 7: exit(0);
}
}while(ch>0&&ch<8);
}
void sll :: create()
{
node *temp,*p;
temp=new node;
cout << "Enter the element : ";
cin >> temp->data;
if(head==NULL)
{
temp->next=head;
head=temp;
}
else
{
p=head;
while(p->next!=NULL)
p=p->next;
temp->next=NULL;
p->next=temp;
}
}
void sll :: display()
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
int sll :: count()
{
node *p;
int c=0;
p=head;
while(p!=NULL)
{
p=p->next;
c++;
}
return (c);
}
void sll :: insert()
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
void sll :: insertatbeg()
{
node *temp;
temp=new node;
cout << "Enter the Inserted element : ";
cin >> temp->data;
temp->next=head;
head = temp;
}
void sll :: insertatmid()
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
temp->next=p->next;
p->next=temp;
}
p=p->next;
}
}
void sll :: insertatend()
{
node *temp,*p;
temp=new node;
cout << "Enter the element :";
cin >> temp->data;
if(head==NULL)
{
temp->next=head;
head=temp;
}
else
{
p=head;
while(p->next!=NULL)
p=p->next;
temp->next=NULL;
p->next=temp;
}
}
int sll :: deletepos()
{
node *p;
int pos,i,k;
cout << " Enter the position you want to delete ";
cin >> pos;
if(head!=NULL)
{
if(pos==1)
{
k=head->data;
head=head->next;
return (k);
}
else 
{
i=2;
p=head;
while((p!=NULL) && (i < pos))
{
p=p->next;
i++;
}
if(p!=NULL)
{
k=p->next->data;
p->next=p->next->next;
return (k);
}
}
}
else
cout << "\n\t LIST IS EMPTY ";
}
void sll :: search()
{
int f=0,k;
node *p;
p=head;
cout << "Enter the element you want to found : ";
 cin >> k;
while(p!=NULL)
{
if(p->data==k)
{
f=1;
cout << "Element found";
}
p=p->next;
}
if(f==0)
{
cout << "Element not found";
}
}
#DS-Programs
