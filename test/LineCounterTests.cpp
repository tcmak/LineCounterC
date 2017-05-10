/*
 * LineCounterTests.cpp
 *
 *  Created on: 7 May 2017
 *      Author: stevenmak
 */

#include <LineCounter.h>
#include "CppUTest/TestHarness.h"

TEST_GROUP(LineCounter)
{
	void setup() {
	}

	void teardown() {
	}
};

TEST(LineCounter, FAIL)
{
	FAIL("Fail Me");
}

