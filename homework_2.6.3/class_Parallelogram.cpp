#include "class_Parallelogram.h"

bool Parallelogram::bool_check()
{
    if (Quadrangle::bool_check())
    {
        if ((sides_A == sides_C) && (sides_B == sides_D) && (angle_A == angle_C) && (angle_B == angle_D))
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
Parallelogram::Parallelogram(int sides_A, int sides_B, int sides_C, int sides_D, int angle_A, int angle_B, int angle_C, int angle_D) : Quadrangle(sides_A, sides_B, sides_C, sides_D, angle_A, angle_B, angle_C, angle_D)
{
	name = "ֿאנאככוכמדנאלל";
}
