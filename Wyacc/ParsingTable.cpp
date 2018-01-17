#include "ParsingTable.h"
#include <iostream>
using std::cerr;


ParsingTable::ParsingTable()
{
}


ParsingTable::~ParsingTable()
{
}

TableItem ParsingTable::query(int state, char c)
{
	switch (state)
	{
	case 0:
	{
		if (c == '{')return TableItem(2, 2);
		if (c == 'S')return TableItem(2, 1);
		else{ cerr << "syntax error!"; exit(0);}
		break;
	}
	case 1:
	{
		if (c == '$')return TableItem(3, 1);
		else{ cerr << "syntax error!"; exit(0);}
		break;
	}
	case 2:
	{
		if (c == 'i')return TableItem(2, 4);
		if (c == 'R')return TableItem(2, 3);
		else{ cerr << "syntax error!"; exit(0);}
		break;
	}
	case 3:
	{
		if (c == '}')return TableItem(2, 5);
		if (c == ',')return TableItem(2, 6);
		else{ cerr << "syntax error!"; exit(0);}
		break;
	}
	case 4:
	{
		if (c == ':')return TableItem(2, 7);
		else{ cerr << "syntax error!"; exit(0);}
		break;
	}
	case 5:
	{
		if (c == '$')return TableItem(1, 1);
		else{ cerr << "syntax error!"; exit(0);}
		break;
	}
	case 6:
	{
		if (c == 'i')return TableItem(2, 9);
		if (c == 'R')return TableItem(2, 8);
		else{ cerr << "syntax error!"; exit(0);}
		break;
	}
	case 7:
	{
		if (c == '{')return TableItem(2, 13);
		if (c == 'i')return TableItem(2, 11);
		if (c == '[')return TableItem(2, 14);
		if (c == 'S')return TableItem(2, 12);
		if (c == 'A')return TableItem(2, 10);
		else{ cerr << "syntax error!"; exit(0);}
		break;
	}
	case 8:
	{
		if (c == '}')return TableItem(1, 2);
		if (c == ',')return TableItem(2, 6);
		else{ cerr << "syntax error!"; exit(0);}
		break;
	}
	case 9:
	{
		if (c == ':')return TableItem(2, 7);
		else{ cerr << "syntax error!"; exit(0);}
		break;
	}
	case 10:
	{
		if (c == '}')return TableItem(1, 3);
		if (c == ',')return TableItem(1, 3);
		else{ cerr << "syntax error!"; exit(0);}
		break;
	}
	case 11:
	{
		if (c == '}')return TableItem(1, 4);
		if (c == ',')return TableItem(1, 4);
		else{ cerr << "syntax error!"; exit(0);}
		break;
	}
	case 12:
	{
		if (c == '}')return TableItem(1, 5);
		if (c == ',')return TableItem(1, 5);
		else{ cerr << "syntax error!"; exit(0);}
		break;
	}
	case 13:
	{
		if (c == 'i')return TableItem(2, 4);
		if (c == 'R')return TableItem(2, 15);
		else{ cerr << "syntax error!"; exit(0);}
		break;
	}
	case 14:
	{
		if (c == '{')return TableItem(2, 17);
		if (c == 'O')return TableItem(2, 16);
		else{ cerr << "syntax error!"; exit(0);}
		break;
	}
	case 15:
	{
		if (c == '}')return TableItem(2, 18);
		if (c == ',')return TableItem(2, 6);
		else{ cerr << "syntax error!"; exit(0);}
		break;
	}
	case 16:
	{
		if (c == ',')return TableItem(2, 20);
		if (c == ']')return TableItem(2, 19);
		else{ cerr << "syntax error!"; exit(0);}
		break;
	}
	case 17:
	{
		if (c == 'i')return TableItem(2, 9);
		if (c == 'R')return TableItem(2, 21);
		else{ cerr << "syntax error!"; exit(0);}
		break;
	}
	case 18:
	{
		if (c == '}')return TableItem(1, 1);
		if (c == ',')return TableItem(1, 1);
		else{ cerr << "syntax error!"; exit(0);}
		break;
	}
	case 19:
	{
		if (c == '}')return TableItem(1, 6);
		if (c == ',')return TableItem(1, 6);
		else{ cerr << "syntax error!"; exit(0);}
		break;
	}
	case 20:
	{
		if (c == '{')return TableItem(2, 23);
		if (c == 'O')return TableItem(2, 22);
		else{ cerr << "syntax error!"; exit(0);}
		break;
	}
	case 21:
	{
		if (c == '}')return TableItem(2, 24);
		if (c == ',')return TableItem(2, 6);
		else{ cerr << "syntax error!"; exit(0);}
		break;
	}
	case 22:
	{
		if (c == ',')return TableItem(2, 25);
		if (c == ']')return TableItem(1, 7); 
		else{ cerr << "syntax error!"; exit(0);}
		break;
	}
	case 23:
	{
		if (c == 'i')return TableItem(2, 9);
		if (c == 'R')return TableItem(2, 26);
		else{ cerr << "syntax error!"; exit(0);}
		break;
	}
	case 24:
	{
		if (c == ']')return TableItem(1, 8);
		if (c == ',')return TableItem(1, 8);
		else{ cerr << "syntax error!"; exit(0);} 
		break;
	}
	case 25:
	{
		if (c == '{')return TableItem(2, 28);
		if (c == 'O')return TableItem(2, 27);
		else{ cerr << "syntax error!"; exit(0);}
		break;
	}
	case 26:
	{
		if (c == '}')return TableItem(2, 29);
		if (c == ',')return TableItem(2, 6);
		else{ cerr << "syntax error!"; exit(0);}
		break;
	}
	case 27:
	{
		if (c == ',')return TableItem(2, 30);
		if (c == ']')return TableItem(2, 30); 
		else{ cerr << "syntax error!"; exit(0);}
		break;
	}
	case 28:
	{
		if (c == 'i')return TableItem(2, 4);
		if (c == 'R')return TableItem(2, 31);
		else{ cerr << "syntax error!"; exit(0);}
		break;
	}
	case 29:
	{
		if (c == ',')return TableItem(1, 8);
		if (c == ']')return TableItem(1, 8);
		else{ cerr << "syntax error!"; exit(0);}
		break;
	}
	case 30:
	{
		if (c == '{')return TableItem(2, 28);
		if (c == 'O')return TableItem(2, 27);
		else{ cerr << "syntax error!"; exit(0);}
		break;
	}
	case 31:
	{
		if (c == '}')return TableItem(2, 29);
		if (c == ',')return TableItem(2, 6);
		else{ cerr << "syntax error!"; exit(0);}
		break;
	}
	default:
		cerr << "syntax error!"; exit(0);
	}
}
