#include<iostream>
#include<cstdlib>
using namespace std ;

class set
{
	public:
	int data ;
	set *next ;
};

set *head = NULL,*end = NULL ;
set *set1()
{
	set *n;
	n = new set() ;
	n->next = NULL ;
	return n;
}
int size=0 ;
void add_head(int y)
{                                                //add head add tail
	set *set2;                              //delete head delete tail
	set2 = set1() ;
	set2->data = y ;
	set *temp ;
	temp = head ;
	head = set2 ;
	set2->next = temp ;
	size++ ;
}

   void add_tail(int y)
   {
			set *set2 ;
			set2 = set1() ;
			set2->data = y ;
	
			if(head == NULL)
			{
				head = set2 ;
				end = set2 ;
			}
			else
			{
				end->next = set2 ;
				end = set2 ;
			}
			size++ ;
		}
		
		void delete_head()
		{
	if(head == NULL)
	{
		cout << " set is empty\n " ;
		return ;
	}
	
	set *temp ;
	temp = head ;
	head = head->next ;
	
	free(temp) ;
} 
      
      void delete_tail()
	  {
			set *temp,*t ;
			if(head == NULL)
			{
				cout<<" set is empty\n " ;
	        }
			
			else
			{
				temp = head ;
				while(temp->next != NULL)
				{
					t = temp;
					temp = temp->next ;
				}
				
				t->next = NULL ;
				end = t ;
				free(temp) ;
			}
		}
		    
		    void front()
			{
		    	cout << head->data << endl ;
			}
			
			void back()
			{
				cout << end->data << endl ;
			}
			
			void SIZE ()
			{
				cout << size-1 << endl ;
			}
			
			void print()
		{
			set *temp ;
   			if(head == NULL)
			cout << " set is empty\n" ;
			
			else
			{	
				temp = head;
				cout<<"Now the current set is: " ;
				while(temp != NULL)
				{
					cout << temp->data << " " ;
					temp = temp->next ;
				}
				cout << endl ;
			}
		}
			
int main()
{
	add_head(10) ;
	add_head(11) ;
	add_head(12) ;
	print() ;
	front() ;
	delete_tail() ;
	add_tail(35) ;
	add_tail(15) ;
	print();
	SIZE();
	
	return 0;
}
