/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 *
 * https://leetcode-cn.com/problems/valid-parentheses/description/
 *
 * algorithms
 * Easy (38.10%)
 * Likes:    805
 * Dislikes: 0
 * Total Accepted:    75.5K
 * Total Submissions: 198.2K
 * Testcase Example:  '"()"'
 *
 * 给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串，判断字符串是否有效。
 * 
 * 有效字符串需满足：
 * 
 * 
 * 左括号必须用相同类型的右括号闭合。
 * 左括号必须以正确的顺序闭合。
 * 
 * 
 * 注意空字符串可被认为是有效字符串。
 * 
 * 示例 1:
 * 
 * 输入: "()"
 * 输出: true
 * 
 * 
 * 示例 2:
 * 
 * 输入: "()[]{}"
 * 输出: true
 * 
 * 
 * 示例 3:
 * 
 * 输入: "(]"
 * 输出: false
 * 
 * 
 * 示例 4:
 * 
 * 输入: "([)]"
 * 输出: false
 * 
 * 
 * 示例 5:
 * 
 * 输入: "{[]}"
 * 输出: true
 * 
 */
class Solution
{
public:
    bool isValid(string s)
    {
        if (s=="")
        {
            return true;
        }
        
        int top = -1;
        char myStack[s.size()];
        for (auto c : s)
        {
            if (top == -1)
            {
                if (c == ')' || c=='}' ||c== ']')
                {
                    return false;
                }
                
                myStack[++top] = c;
            }
            else
            {
                if (c == '(' || c=='[' ||c== '{')
                {
                    myStack[++top] = c;
                }
                else
                {
                    if (c == ')')
                    {
                        if (myStack[top] == '(')
                        {
                            top--;
                            continue;
                        }
                        else
                        {
                            return false;
                        }
                    }
                    if (c == ']')
                    {
                        if (myStack[top] == '[')
                        {
                            top--;
                            continue;
                        }
                        else
                        {
                            return false;
                        }
                    }
                    if (c == '}')
                    {
                        if (myStack[top] == '{')
                        {
                            top--;
                            continue;
                        }
                        else
                        {
                            return false;
                        }
                    }
                }
            }
        }
        return top==-1;
        
    }
};
