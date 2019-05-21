/*
 * @lc app=leetcode.cn id=258 lang=cpp
 *
 * [258] 各位相加
 */
class Solution
{
public:
    int addDigits(int num)
    {
       return (num-1)%9+1;
    }
};
