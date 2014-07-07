#include "GroupTest.hpp"

CPPUNIT_TEST_SUITE_REGISTRATION(GroupTest);

GroupTest::GroupTest(){}
GroupTest::~GroupTest(){}
void GroupTest::setUp(){}
void GroupTest::tearDown(){}

void GroupTest::testGroupNameCanBeSetAndRetrieved()
{
    const std::string name  = "A team";
          Group       group = Group(name);
    
    CPPUNIT_ASSERT_EQUAL(name, group.getName());
}

void GroupTest::testPersonCanBeAddedAndPresent()
{
          Group  group  = Group("A team");
    const Person person = Person("Alex", "Xela", 20);
    
    group.add(person);
    
    CPPUNIT_ASSERT_EQUAL((unsigned)1, group.count());
    CPPUNIT_ASSERT(person == group.get(0));
}

void GroupTest::testSizeCalculation()
{
          Group group   = Group("A team");
    const Person person = Person("Alex", "Xela", 20);
    
    const unsigned int zero       = 0;
    const unsigned int one        = 1;
    const unsigned int three      = 3;
    const unsigned int fifteen    = 15;
    const unsigned int twentyfive = 25;
    
    const std::string empty  = "";
    const std::string small  = "small";
    const std::string medium = "medium";
    const std::string large  = "large";
    
    CPPUNIT_ASSERT_EQUAL(zero, group.count());
    CPPUNIT_ASSERT_EQUAL(empty, group.size());
    
    group.add(person);
    CPPUNIT_ASSERT_EQUAL(one, group.count());
    CPPUNIT_ASSERT_EQUAL(small, group.size());
    
    for (int i = 0; i < 2; i++) {
        group.add(person);
    }
    CPPUNIT_ASSERT_EQUAL(three, group.count());
    CPPUNIT_ASSERT_EQUAL(small, group.size());
    
    for (int i = 0; i < 12; i++) {
        group.add(person);
    }
    CPPUNIT_ASSERT_EQUAL(fifteen, group.count());
    CPPUNIT_ASSERT_EQUAL(medium, group.size());
    
    for (int i = 0; i < 10; i++) {
        group.add(person);
    }
    CPPUNIT_ASSERT_EQUAL(twentyfive, group.count());
    CPPUNIT_ASSERT_EQUAL(large, group.size());
}

void GroupTest::testListNamesByAge()
{
    const Person person1 = Person("Alex", "Xela", 20);
    const Person person2 = Person("Alexa", "Axela", 18);
    
    std::vector<std::string> names;
    names.push_back("Alexa Axela");
    names.push_back("Alex Xela");
    
    Group group1 = Group("Reverse");
    group1.add(person1);
    group1.add(person2);
    
    const std::vector<std::string> group1Names = group1.listNamesByAge();
    CPPUNIT_ASSERT_EQUAL(names.size(), group1Names.size());
    for (int i = 0, m = names.size(); i < m; i++)
    {
        CPPUNIT_ASSERT_EQUAL(names.at(i), group1Names.at(i));
    }    
    
    Group group2 = Group("Sorted");
    group2.add(person2);
    group2.add(person1);
    
    const std::vector<std::string> group2Names = group2.listNamesByAge();
    CPPUNIT_ASSERT_EQUAL(names.size(), group2Names.size());
    for (int i = 0, m = names.size(); i < m; i++)
    {
        CPPUNIT_ASSERT_EQUAL(names.at(i), group2Names.at(i));
    }
}
