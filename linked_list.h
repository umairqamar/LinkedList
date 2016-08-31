#include"node.h"
class linked_list
{
	public:
		//TYPEDEF
		typedef int size_t;
		
		//CONSTRUCTOR
		linked_list();
		
		 //MEMBER FUNCTIONS
		 bool isempty();
		 size_t list_length();
		 void head_insert(node::value_type& entry);
		 void display()const;
		 
		 void delete_head();
		 void remove_target(node::value_type target);
		 
		 node* search(node::value_type target);
		 void search();
		 
	private:
		node *head_ptr;	//to keep track of first node
		node *tail_ptr; //to keep track of last node
	
};


