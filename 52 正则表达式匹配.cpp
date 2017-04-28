/*52����ʵ��һ����������ƥ�����'.'��'*'��������ʽ��
ģʽ�е��ַ�'.'��ʾ����һ���ַ�����'*'��ʾ��ǰ����ַ����Գ�������Σ�����0�Σ��� 
�ڱ����У�ƥ����ָ�ַ����������ַ�ƥ������ģʽ��
���磬�ַ���"aaa"��ģʽ"a.a"��"ab*ac*a"ƥ�䣬������"aa.a"��"ab*a"����ƥ��*/
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
		//����д������ˣ����뵽�İ������Զ�û������
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