#include <vector>
class PrimeFactor
{
public:
	std::vector<int> of(int number)
	{
		std::vector<int> result = {};
		if (number > 1)
			result.push_back(number);

		return result;
	}
};


#ifndef GTEST_INCLUDE_GTEST_GTEST_H_
int main(int argc, char* argv[])
{
	return 0;
}
#endif