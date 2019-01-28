#include <iostream>
#include "employee.h"

Employee::Employee(std::string f_name, std::string l_name,std::string sex,
                   int age, int type):
    f_name(f_name),
    l_name(l_name),
    sex(sex),
    age(age),
    type(type)
{
}
Employee::~Employee()
{}
void Employee::promote()
{
    type++;
}
void Employee::demote()
{
    type--;
}

void Employee::printInfo()
{
    std::cout<<"first name: "<<f_name<<" last name: "<<l_name<<
               " sex: "<<sex<<" age: "<<age<<" type "<<type<<std::endl;
}
