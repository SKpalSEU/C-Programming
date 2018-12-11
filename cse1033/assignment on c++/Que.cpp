#include<iostream>
#include<cstdlib>
using namespace std ;

class set
{
	public:
	int data ;
	set *next ;
};

set *head = NULL, *tail = NULL ;
set *set1()
{
	set *n ;
	n = new set() ;
	n->next = NULL ; 
	return n ;
}

void addtail(int x)      //tail in head out
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

void delete_Front()
{
	if(head == NULL)
	{
		cout << " set is empty\n " ;
		return ;
	}
	set *temp ;
	temp = head;
	head = head->next ;
	free(temp) ;
}

void print()
	{
			set *temp ;
	
			if(head == NULL)
				cout << " set is empty\n " ;
			else
			{	
				temp = head;
				cout << " Now the set is: " ;
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
	addtail(10) ;
	addtail(11) ;
	addtail(12) ;
	addtail(13) ;
	addtail(14) ;
	
	print() ;
	delete_Front() ;
	delete_Front() ;
	print() ;
}


