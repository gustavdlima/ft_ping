#include <gtest/gtest.h>
#include "ft_ping.h"

TEST(Convert1, convertRomanToInteger)
{
	int integer = convertRomanToInteger((char *)"I");
	EXPECT_EQ(integer, 1);
}
