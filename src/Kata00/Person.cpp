#include "Person.hpp"

Person::Person(const std::string f, const std::string l, unsigned short int a)
: firstName(f), lastName(l), age(a) {}

Person::Person(const Person &original)
{
    firstName = original.getFirstName();
    lastName  = original.getLastName();
    age       = original.getAge();
}
Person::~Person(){}

bool operator==(const Person &lhs, const Person &rhs)
{
    return
        lhs.getFullName() == rhs.getFullName()
        && lhs.getAge() == rhs.getAge()
    ;
}

std::string Person::getFirstName() const
{
    return firstName;
}

std::string Person::getLastName() const
{
    return lastName;
}

std::string Person::getFullName() const
{
    return firstName + " " + lastName;
}

unsigned short int Person::getAge() const
{
    return age;
}
