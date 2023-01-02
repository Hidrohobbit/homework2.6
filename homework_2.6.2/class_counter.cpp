#include "class_counter.h"

 void Counter::add() { ++number; }
 void Counter::subtract() { --number; }
 void Counter::set_value(int number) { this->number = number; }
 int  Counter::get_value() { return number; }
