#include "class_Figure.h"

void Figure::print_info()
{
    if (bool_check())
    {
        std::cout << "\n" << name << "\n" << "Правильная" << "\n" << "Количество сторон: " << sides_count << std::endl;
    }
    else
    {
        std::cout << "\n" << name << "\n" << "Неправильная" << "\n" << "Количество сторон: " << sides_count << std::endl;
    }
}
bool Figure::bool_check()
{
    if (sides_count == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
Figure::Figure()
{
    sides_count = 0;
    name = "Фигура";
}