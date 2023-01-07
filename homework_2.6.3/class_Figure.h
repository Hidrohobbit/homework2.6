#pragma once
#include <string>
#include <iostream>

class Figure
{
public:
	virtual void print_info();
	Figure();
protected:
	virtual bool bool_check();
	int sides_count;
	std::string name;
};