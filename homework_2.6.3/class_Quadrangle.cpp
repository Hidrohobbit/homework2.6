#include "class_Quadrangle.h"

void Quadrangle::print_info()
{
    if (bool_check())
    {
        Figure::print_info();
        std::cout << figure_info() << std::endl;
    }
    else
    {
        Figure::print_info();
        std::cout << figure_info() << std::endl;
    }
}
bool Quadrangle::bool_check()
{
    if (((angle_A + angle_B + angle_C + angle_D) == 360) && (angle_A > 0 && angle_A < 180) && (angle_B > 0 && angle_B < 180) && (angle_C > 0 && angle_C < 180) && (angle_D > 0 && angle_D < 180) && (sides_A > 0) && (sides_B > 0) && (sides_C > 0) && (sides_D > 0)) //проверка пограничных условий
    {
        return true;
    }
    else
    {
        return false;
    }
}
std::string Quadrangle::figure_info()
{
    return "Стороны: a = " + std::to_string(sides_A) + " b = " + std::to_string(sides_B) + " c = " + std::to_string(sides_C) + " d = " + std::to_string(sides_D) + "\n" + "Углы: A = " + std::to_string(angle_A) + " B = " + std::to_string(angle_B) + " C = " + std::to_string(angle_C) + " D = " + std::to_string(angle_D);
}
Quadrangle::Quadrangle(int sides_A, int sides_B, int sides_C, int sides_D, int angle_A, int angle_B, int angle_C, int angle_D)
{
    this->sides_A = sides_A;
    this->sides_B = sides_B;
    this->sides_C = sides_C;
    this->sides_D = sides_D;

    this->angle_A = angle_A;
    this->angle_B = angle_B;
    this->angle_C = angle_C;
    this->angle_D = angle_D;

    sides_count = 4;
    name = "Четырёхугольник";
}