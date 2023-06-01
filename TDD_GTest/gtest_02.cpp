#include "pch.h"
#include "../TDD/test_02.cpp"


TEST(PrimeFactorTC, Of1) {
	PrimeFactor prime_factor;
	std::vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}
