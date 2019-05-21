/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 *
 * https://leetcode-cn.com/problems/plus-one/description/
 *
 * algorithms
 * Easy (38.74%)
 * Likes:    273
 * Dislikes: 0
 * Total Accepted:    52.6K
 * Total Submissions: 135.7K
 * Testcase Example:  '[1,2,3]'
 *
 * 给定一个由整数组成的非空数组所表示的非负整数，在该数的基础上加一。
 * 
 * 最高位数字存放在数组的首位， 数组中每个元素只存储一个数字。
 * 
 * 你可以假设除了整数 0 之外，这个整数不会以零开头。
 * 
 * 示例 1:
 * 
 * 输入: [1,2,3]
 * 输出: [1,2,4]
 * 解释: 输入数组表示数字 123。
 * 
 * 
 * 示例 2:
 * 
 * 输入: [4,3,2,1]
 * 输出: [4,3,2,2]
 * 解释: 输入数组表示数字 4321。
 * 
 * 
 */
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size=digits.size();
        if (digits[size-1]<9)
        {
            digits[size-1]++;
            return digits;
        }
        int cursor=size-2;
        digits[size-1]=0;
        while (cursor!=-1&&digits[cursor]==9)
        {
            digits[cursor]=0;
            cursor--;
        }
        if (cursor==-1)
        {
            digits.insert(digits.begin(),1);
            return digits;
        }
        
        digits[cursor]++;
        return digits;
        
    }
};

