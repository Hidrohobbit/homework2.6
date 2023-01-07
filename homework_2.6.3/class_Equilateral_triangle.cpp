#include "class_Equilateral_triangle.h"

bool Equilateral_triangle::bool_check()
{
    if (Triangle::bool_check())
    {
        if ((sides_A == sides_B) && (sides_A == sides_C) && (sides_B == sides_C) && (angle_A == angle_B) && (angle_A == angle_C) && (angle_B == angle_C)) //Проверка на равенство углов 60 не требуется, 180/3 == 60. 
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}
Equilateral_triangle::Equilateral_triangle(int sides_A, int sides_B, int sides_C, int angle_A, int angle_B, int angle_C) : Triangle(sides_A, sides_B, sides_C, angle_A, angle_B, angle_C)
{
	name = "Равносторонний треугольник";
}
