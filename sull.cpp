#include<iostream>
 #include<stdlib.h>
 using namespace std;
 class SULL
 {
 struct stack
 {
 int data;
 struct stack *next;
 }*top;
 typedef struct stack node;
 public :
 void push();
 int pop();
 void display();
 SULL();
 };
 SULL :: SULL()
 {
 top=NULL;
 }
 int main()
 {
 SULL obj;
 int ch,k;
 while(1)
 {
 cout<<"\n\t MAIN MENU \n";
 cout<<"\n\t 1.PUSH \n\t 2.POP \n\t 3.DISPLAY \n\t 4.EXIT\n";
 cout<<"Enter your choice ";
 cin>>ch;
 switch(ch)
 {
 case 1 : obj.push();
      break;
 case 2 : k=obj.pop();
      cout<<"\n deleted element from the queue is :"<<k;
      break;
 case 3 : obj.display();
      break;
 case 4 : exit(0);
 default : cout<<"\n\t enter correct option ";
      break;
 }
 }
 }
 void SULL::push()
 {
 node *temp;
 int element;
 temp=new node;
 cout<<"Enter the inserted element in to the stack:\n";
 cin>>element;
 temp->data=element;
 temp->next=top;
 top=temp;
 }
 int SULL :: pop()
 {
 int k;
 node *p,*q;
 p=top;
 k=top->data;
 q=top;
 top=p->next;
 free(q);
 return(k);
 }
 void SULL :: display()
 {
 node *p;
 p=top;
 cout<<"\n elements in the stack are \n";
 if(top!=NULL)
 {
 while(p!=NULL)
 {
 cout<<"->"<<p->data;
 p=p->next;
 }
 }
 else
 cout<<"queue is empty";
 }

#DS-Programs
