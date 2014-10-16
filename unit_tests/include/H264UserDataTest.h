//=============================================================================
//Copyright (c) 2011 Pelco. All rights reserved.
//
// This file contains trade secrets of Pelco.  No part may be reproduced or
// transmitted in any form by any means or for any purpose without the express
// written permission of Pelco.
//
// $File: H264UserDataTest.h $
// $Revision:$
// $Date:$
// $Author: Jonathan M Davis $
//=============================================================================

#ifndef _H264UserDataTest_H_
#define _H264UserDataTest_H_

#include <cppunit/extensions/HelperMacros.h>

class H264UserDataTest : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(H264UserDataTest);
        CPPUNIT_TEST(TestEmptySEI);
        CPPUNIT_TEST(TestUUID);
        CPPUNIT_TEST(TestRawSEI);
        CPPUNIT_TEST(TestZeroRawSEI);
        CPPUNIT_TEST(TestMultiplePayloads);
        CPPUNIT_TEST(TestNalify);
    CPPUNIT_TEST_SUITE_END();

public:
    void setUp() {}
    void tearDown() {}

protected:

    void TestEmptySEI();
    void TestUUID();
    void TestRawSEI();
    void TestZeroRawSEI();
    void TestMultiplePayloads();
    void TestNalify();
};

#endif
