/*49、将一个字符串转换成一个整数，要求不能使用字符串转换整数的库函数。 数值为0或者字符串不是一个合法的数值则返回0 
输入描述:
输入一个字符串,包括数字字母符号,可以为空
输出描述:
如果是合法的数值表达则返回该数字，否则返回0
输入例子:
+2147483647
    1a33
输出例子:
2147483647
    0*/
class Solution {
public:
	int StrToInt(string str) {
		int ans = 0;
		int len = str.length();
		if (str[0] == '-')
		{
			for (int i = 1; i < len; i++)
			{
				if (!(str[i] >= '0' && str[i] <= '9'))
				{
					ans = 0;
					break;
				}
				else
				{
					ans += pow(10, len - i - 1) * (str[i] - 48);
				}
			}
			ans = -ans;
		}
		else if (str[0] == '+')
		{
			for (int i = 1; i < len; i++)
			{
				if (!(str[i] >= '0' && str[i] <= '9'))
				{
					ans = 0;
					break;
				}
				else
				{
					ans += pow(10, len - i - 1) * (str[i] - 48);
				}
			}
		}
		else
		{
			for (int i = 0; i < len; i++)
			{
				if (!(str[i] >= '0' && str[i] <= '9'))
				{
					ans = 0;
					break;
				}
				else
				{
					ans += pow(10, len - i - 1) * (str[i] - 48);
				}
			}
		}
		return ans;
	}
};