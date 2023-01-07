#include "class_Rectangular_triangle.h"

bool Rectangular_triangle::bool_check()
{
    if (Triangle::bool_check())
    {
        if (angle_C == 90)
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
Rectangular_triangle::Rectangular_triangle(int sides_A, int sides_B, int sides_C, int angle_A, int angle_B, int angle_C) : Triangle(sides_A, sides_B, sides_C, angle_A, angle_B, angle_C)
{
	name = "Прямоугольный треугольник";
}
