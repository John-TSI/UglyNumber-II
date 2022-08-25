#include<vector>
#include<algorithm>
#include"../inc/solution.hpp"


int Solution::nthUglyNumber(int n)
{
    std::vector<int> uglyNums{1};  // vector to store generated ugly numbers, first in sequence defined to be one
    int nextMult2{2}, nextMult3{3}, nextMult5{5};  // multiples of 2,3 or 5 are candidates, these ints track next lowest values to consider 
    int i2{0}, i3{0}, i5{0};  // indices of most recently inserted multiples of 2,3,5 into uglyNums

    for(int i{1}; i<n; ++i)
    {
        uglyNums.push_back( std::min({nextMult2, nextMult3, nextMult5}) );  // next ugly num is minimum of the three possible candidates

        // update the insertion index and compute the next value for whichever candidate was accepted 
        if(uglyNums[i] == nextMult2){ nextMult2 = uglyNums[++i2]*2; }
        if(uglyNums[i] == nextMult3){ nextMult3 = uglyNums[++i3]*3; }
        if(uglyNums[i] == nextMult5){ nextMult5 = uglyNums[++i5]*5; }
    }

    return uglyNums.back();
}