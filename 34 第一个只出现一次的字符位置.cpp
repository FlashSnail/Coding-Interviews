/*34����һ���ַ���(1<=�ַ�������<=10000��ȫ������ĸ���)��
�ҵ���һ��ֻ����һ�ε��ַ�,����������λ�á�����ַ���Ϊ��,����-1*/
class Solution {
public:
	int FirstNotRepeatingChar(string str) {
		if (str == "")
		{
			return -1;
		}
		int times[256] = { 0 };
		for (int i = 0; i < str.length(); i++)
		{
			times[(int)str[i]]++;
		}
		for (int i = 0; i < str.length(); i++)
		{
			if (times[(int)str[i]] == 1)
			{
				return i;
			}
		}
		return -1;
	}
};