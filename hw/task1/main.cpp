#include <iostream>
#include "employee.h"
using namespace std;

int main()
{
    cout << "TASK1" << endl;
    Employee emp_Ivanov("Ivan","Ivanov","male",42,3);
    emp_Ivanov.printInfo();
    emp_Ivanov.promote();
    emp_Ivanov.printInfo();
    Employee emp_Petrov("Petr","Petrow","male",31,1);
    emp_Petrov.printInfo();
    return 0;
}
