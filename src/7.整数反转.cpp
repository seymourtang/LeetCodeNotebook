#include <iostream>
#include <vector>
using namespace std;
/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */
class Solution
{
public:
    int reverse(int x)
    {
        vector<int> vc;
        int size = 0;
        int temp = x;
        long long reverseNum = 0;
        int cursor = 1;
        while (temp != 0)
        {
            vc.push_back(temp % 10);
            temp /= 10;
            size++;
        }
        for (auto it = vc.begin(); it != vc.end(); ++it)
        {
            reverseNum +=pow(10, size - (cursor++)) * (*it);
             
        }
        if (reverseNum>INT32_MAX||reverseNum<INT32_MIN)
        {
            return 0;
        }
        
        return reverseNum;
    }
};
