/*
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] 求众数
 */
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int result=0;
        int count=0;
        for(auto it:nums)
        {
            if (count==0)
            {
                ++count;
                result=it;
            }
            else if (result==it)
            {
                ++count;
            }
            else
            {
                --count;
            }
        }
        return result;
    }
};

