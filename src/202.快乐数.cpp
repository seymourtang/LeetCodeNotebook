/*
 * @lc app=leetcode.cn id=202 lang=cpp
 *
 * [202] 快乐数
 *
 * https://leetcode-cn.com/problems/happy-number/description/
 *
 * algorithms
 * Easy (53.41%)
 * Likes:    116
 * Dislikes: 0
 * Total Accepted:    18.5K
 * Total Submissions: 34.6K
 * Testcase Example:  '19'
 *
 * 编写一个算法来判断一个数是不是“快乐数”。
 * 
 * 一个“快乐数”定义为：对于一个正整数，每一次将该数替换为它每个位置上的数字的平方和，然后重复这个过程直到这个数变为 1，也可能是无限循环但始终变不到
 * 1。如果可以变为 1，那么这个数就是快乐数。
 * 
 * 示例: 
 * 
 * 输入: 19
 * 输出: true
 * 解释: 
 * 1^2 + 9^2 = 82
 * 8^2 + 2^2 = 68
 * 6^2 + 8^2 = 100
 * 1^2 + 0^2 + 0^2 = 1
 * 
 * 
 */
class Solution
{
public:
    bool isHappy(int n)
    {
        unordered_map<int, int> map;
        int count = 0;
        while (n != 1)
        {
            count = 0;
            while (n != 0)
            {
                count += pow(n % 10, 2);
                n /= 10;
            }
            if (count == 1)
            {
                return true;
            }
            else if (map.find(count)!=map.end())
            {
                return false;
            }
            else
            {
                map[count] = count;
                n = count;
            }
        }
        return true;
    }
};
