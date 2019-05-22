/*
 * @lc app=leetcode.cn id=119 lang=cpp
 *
 * [119] 杨辉三角 II
 *
 * https://leetcode-cn.com/problems/pascals-triangle-ii/description/
 *
 * algorithms
 * Easy (55.92%)
 * Likes:    69
 * Dislikes: 0
 * Total Accepted:    14.9K
 * Total Submissions: 26.6K
 * Testcase Example:  '3'
 *
 * 给定一个非负索引 k，其中 k ≤ 33，返回杨辉三角的第 k 行。
 * 
 * 
 * 
 * 在杨辉三角中，每个数是它左上方和右上方的数的和。
 * 
 * 示例:
 * 
 * 输入: 3
 * 输出: [1,3,3,1]
 * 
 * 
 * 进阶：
 * 
 * 你可以优化你的算法到 O(k) 空间复杂度吗？
 * 
 */
class Solution {
public:
    vector<int> getRow(int rowIndex) {
       vector<int> vc(rowIndex+1,1);
       for(size_t i=1;i<=(rowIndex+1)/2;++i)
       {
           cout<<i<<endl;
           vc[i]=vc[rowIndex-i]=(long)vc[i-1]*(long)(rowIndex-i+1)/i ;
       }
       return vc;
    }
};

