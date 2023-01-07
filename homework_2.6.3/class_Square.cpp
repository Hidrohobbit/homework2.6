#include "class_Square.h"

bool Square::bool_check()
{
    if (Rectangle::bool_check())
    {
        if (sides_A == sides_B) // Этой проверки достаточно так как A уже равно С && B уже равно В. <--- эта проверка присутвует в "class Rectangle : public Parallelogram ---> bool_check" 
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
Square::Square(int sides_A, int sides_B, int sides_C, int sides_D, int angle_A, int angle_B, int angle_C, int angle_D) : Rectangle(sides_A, sides_B, sides_C, sides_D, angle_A, angle_B, angle_C, angle_D)
{
	name = "Квадрат";
}
