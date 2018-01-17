#include "WorkStack.h"



WorkStack::WorkStack()
{
	LRItem item(0, '$');
	stack.push_back(item);
}


WorkStack::~WorkStack()
{
}

void WorkStack::push(char c)
{
	bool ok = false;
	do
	{
		int temp = stack.back().state;
		TableItem doing = table.query(stack.back().state, c);
		switch (doing.operation)
		{
		case 1:
		{
			reduce(doing.target);
			break;
		}
		case 2:
		{
			LRItem item(doing.target, c);
			stack.push_back(item);
			ok = true;
			break;
		}
		case 3:
			accept = true;
			ok = true;
			break;
		}
	} while (!ok);
}

void WorkStack::reduce(int number)
{
	reductionSequence.push_back(number);
	int count = 0;
	switch(number)
	{
	case 1:count = 3; break;
	case 2:count = 3; break;
	case 3:count = 3; break;
	case 4:count = 1; break;
	case 5:count = 1; break;
	case 6:count = 3; break;
	case 7:count = 3; break;
	case 8:count = 3; break;
	}
	for (int i = 0; i < count; i++)
	{
		stack.pop_back();
	}
	switch (number)
	{
	case 1:push('S'); break;
	case 2:push('R'); break;
	case 3:push('R'); break;
	case 4:push('A'); break;
	case 5:push('A'); break;
	case 6:push('A'); break;
	case 7:push('O'); break;
	case 8:push('O'); break;
	}
}

LRItem WorkStack::top()
{
	return stack.back();
}