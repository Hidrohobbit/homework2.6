#pragma once
#include "class_Figure.h"

class Triangle : public Figure
{
public:
	void print_info() override;
	Triangle(int sides_A, int sides_B, int sides_C, int angle_A, int angle_B, int angle_C);
protected:
	std::string figure_info();
	bool bool_check() override;

	int sides_A;
	int sides_B;
	int sides_C;

	int angle_A;
	int angle_B;
	int angle_C;
};