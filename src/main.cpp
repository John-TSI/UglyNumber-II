// https://leetcode.com/problems/ugly-number-ii/

#include<iostream>
#include"../inc/solution.hpp"

int main()
{
	std::cout << Solution().nthUglyNumber(10) << '\n';  // 12
	std::cout << Solution().nthUglyNumber(1) << '\n';  // 1
	std::cout << Solution().nthUglyNumber(50) << '\n';  // 243
	return 0;
}

