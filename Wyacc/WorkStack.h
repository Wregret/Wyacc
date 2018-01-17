#pragma once
#include<vector>
#include"LRItem.h"
#include"TableItem.h"
#include"ParsingTable.h"
using namespace std;
class WorkStack
{
	vector<LRItem> stack;
	ParsingTable table;
public:
	WorkStack();
	~WorkStack();
	void push(char);
	void reduce(int);
	LRItem top();
	bool accept=false;
	vector<int>reductionSequence;
};

