//=============================================================================
//Copyright (c) 2013 Pelco. All rights reserved.
//
// This file contains trade secrets of Pelco.  No part may be reproduced or
// transmitted in any form by any means or for any purpose without the express
// written permission of Pelco.
//
// $File: RBSPIterTest.h $
// $Revision:$
// $Date:$
// $Author: Jonathan M Davis $
//=============================================================================

#ifndef _RBSPIterTest_H_
#define _RBSPIterTest_H_

#include <cppunit/extensions/HelperMacros.h>

class RBSPIterTest : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(RBSPIterTest);
        CPPUNIT_TEST(TestComparison);
        CPPUNIT_TEST(TestIteration);
        CPPUNIT_TEST(TestGetRBSPFromNAL);
    CPPUNIT_TEST_SUITE_END();

public:
    void setUp() {}
    void tearDown() {}

protected:

    void TestComparison();
    void TestIteration();
    void TestGetRBSPFromNAL();
};

#endif
