/*49����һ���ַ���ת����һ��������Ҫ����ʹ���ַ���ת�������Ŀ⺯���� ��ֵΪ0�����ַ�������һ���Ϸ�����ֵ�򷵻�0 
��������:
����һ���ַ���,����������ĸ����,����Ϊ��
�������:
����ǺϷ�����ֵ����򷵻ظ����֣����򷵻�0
��������:
+2147483647
    1a33
�������:
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