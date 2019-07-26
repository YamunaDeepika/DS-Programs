#include<iostream>
#include<stdlib.h>
#define MAX 5
int top=-1;
int a[5];
using namespace std;
class sua
{
public : void push();
               void pop();
                void display();
		sua();
};
sua :: sua()
{
top=-1;
}
int main()
{
sua obj;
int choice;
while(1)
{
cout << "\n\t\t1.push\n\t\t2.pop\n\t\t3.display\n\t\t4.quit\n";
cout << "Enter your choice :";
cin >> choice;
switch(choice)
{
case 1: obj.push();
break;
case 2: obj.pop();
break;
case 3: obj.display();
break;
case 4: exit(1);
default : cout << "Wrong choice ";
}
}
}
void sua :: push()
{
int pusheditem;
if(top==(MAX-1))
cout  << "Stack overflow\n";
else
cout << "Enter the element to be pushed in stack :";
cin >> pusheditem;
top=top+1;
a[top]=pusheditem;
}
void sua :: display()
{
int i;
if(top==1)
cout << "Stack is empty\n";
else
{
cout << "Stack elements :\n";
for(i=top;i>=0;i--)
cout << a[i] << "\n";
}
}
void sua :: pop()
{
if(top==-1)
cout << "Stack underflow\n";
else
{
cout << "popped element is : \n" << a[top];
top=top-1;
}
}
#DS-Programs
