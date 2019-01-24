#pragma once

// Note how I have to declare/define my templated data type for the scope that it will be used.
template <typename generic_type>
class StackNode
{
public:
	generic_type = data;
	StackNode* next;

	StackNode()
	{
		data = NULL;
		next = nullptr;
	}

	StackNode(generic_type init_data, StackNode* init_next)
	{
		data = init_data;
		next = init_next
	}

	// One thing you will probably notice is that I am not following standard C++ professional programming practice. Or at least it looks that way.
	// Typically, you declare your variables and functions in the header file, and then the implementation is in the .cpp file. This is how it is done
	// UNLESS you are using templates. Templates don't work when declaration and implementation are in different files. It causes linking errors. The
	// way we get around this is to keep them together. This is the professional practice when using templates.
};

template <typename generic_type>	// Note how I need to redeclare the templated type for the next class (different scope/context).
class Stack
{
public:

private:
	StackNode
};


