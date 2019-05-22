/*
 * @lc app=leetcode.cn id=125 lang=cpp
 *
 * [125] 验证回文串
 *
 * https://leetcode-cn.com/problems/valid-palindrome/description/
 *
 * algorithms
 * Easy (39.58%)
 * Likes:    87
 * Dislikes: 0
 * Total Accepted:    36.3K
 * Total Submissions: 91.5K
 * Testcase Example:  '"A man, a plan, a canal: Panama"'
 *
 * 给定一个字符串，验证它是否是回文串，只考虑字母和数字字符，可以忽略字母的大小写。
 * 
 * 说明：本题中，我们将空字符串定义为有效的回文串。
 * 
 * 示例 1:
 * 
 * 输入: "A man, a plan, a canal: Panama"
 * 输出: true
 * 
 * 
 * 示例 2:
 * 
 * 输入: "race a car"
 * 输出: false
 * 
 * 
 */
class Solution
{
public:
    bool isPalindrome(string s)
    {
        if (s == "")
        {
            return true;
        }

        int size = s.size();
        int begin = 0;
        int end = size - 1;
        while (begin < end)
        {
            while ((begin < size - 1) && !isValid(s[begin]))
            {
                ++begin;
            }
            if (begin == size - 1)
            {
                return true;
            }
            while (!isValid(s[end]))
            {
                --end;
            }
            if (s[begin] != s[end])
            {
                return false;
            }
            ++begin;
            --end;
        }
        return true;
    }
    bool isValid(char &c)
    {
        if (c >= '0' && c <= '9')
        {
            return true;
        }
        if (c >= 'A' && c <= 'Z')
        {
            return true;
        }
        if (c >= 'a' && c <= 'z')
        {
            c = c - 'a' + 'A';
            return true;
        }
        return false;
    }
};
