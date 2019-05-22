/*
 * @lc app=leetcode.cn id=118 lang=cpp
 *
 * [118] 杨辉三角
 *
 * https://leetcode-cn.com/problems/pascals-triangle/description/
 *
 * algorithms
 * Easy (62.11%)
 * Likes:    151
 * Dislikes: 0
 * Total Accepted:    23.6K
 * Total Submissions: 38K
 * Testcase Example:  '5'
 *
 * 给定一个非负整数 numRows，生成杨辉三角的前 numRows 行。
 * 
 * 
 * 
 * 在杨辉三角中，每个数是它左上方和右上方的数的和。
 * 
 * 示例:
 * 
 * 输入: 5
 * 输出:
 * [
 * ⁠    [1],
 * ⁠   [1,1],
 * ⁠  [1,2,1],
 * ⁠ [1,3,3,1],
 * ⁠[1,4,6,4,1]
 * ]
 * 
 */
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vc(numRows);
        for (size_t i = 0; i < vc.size(); i++)
        {
            vc[i].resize(i + 1);
        }
        if (numRows == 0)
        {
            return vc;
        }
        vc[0][0] = 1;
        if (numRows == 1)
        {
            return vc;
        }
        for (size_t i = 0; i < numRows; ++i)
        {
            for (size_t j = 0; j <= i; j++)
            {
                if (j == 0 || j == i)
                {
                    vc[i][j] = 1;
                }
                else
                {
                    vc[i][j] = vc[i - 1][j - 1] + vc[i - 1][j];
                }
            }
        }
        return vc;
    }
};

