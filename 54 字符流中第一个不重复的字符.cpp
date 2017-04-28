/*54����ʵ��һ�����������ҳ��ַ����е�һ��ֻ����һ�ε��ַ���
���磬�����ַ�����ֻ����ǰ�����ַ�"go"ʱ����һ��ֻ����һ�ε��ַ���"g"��
���Ӹ��ַ����ж���ǰ�����ַ���google"ʱ����һ��ֻ����һ�ε��ַ���"l"�� 
�������:
�����ǰ�ַ���û�д��ڳ���һ�ε��ַ�������#�ַ���*/
class Solution
{
public:
	string str;
	int hash[256] = { 0 };
	//Insert one char from stringstream
	void Insert(char ch)
	{
		str += ch;
		hash[ch]++;
	}
	//return the first appearence once char in current stringstream
	char FirstAppearingOnce()
	{
		int i = 0;
		while (i < str.length() && hash[str[i]] != 1)
		{
			i++;
		}
		if (i == str.length())
		{
			return '#';
		}
		else
		{
			return str[i];
		}
	}

};