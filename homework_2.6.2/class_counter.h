#pragma once
class Counter
{
private:

    int number;

public:

    void  add();
    void  subtract();
    void  set_value(int number);
    int   get_value();

    Counter()
    {
        number = 1;
    }
};