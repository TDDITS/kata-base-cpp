#include "Group.hpp"

Group::Group(const std::string n)
: name(n) {}

Group::Group(const Group& orig) {}
Group::~Group() {}

std::string Group::getName() const
{
    return name;
}

void Group::add(Person p)
{
    people.push_back(p);
}

Person Group::get(unsigned int idx) const
{
    return people.at(idx);
}

unsigned int Group::count() const
{
    return people.size();
}

std::string Group::size() const
{
    unsigned int c = people.size();
    if (c == 0)
    {
        return "";
    }
    if (c <= 5)
    {
        return "small";
    }
    if (c <= 20)
    {
        return "medium";
    }
    return "large";
}

bool Group::sortByAge(const Person &lhs, const Person &rhs)
{
    return lhs.getAge() < rhs.getAge();
}

std::vector<std::string> Group::listNamesByAge() const
{
    std::vector<Person> list = people;
    std::sort(list.begin(), list.end(), Group::sortByAge);
    std::vector<std::string> listByAge;
    for (std::vector<Person>::iterator i = list.begin(); i != list.end(); i++)
    {
        listByAge.push_back(i->getFullName());
    }
    return listByAge;
}
