#include<iostream>
#include<cstdlib>
using namespace std ;

class set
{
	private:
		int data ;
		set *next ;
		set *head = NULL, *tail = NULL ;
	public:
		set *set1()
		{
			set *n = new set() ;
			n->next = NULL ;
			return n ;
		}
		void push(int x)              //last in last out
		{
			set *set2 ;
	
			set2 = set1() ;
			set2->data = x ;
	
			if(head == NULL)
			{
				head = set2 ;
				tail = head ;
			}
			
			else
			{
				tail->next = set2 ;
				tail = set2 ;
			}
		}

		void deletetail()
		{
			set *temp,*t ;
			if(head == NULL)
			{
				cout << "list is empty\n" ;
			}
			
			else
			{
				temp = head ;
				while(temp->next !=NULL)
				{
					t = temp ;
					temp=temp->next ;
				}
				
				t->next=NULL ;
				free(temp) ;
				tail = t ;
			}
		}

		void visit()
		{
			set *temp ;
	
			if(head == NULL)
				cout << "list is empty\n" ;
			else
			{	
				temp=head;
				while(temp!=NULL)
				{
					cout << temp->data << " " ;
					temp = temp->next ;
				}
				cout << endl ;
			}
		}

};

int main()
{
	set list;
		
	list.push(10);
	list.push(12);
	list.push(14);
	list.push(16);
	list.push(18);
	list.push(20);
	list.push(22);
	list.visit();

	list.deletetail();
	list.deletetail();
	list.deletetail();
	list.deletetail();
    list.visit();
}
