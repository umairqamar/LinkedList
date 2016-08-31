#include<iostream>
using namespace std;
#include "linked_list.h" // class's header file

linked_list::linked_list()
{
	head_ptr=NULL;
	tail_ptr=NULL;
}

bool linked_list::isempty()
{
	if (head_ptr==NULL)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}

linked_list::size_t linked_list::list_length()
{
	const node *cursor;
	size_t count=0;
	
	for(cursor=head_ptr;cursor!=NULL;cursor->getLink())
	{
		count++;
	}
	return count;	
	
}

void linked_list::head_insert(node::value_type& entry)
{
	/**FROM SLIDES***********
	node *insert_ptr;
	insert_ptr=new node;
	insert_ptr->setData(entry);
	insert_ptr->setLink(head_ptr);
	head_ptr=insert_ptr;
	*/
	
	/* FROM LECTURES
	node *n=new node(entry,NULL);
	n->setData(entry);
	n->setLink(head_ptr);
	*/	
	
	/*******SIMPLIFIED*********/
	head_ptr=new node(entry,head_ptr);
}

void linked_list::display()const
{
	node *temp=head_ptr;
	while(temp!=NULL)
	{
		temp->getData();
		temp=temp->getLink();
		cout<<temp->getData();
	}
	
}

void linked_list::delete_head()
{
	node *remove_ptr=head_ptr;
	head_ptr=remove_ptr->getLink(); //Change the place where head_ptr is pointing
	delete remove_ptr;
	
}

node *linked_list::search(node::value_type target)
{
	node *search_ptr=head_ptr;
	while(search_ptr!=NULL)
	{
		if(search_ptr->getData()==target)
		{
			return search_ptr;
			search_ptr=search_ptr->getLink();
		}
		else
		{
			cout<<"Target not found"<<endl;
			return search_ptr;
		}
		
	}
}

void linked_list::search()
{
	node::value_type target;
	cout<<"Enter Search item: ";
	cin>>target;
	
	node *search_ptr=head_ptr;
	while(search_ptr!=NULL)
	{
		if(search_ptr->getData()==target)
		{
			cout<<"Target found: "<<search_ptr;
			search_ptr=search_ptr->getLink();
		}
		else
		{
			cout<<"Target not found"<<endl;
			
		}
		
	}
}

void linked_list::remove_target(node::value_type target)
{
	node *temp=search(target);
	if (temp==NULL)
	{
		cout<<"Target not found";
	}
	else
	{
		node *previous=head_ptr;
		node *temp=NULL;
		for(temp=head_ptr;temp!=NULL;temp=temp)
		{
			if(temp->getData()==target)
			{
				previous->setLink(temp->getLink());
				delete temp;
				break;
			}
			previous=temp;
		}
	}
}
