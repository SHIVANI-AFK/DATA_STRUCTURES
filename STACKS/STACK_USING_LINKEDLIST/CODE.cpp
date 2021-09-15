#include<iostream>
using namespace std;

class node{
	public:
	int info;
	node*next;
};
class Stack{
	node*top;
	node*temp;
	
	public:
		Stack()
		{
			top==NULL;
		}
		
	void Push(int);
	int Pop();
	void ClearStack();
	bool IsEmpty();
	void TopEl();
	void Size();
	void display();  
};

int main()
{
	Stack ob; 
	int ch,ele,b; char c;
	do{
		cout<<"MENU"<<endl;
		cout<<"1. Push element"<<endl;
		cout<<"2. Pop element"<<endl;
		cout<<"3. Find the top element"<<endl;
		cout<<"4. Size of stack"<<endl;
		cout<<"5. Clear stack"<<endl;
		cout<<"6. Display Stack"<<endl;
		cout<<"7. Exit"<<endl;
		cout<<"Enter choice(1-7)"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1: {
				cout<<"Enter the element you wish to push in stack: ";
				cin>>ele;
				ob.Push(ele);
				ob.display();				
				break;
			}
			case 2: {
				b=ob.Pop();
				if(b!=-1)
				cout<<"The element you popped: "<<b<<endl;
				ob.display();
				break;
			}
			case 3: {
				ob.TopEl();
				break;
			}
			case 4: {
				ob.Size();
				break;
			}
			case 5: {
				ob.ClearStack();
				break;
			}
			case 6: {
				ob.display();
				break;
			}
			case 7: {
				cout<<"Aborting!"<<endl;
				exit(1);
				break;
			}
			default: {
				cout<<"Invalid Choice"<<endl;
				break;
			}
		}
		
		cout<<"Do you wish to continue(Y/N)?"<<endl;
		cin>>c;
		
	}while(c=='y'||c=='Y');
	
	return 0;
}

void Stack::Push(int ele)
{
	temp=new node;
	temp->info=ele;
	temp->next=NULL;
	if(top==NULL)
	{
		top=temp;
	}
//	if(IsEmpty()==true)
//	cout<<"Stack is empty"<<endl;
else{
	temp->next=top;
	top=temp;}
}

int Stack::Pop()
{
	if(IsEmpty()==true)
	cout<<"Stack is Empty!"<<endl;
	else{
		temp=top;
		top=top->next;
		delete temp;
	}
}
bool Stack::IsEmpty()
{
	if(top==NULL)
	return true;
    else return false;
}
void Stack::display(){
	temp=top;
	while(temp!=NULL)
	{   cout<<temp->info;
	    if(temp->next!=NULL)
	    cout<<" --> ";
		temp=temp->next;
	}
	cout<<endl;
}

void Stack::TopEl()
{  if(IsEmpty()==true)
   cout<<"The stack is empty!"<<endl;
   else{
   cout<<"The topmost element of the stack is: ";
   cout<<top->info<<endl;
}
}

void Stack::Size()
{   int ctr=0;
	temp=top;
	while(temp!=NULL)
	{
		ctr++;
		temp=temp->next;
	}
	cout<<"The size of the Stack is: "<<ctr<<endl;	
}
void Stack::ClearStack()
{
	while(top!=NULL)
	Pop();
	display();
}
