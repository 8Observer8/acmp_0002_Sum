/*
 * File:   newtestclass.cpp
 * Author: Ivan
 *
 * Created on Nov 2, 2013, 10:27:15 PM
 */

#include "newtestclass.h"


CPPUNIT_TEST_SUITE_REGISTRATION(newtestclass);

newtestclass::newtestclass() {
}

newtestclass::~newtestclass() {
}

void newtestclass::setUp() {
}

void newtestclass::tearDown() {
}

int sum(int n);

void newtestclass::testSum_01() {
    int n = 15;
    int result = sum(n);
    int expected = 120;
    CPPUNIT_ASSERT_EQUAL_MESSAGE("Input   : 15", expected, result);
}

void newtestclass::testSum_02() {
    int n = 0;
    int result = sum(n);
    int expected = 1;
    CPPUNIT_ASSERT_EQUAL_MESSAGE("Input   : 0", expected, result);
}

void newtestclass::testSum_03() {
    int n = 1;
    int result = sum(n);
    int expected = 1;
    CPPUNIT_ASSERT_EQUAL_MESSAGE("Input   : 1", expected, result);
}

void newtestclass::testSum_04() {
    int n = 2;
    int result = sum(n);
    int expected = 3;
    CPPUNIT_ASSERT_EQUAL_MESSAGE("Input   : 2", expected, result);
}

void newtestclass::testSum_05() {
    int n = -1;
    int result = sum(n);
    int expected = 0;
    CPPUNIT_ASSERT_EQUAL_MESSAGE("Input   : -1", expected, result);
}

void newtestclass::testSum_06() {
    int n = -2;
    int result = sum(n);
    int expected = -2;
    CPPUNIT_ASSERT_EQUAL_MESSAGE("Input   : -2", expected, result);
}

void newtestclass::testSum_07() {
    int n = -3;
    int result = sum(n);
    int expected = -5;
    CPPUNIT_ASSERT_EQUAL_MESSAGE("Input   : -3", expected, result);
}

void newtestclass::testSum_08() {
    int n = -4;
    int result = sum(n);
    int expected = -9;
    CPPUNIT_ASSERT_EQUAL_MESSAGE("Input   : -4", expected, result);
}

void newtestclass::testSum_09() {
    int n = -5;
    int result = sum(n);
    int expected = -14;
    CPPUNIT_ASSERT_EQUAL_MESSAGE("Input   : -5", expected, result);
}

void newtestclass::testSum_10() {
    int n = -6;
    int result = sum(n);
    int expected = -20;
    CPPUNIT_ASSERT_EQUAL_MESSAGE("Input   : -6", expected, result);
}
