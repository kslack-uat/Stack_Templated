#pragma once

// Note how I have to declare/define my templated data type for the scope that it will be used.
template <typename generic_type>
class StackNode
{
public:
	generic_type data;
	StackNode* next;

	StackNode()
	{
		data = NULL;
		next = nullptr;
	}

	StackNode(generic_type init_data)
	{
		data = init_data;
		next = nullptr;
	}

	StackNode(generic_type init_data, StackNode* init_next)
	{
		data = init_data;
		next = init_next;
	}

	// One thing you will probably notice is that I am not following standard C++ professional programming practice. Or at least it looks that way.
	// Typically, you declare your variables and functions in the header file, and then the implementation is in the .cpp file. This is how it is done
	// UNLESS you are using templates. Templates don't work when declaration and implementation are in different files. It causes linking errors. The
	// way we get around this is to keep them together. This is the professional practice when using templates.
};

template <typename generic_type>	// Note how I need to redeclare the templated type for the next class (different scope/context).
class Stack
{
private:
	// In the line below, I need to declare what type is stored in the StackNode. In this case, StackNode will be of type generic_type (whatever has been specified by the coder at implementation time)
	StackNode<generic_type>* top;

public:
	Stack()
	{
		top = nullptr;
	}

	void Push(generic_type push_data)
	{
		// Create a new StackNode to store the data
		StackNode<generic_type>* push_node = new StackNode<generic_type>(push_data);

		if(top == nullptr)	// Stack is empty
		{
			top = push_node;
		}
		else // Stack already has data, add to the top
		{
			push_node->next = top;
			top = push_node;
		}
	}


	generic_type Pop()
	{
		StackNode<generic_type>* pop_node = top;
		if(top != nullptr)
		{
			top = top->next;
		}

		if (pop_node != nullptr)
		{
			return pop_node->data;
		}
		else
		{
			return NULL;
		}
	}


	generic_type Peek()
	{
		if (top != nullptr)
		{
			return top->data;
		}
		else
		{
			return NULL;
		}
	}

};


