/*
 * File:   newtestclass.h
 * Author: Ivan
 *
 * Created on Nov 2, 2013, 10:27:15 PM
 */

#ifndef NEWTESTCLASS_H
#define	NEWTESTCLASS_H

#include <cppunit/extensions/HelperMacros.h>

class newtestclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(newtestclass);

    CPPUNIT_TEST(testSum_01);
    CPPUNIT_TEST(testSum_02);
    CPPUNIT_TEST(testSum_03);
    CPPUNIT_TEST(testSum_04);
    CPPUNIT_TEST(testSum_05);
    CPPUNIT_TEST(testSum_06);
    CPPUNIT_TEST(testSum_07);
    CPPUNIT_TEST(testSum_08);
    CPPUNIT_TEST(testSum_09);
    CPPUNIT_TEST(testSum_10);

    CPPUNIT_TEST_SUITE_END();

public:
    newtestclass();
    virtual ~newtestclass();
    void setUp();
    void tearDown();

private:
    void testSum_01();
    void testSum_02();
    void testSum_03();
    void testSum_04();
    void testSum_05();
    void testSum_06();
    void testSum_07();
    void testSum_08();
    void testSum_09();
    void testSum_10();
};

#endif	/* NEWTESTCLASS_H */

