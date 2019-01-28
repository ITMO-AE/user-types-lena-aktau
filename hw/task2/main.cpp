#include <iostream>
#include "person.h"
using namespace std;

int main()
{
    cout << "TASK2!" << endl;
    Person per_Ivanov("Ivan","Ivanov",1990);
    per_Ivanov.ChangeFirstName(2001,"f1");
    per_Ivanov.ChangeFirstName(2002,"f2");

    per_Ivanov.ChangeFirstName(2004,"f4");
    per_Ivanov.ChangeLastName(2006,"l6");
    per_Ivanov.ChangeFirstName(2008,"f8");
    per_Ivanov.ChangeFirstName(2009,"f9");
    per_Ivanov.ChangeFirstName(2003,"f3");
    per_Ivanov.ChangeLastName(2002,"l2");
    per_Ivanov.ChangeFirstName(2011,"f11");
    per_Ivanov.ChangeFirstName(1998,"f98");
    cout<<per_Ivanov.GetVectorDepth()<<"\n";
    for( int i=0; i<per_Ivanov.GetVectorDepth();i++)
        cout<<per_Ivanov.GetVectorAge(i)
            <<" "<<per_Ivanov.GetFirstName(i)
            <<" "<<per_Ivanov.GetLastName(i)<<"\n";
    return 0;
}
//Person::Person(std::string f_name, std::string l_name,int age):
//void Person::ChangeFirstName(int year, const std::string& first_name)
