#include <iostream> 

using namespace std; 

struct node{ 
    int data; 
    node *next; 
}; 

class sll{ 

    node *temp,*head,*temp1; 

public: 

  void create(); 
  void display(); 
  void del_first();
  void del_bet();
  
}; 

void sll::create() 

{ 
  head=NULL; 
  char ch; 
  do{ 
  temp=new node; 
  cout<<"enter data  "; 
  cin>>temp->data; 
  temp->next=NULL;
  if(head==NULL) 
  { 
   head=temp; 
   temp1=head; 
  } 
  else 
  { 
   while(temp1->next!=NULL) 
      temp1=temp1->next; 

   temp1->next=temp; 
  }
  cout<<"do u want enter more nodes "; 
  cin>>ch; 
  }while(ch=='y'); 

} 

void sll::display() 
{ 
    for(temp=head;temp!=NULL;temp=temp->next) 
    cout<<temp->data<<"->"; 
} 


void sll::del_first()
{
	temp=head;
	head=head->next;
	temp->next=NULL;
	delete temp;
	cout<<"\nHead node is deleted ";
	
}

void sll::del_bet()
{
	cout<<"\nEnter the element which you want to be deleted: ";
	int value;
	
	cin>>value;
	temp=head;
	while(temp1->data!=NULL)
	{
		if(temp1->data==value)
		{
		   temp->next=temp1->next;
		   delete temp1;
		   break;	
		}
		temp=temp->next;
		temp1=temp1->next;
	}
}

int main() 
{
   sll s; 
   s.create(); 
   s.display();
   cout<<endl;
   s.del_first();
   s.display();
   cout<<endl;
   s.del_bet();
   s.display();
   return 0; 
} 
