#ifndef GROUPTEST_HPP
#define	GROUPTEST_HPP

#include <cppunit/extensions/HelperMacros.h>

#include "../../src/Kata00/Group.hpp"

class GroupTest : public CPPUNIT_NS::TestFixture
{
    CPPUNIT_TEST_SUITE(GroupTest);

    CPPUNIT_TEST(testGroupNameCanBeSetAndRetrieved);
    CPPUNIT_TEST(testPersonCanBeAddedAndPresent);
    CPPUNIT_TEST(testSizeCalculation);
    CPPUNIT_TEST(testListNamesByAge);

    CPPUNIT_TEST_SUITE_END();

public:
    GroupTest();
    virtual ~GroupTest();
    void setUp();
    void tearDown();

private:
    void testGroupNameCanBeSetAndRetrieved();
    void testPersonCanBeAddedAndPresent();
    void testSizeCalculation();
    void testListNamesByAge();
};

#endif	/* GROUPTEST_HPP */
