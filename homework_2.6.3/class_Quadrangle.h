#pragma once

#include "class_Figure.h"

class Quadrangle : public Figure
{
public:
	void print_info() override;
	Quadrangle(int sides_A, int sides_B, int sides_C, int sides_D, int angle_A, int angle_B, int angle_C, int angle_D);
protected:
	bool bool_check() override;
	std::string figure_info();
	
    int sides_A;
    int sides_B;
    int sides_C;
    int sides_D;

    int angle_A;
    int angle_B;
    int angle_C;
    int angle_D;
};