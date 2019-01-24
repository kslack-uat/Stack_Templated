// Stack_Templated.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Stack_Templated.h"

using namespace std;

int main()
{
	// Here is where the official type is designated. It is designated by the developer using your class/library.
	Stack<int>* stack_on_heap = new Stack<int>();
	stack_on_heap->Push(5);

	int peek_result = stack_on_heap->Peek();
	cout << "Peek Result = " << peek_result << endl;

	int pop_result = stack_on_heap->Pop();
	cout << "Pop Result = " << pop_result << endl;

	int empty_pop_result = stack_on_heap->Pop();
	cout << "Empty Pop Result should be NULL. It's value actually is " << empty_pop_result << endl;

	stack_on_heap->Push(5);
	stack_on_heap->Push(4);
	stack_on_heap->Push(3);
	stack_on_heap->Push(2);
	stack_on_heap->Push(1);



	// Stack with a different type of data. Is it truly generic???
	Stack<char> char_stack_stack = Stack<char>();
	char_stack_stack.Push('e');
	char_stack_stack.Push('d');
	char_stack_stack.Push('c');
	char_stack_stack.Push('b');
	char_stack_stack.Push('a');
}

