#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <vector>
class Person
{
public:
    Person(std::string f_name, std::string l_name,int age);
    ~Person();
    void ChangeFirstName(int year, const std::string& first_name);
    void ChangeLastName(int year, const std::string& last_name);
    std::string GetFullName(int year);
    unsigned long long GetVectorDepth();
    int GetVectorAge(int num);
    std::string GetFirstName(int num);
    std::string GetLastName(int num);
private:
    std::string f_name;
    std::string l_name;
    int age;
    std::vector <std::string> f_name_mem;
    std::vector <std::string> l_name_mem;
    std::vector <int> age_mem   ;

};
#endif // PERSON_H
