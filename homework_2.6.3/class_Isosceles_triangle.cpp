#include "class_Isosceles_triangle.h"

bool Isosceles_triangle::bool_check()
{
    if (Triangle::bool_check())
    {
        if ((sides_A == sides_C) && (angle_A == angle_C))
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
Isosceles_triangle::Isosceles_triangle(int sides_A, int sides_B, int sides_C, int angle_A, int angle_B, int angle_C) : Triangle(sides_A, sides_B, sides_C, angle_A, angle_B, angle_C)
{
	name = "Равнобедренный треугольник";
}
