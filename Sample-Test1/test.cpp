#include "pch.h"
#include "../PrimeFactors/primeFactor.cpp"

class PrimeFixture : public testing::Test
{
public:
	PrimeFactor prime_factor;
	std::vector<int> expected;
};
TEST_F(PrimeFixture, Of1) {

	expected = {};

	EXPECT_EQ(expected, prime_factor.of(1));
 
}

TEST_F(PrimeFixture, Of2) {

	expected = {2};

	EXPECT_EQ(expected, prime_factor.of(2));
 
}