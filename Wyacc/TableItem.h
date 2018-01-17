#pragma once
class TableItem
{
public:
	int operation;//1 for reduce, 2 for shift, 3 for accept
	int target;
	TableItem(int o, int t)
	{
		operation = o;
		target = t;
	}
};