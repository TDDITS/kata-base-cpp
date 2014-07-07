#ifndef PERSON_HPP
#define	PERSON_HPP

#include <string>

class Person
{
public:
    Person(const std::string f, const std::string l, unsigned short int a);
    Person(const Person &original);
    virtual ~Person();
    
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getFullName() const;
    unsigned short int getAge() const;
    
private:
    std::string firstName;
    std::string lastName;
    unsigned short int age;
};

bool operator==(const Person &lhs, const Person &rhs);

#endif	/* PERSON_HPP */

