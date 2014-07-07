#include "PersonTest.hpp"

CPPUNIT_TEST_SUITE_REGISTRATION(PersonTest);

PersonTest::PersonTest(){}
PersonTest::~PersonTest(){}
void PersonTest::setUp(){}
void PersonTest::tearDown(){}

void PersonTest::testPersonDetailsCanBeStoredAndRetrieved()
{
    const std::string        firstName  = "Alex";
    const std::string        lastName   = "Xela";
    const unsigned short int age        = 20;
    
    Person person = Person(firstName, lastName, age);

    CPPUNIT_ASSERT_EQUAL(firstName,                  person.getFirstName());
    CPPUNIT_ASSERT_EQUAL(lastName,                   person.getLastName());
    CPPUNIT_ASSERT_EQUAL(firstName + " " + lastName, person.getFullName());
    CPPUNIT_ASSERT_EQUAL(age,                        person.getAge());
}

void PersonTest::testAnotherPersonDetailsCanBeStoredAndRetrieved()
{
    const std::string        firstName  = "Alexa";
    const std::string        lastName   = "Axela";
    const unsigned short int age        = 18;
    
    Person person = Person(firstName, lastName, age);

    CPPUNIT_ASSERT_EQUAL(firstName,                  person.getFirstName());
    CPPUNIT_ASSERT_EQUAL(lastName,                   person.getLastName());
    CPPUNIT_ASSERT_EQUAL(firstName + " " + lastName, person.getFullName());
    CPPUNIT_ASSERT_EQUAL(age,                        person.getAge());
}
