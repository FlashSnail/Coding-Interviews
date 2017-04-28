/*48、写一个函数，求两个整数之和，要求在函数体内不得使用+、-、*、/四则运算符号。*/
class Solution {
public:
	int Add(int num1, int num2)
	{
		if (num1 == 0)
		{
			return num2;
		}
		else
		{
			return Add((num1 & num2) << 1, num1 ^ num2);
		}
	}
};