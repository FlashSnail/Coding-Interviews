/*53、请实现一个函数用来判断字符串是否表示数值（包括整数和小数）。
例如，字符串"+100","5e2","-123","3.1416"和"-1E-16"都表示数值。
但是"12e","1a3.14","1.2.3","+-5"和"12e+4.3"都不是。*/
class Solution {
public:
	bool isNumeric(char* string)
	{
		bool ans = true;
		int i = 0;
		int comma = 0;
		int e = 0;
		if (string[0] == '\0')
		{
			return false;
		}
		if (string[0] != '+' && string[0] != '-' && (string[0] < '0' || string[0] > '9'))
		{
			return false;
		}
		else
		{
			i++;
		}
		if (string[0] == '+' || string[0] == '-')
		{
			if (string[1] == '.')
			{
				i++;
			}
		}
		while (string[i] != '\0')
		{
			if (string[i] < '0' || string[i] > '9')
			{
				if (string[i] != 'e' && string[i] != 'E' && string[i] != '-' && string[i] != '+' && string[i] != '.')	//如果是非法字符
				{
					ans = false;
					break;
				}
				else if (string[i] == '-')	//如果是减号
				{
					if (string[i - 1] != '\0' && (string[i - 1] != 'e' && string[i - 1] != 'E'))
					{
						ans = false;
						break;
					}
				}
				else if (string[i] == '+')	//如果是加号
				{
					if (string[i - 1] != '\0' && (string[i - 1] != 'e' && string[i - 1] != 'E'))
					{
						ans = false;
						break;
					}
				}
				else if (string[i] == 'e' || string[i] == 'E')	//如果是e
				{
					if (e >= 1)
					{
						ans = false;
						break;
					}
					if (string[i - 1] < '0' || string[i - 1] > '9')
					{
						ans = false;
						break;
					}
					if (string[i + 1] != '-' && string[i + 1] != '+' && (string[i + 1] < '0' || string[i + 1] > '9'))
					{
						ans = false;
						break;
					}
					e++;
				}
				else if (string[i] == '.')	//如果是小数点
				{
					if (e >= 1)
					{
						ans = false;
						break;
					}
					if (string[i - 1] < '0' || string[i - 1] > '9')
					{
						ans = false;
						break;
					}
					if (string[i + 1] < '0' || string[i + 1] > '9')
					{
						ans = false;
						break;
					}
					comma++;
					if (comma > 1)
					{
						ans = false;
						break;
					}
				}
				i++;
			}
			else
			{
				i++;
			}
		}
		return ans;
	}
};