#include "pch.h"
#include "../PrimeFactors/primeFactor.cpp"

TEST(PrimeFactors, Of1) {
	PrimeFactor prime_factor;
	std::vector<int> expected = {};

	EXPECT_EQ(expected, prime_factor.of(1));
 
}

TEST(PrimeFactors, Of2) {
	PrimeFactor prime_factor;
	std::vector<int> expected = {2};

	EXPECT_EQ(expected, prime_factor.of(2));
 
}