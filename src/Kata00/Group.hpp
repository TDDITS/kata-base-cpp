#ifndef GROUP_HPP
#define	GROUP_HPP

#include <algorithm>
#include <string>
#include <vector>

#include "Person.hpp"

class Group
{
public:
    Group(const std::string n);
    Group(const Group& orig);
    virtual ~Group();
    
    std::string getName() const;
    
    void add(Person p);
    Person get(unsigned int idx) const;
    unsigned int count() const;
    std::string size() const;
    
    static bool sortByAge(const Person &lhs, const Person &rhs);
    std::vector<std::string> listNamesByAge() const;

private:
    std::string name;
    std::vector<Person> people;
};

#endif	/* GROUP_HPP */
