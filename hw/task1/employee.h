#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

class Employee
{
public:
    Employee(std::string f_name, std::string l_name, std::string sex,
            int age, int type);
    ~Employee();
    void promote();
    void demote ();
    void printInfo();
private:
    std::string f_name;
    std::string l_name;
    std::string sex;
    int age;
    int type;

};

#endif // EMPLOYEE_H
