#include "math.h"
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");

    int x = 0;
    int y = 0;
    int ch = 0; //переменная выбора операции

    while (true)
    {
        std::cout << std::endl;
        std::cout << "Меню:\n 1 - Начать вычисления\n 2 - Выход\n Ввод: ";
        std::cin >> ch;

        switch (ch)
        {
        case 1:

            std::cout << std::endl;
            std::cout << "Введите первое число: ";
            std::cin >> x;

            std::cout << std::endl << "Введите второе число: ";
            std::cin >> y;

            std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень)" << std::endl;
            std::cin >> ch;

            switch (ch)
            {
            case 1:
                std::cout << "Ответ: " << addition(x, y) << std::endl;;
                break;
            case 2:
                std::cout << "Ответ: " << subtraction(x, y) << std::endl;;
                break;
            case 3:
                std::cout << "Ответ: " << multiplication(x, y) << std::endl;;
                break;
            case 4:
                std::cout << "Ответ: " << division(x, y) << std::endl;;
                break;
            case 5:
                std::cout << "Ответ: " << exponentiation(x, y) << std::endl;;
                break;
            default:
                std::cout << "Неизвестная команда\nПовторите ввод" << std::endl;
            }
            break;
        case 2:
            std::cout << std::endl;
            std::cout << "\t!!!Выход!!!\t\n";
            exit(0);
        default:
            std::cout << "Неизвестная команда\nПовторите ввод" << std::endl;
            break;
        }
        
    }

    return 0;
}