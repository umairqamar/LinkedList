
class node
{
	public:
		//TYPEDEF
		typedef int value_type;
		
		//CONSTRUCTOR
		//node(const value_type &init_data,node *init_link);	
		
		// CONSTRUCTOR FROM SLIDES
		node(
	    const value_type& init_data = value_type( ),
	    node* init_link = NULL
		)
		{ data = init_data; link = init_link; }

		
		// Member functions to set the data and link fields:
		void setData(const value_type new_data);
		void setLink(node *new_link);
		
		// Constant member function to retrieve the current data:
		value_type getData()const;
		
		// Two slightly different member functions to retrieve
		// the current link:
		// NOTE:
		//   Some of the functions have a return value which is a pointer to a node.
		//   Each of these  functions comes in two versions: a non-const version (where
		//   the return value is node*) and a const version (where the return value
		//   is const node*). 
	
		const node* getLink()const;
		node* getLink();
	private:
	
		value_type data;
		node *link;
};



