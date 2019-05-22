/*
 * @lc app=leetcode.cn id=400 lang=cpp
 *
 * [400] 第N个数字
 *
 * https://leetcode-cn.com/problems/nth-digit/description/
 *
 * algorithms
 * Easy (31.40%)
 * Likes:    60
 * Dislikes: 0
 * Total Accepted:    3.2K
 * Total Submissions: 10.2K
 * Testcase Example:  '3'
 *
 * 在无限的整数序列 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, ...中找到第 n 个数字。
 * 
 * 注意:
 * n 是正数且在32为整形范围内 ( n < 2^31)。
 * 
 * 示例 1:
 * 
 * 
 * 输入:
 * 3
 * 
 * 输出:
 * 3
 * 
 * 
 * 示例 2:
 * 
 * 
 * 输入:
 * 11
 * 
 * 输出:
 * 0
 * 
 * 说明:
 * 第11个数字在序列 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, ... 里是0，它是10的一部分。
 * 
 * 
 */
class Solution {
public:
    int findNthDigit(int n) {
        	if (n < 10)
	{
		return n;
	}
	int t = 2;
	long long count = 9;
	long long increment = 0;
	for (;; t++)
	{
		increment = 9 * t * pow(10, t - 1);
		count += increment;
		if (n / count == 0)
		{
			break;
		}
	}
	long long lastStep = count - increment;
	long long num;
	int index;
	long long result;
	n = n -lastStep;
	if (n % t == 0)
	{
		result = (n/t + lastStep) % 10;
	}
	else
	{
		num = n/t + pow(10,t-1) ;
		index = t + 1 - (n % t);
		while (index--)
		{
			result = num % 10;
			num = num / 10;
		}

	}
	return result;
    }
};

