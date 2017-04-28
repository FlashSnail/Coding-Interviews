/*52、请实现一个函数用来匹配包括'.'和'*'的正则表达式。
模式中的字符'.'表示任意一个字符，而'*'表示它前面的字符可以出现任意次（包含0次）。 
在本题中，匹配是指字符串的所有字符匹配整个模式。
例如，字符串"aaa"与模式"a.a"和"ab*ac*a"匹配，但是与"aa.a"和"ab*a"均不匹配*/
class Solution {
public:
	bool match(char* str, char* pattern)
	{
		long ssize = strlen(str);
		long psize = strlen(pattern);

		if (ssize == 0 && psize == 0){
			return true;
		}
		else if (psize == 0 && ssize != 0){
			return false;
		}
		else if (psize != 0 && ssize == 0){
			if (psize > 1 && pattern[1] == '*'){
				return match(str, pattern + 2);
			}
			else {
				return false;
			}
		}

		if (psize > 1 && pattern[1] == '*'){
			if (pattern[0] != str[0] && pattern[0] != '.'){
				return match(str, pattern + 2);
			}
			else {
				return match(str, pattern + 2) || match(str + 1, pattern + 2) || match(str + 1, pattern);
			}
		}
		else {
			if (pattern[0] != str[0] & pattern[0] != '.'){
				return false;
			}
			else {
				return match(str + 1, pattern + 1);
			}
		}
		//这样写哪里错了？能想到的案例测试都没有问题
		/*int i_s = 0;
		int i_p = 0;
		bool ans = true;
		stack<char> s;
		if (str[i_s] == '\0' && pattern[i_p] == '\0')
		{
			ans = false;
		}
		while (str[i_s] != '\0' && pattern[i_p] != '\0')
		{
			if (pattern[i_p] != str[i_s])
			{
				if (pattern[i_p] == '.')
				{
					i_s++;
					i_p++;
				}
				else if (pattern[i_p + 1] == '*')
				{
					i_p += 2;
				}
				else if (s.top() == str[i_s])
				{
					i_s++;
				}
				else
				{
					ans = false;
					break;
				}
			}
			else
			{
				if (pattern[i_p + 1] == '*')
				{
					if (!s.empty())
					{
						s.pop();
					}
					s.push(pattern[i_p]);
				}
				i_s++;
				i_p++;
			}
		}
		if (str[i_s] != '\0' ||  pattern[i_p] != '\0')
		{
			ans = false;
			if (pattern[i_p] == '*')
			{
				ans = true;
			}
		}
		if (str[i_s] == '\0' && pattern[i_p] != '\0')
		{
			while (pattern[i_p] != '\0')
			{
				i_p++;
				if (pattern[i_p] != '\0' && pattern[i_p] != str[i_s - 1])
				{
					ans = false;
					break;
				}
			}
		}
		return ans;*/
	}
};