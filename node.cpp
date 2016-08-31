#include<iostream>
using namespace std;
#include "node.h" // class's header file
/*
node::node(const value_type &init_data,node *init_link)	
{
	data=init_data;
	init_link=init_link;
}
*/
void node::setData(const value_type new_data)
{
	data=new_data;
}

void node::setLink(node *new_link)
{
	link=new_link;
}

node::value_type node::getData()const
{
	return data;
}

node const* node::getLink()const
{
	return link;
}

node* node::getLink()
{
	return link;
}
