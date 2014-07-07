#ifndef PERSONTEST_HPP
#define	PERSONTEST_HPP

#include <cppunit/extensions/HelperMacros.h>

#include "../../src/Kata00/Person.hpp"

class PersonTest : public CPPUNIT_NS::TestFixture
{    
    CPPUNIT_TEST_SUITE(PersonTest);

    CPPUNIT_TEST(testPersonDetailsCanBeStoredAndRetrieved);
    CPPUNIT_TEST(testAnotherPersonDetailsCanBeStoredAndRetrieved);

    CPPUNIT_TEST_SUITE_END();

public:
    PersonTest();
    virtual ~PersonTest();
    void setUp();
    void tearDown();

private:
    void testPersonDetailsCanBeStoredAndRetrieved();
    void testAnotherPersonDetailsCanBeStoredAndRetrieved();
};

#endif	/* PERSONTEST_HPP */
