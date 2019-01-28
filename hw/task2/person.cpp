#include "person.h"
#include <vector>
#include <iostream>
#include <iterator>
Person::Person(std::string f_name, std::string l_name,int age):
    f_name(f_name),
    l_name(l_name),
    age(age)
{
    f_name_mem.push_back(f_name);
    l_name_mem.push_back(l_name);
    age_mem.push_back(age);
}

Person::~Person()
{
    f_name_mem.clear();
    l_name_mem.clear();
    age_mem.clear();
}
unsigned long long Person::GetVectorDepth()
{
    return age_mem.size();
}
int Person::GetVectorAge(int num)
{
    return age_mem.at(num);
}
std::string Person::GetFirstName(int num)
{
    return f_name_mem.at(num);
}
std::string Person::GetLastName(int num)
{
    return l_name_mem.at(num);
}

void Person::ChangeFirstName(int year, const std::string& first_name)
{
    std::string name_nop = "last_name with unknown first name";
    std::vector <int>::iterator it;
    std::vector <std::string>::iterator it_f;
    std::vector <std::string>::iterator it_l;
    it=age_mem.end();
    it_f=f_name_mem.end();
    it_l=l_name_mem.end();
    unsigned long long i = age_mem.size()-1;
    if (year > age_mem.back() )
    {
        age_mem.push_back(year);
        f_name_mem.push_back(first_name);
        if (l_name_mem.size()<f_name_mem.size())
            l_name_mem.push_back("last_name with unknown first name");
    }
    else {
        while (year < age_mem.at(i) ){
            it--;
            it_f--;
            it_l--;
            i--;
       //     std::cout<<"i= "<<age_mem.at(i)<<" age_mem.at(i) "<<age_mem.at(i)<<"\n";
        }
        if (year == age_mem.at(i))
            f_name_mem[i]=first_name;
        else if (year > age_mem.at(i)) {
            age_mem.insert(it,year);
            f_name_mem.insert(it_f,first_name);
            if (l_name_mem.size()<f_name_mem.size())
                l_name_mem.insert(it_l,"last_name with unknown first name");
        }
    }
}

void Person::ChangeLastName(int year, const std::string& last_name)
{
    std::vector <int>::iterator it;
    std::vector <std::string>::iterator it_f;
    std::vector <std::string>::iterator it_l;
    it=age_mem.end();
    it_f=f_name_mem.end();
    it_l=f_name_mem.end();
    unsigned long long i = age_mem.size()-1;
    if (year > age_mem.back() )
    {
        age_mem.push_back(year);
        l_name_mem.push_back(last_name);
        if (f_name_mem.size()<l_name_mem.size())
            f_name_mem.push_back("last_name with unknown first name");
    }
    else {
        while (year < age_mem.at(i) ){
            it--;
            it_f--;
            it_l--;
            i--;
        //    std::cout<<"i= "<<age_mem.at(i)<<" age_mem.at(i) "<<age_mem.at(i)<<"\n";
        }
        if (year == age_mem.at(i))
            l_name_mem[i]=last_name;
        else if (year > age_mem.at(i)) {
            age_mem.insert(it,year);
            l_name_mem.insert(it_f,last_name);
            if (f_name_mem.size()<l_name_mem.size())
                f_name_mem.insert(it_l,"last_name with unknown first name");
        }
    }
}
