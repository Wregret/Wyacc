#include<iostream>
#include<fstream>
#include"WorkStack.h"
using namespace std;

int main()
{
	WorkStack stack;
	ifstream input;
	char c;
	int flag;
	input.open("input.txt");
	if (input.is_open())
	{
		do
		{
			input >> c;
			stack.push(c);
		} while (!stack.accept);
		stack.reductionSequence.push_back(0);
		cout << "The reduction sequence is : " << endl;
		for (size_t i = 0; i < stack.reductionSequence.size(); i++)
			cout << stack.reductionSequence[i] << endl;
		input.close();
	}
	else
		cout << "Fail to open input file" << endl;
	return 0;
}