/*27������һ���ַ���,���ֵ����ӡ�����ַ������ַ����������С����������ַ���abc,
���ӡ�����ַ�a,b,c�������г����������ַ���abc,acb,bac,bca,cab��cba�� 
��������:
����һ���ַ���,���Ȳ�����9(�������ַ��ظ�),�ַ�ֻ������Сд��ĸ��*/
class Solution {
public:
	vector<string> ans;
	void quickSort(string &str, int start, int end)
	{
		if (start>end)
		{
			return;
		}
		int i = start;	int j = end;
		char baseLine = str[start];
		while (i != j)
		{
			while (i<j && str[j] > baseLine)
			{
				j--;
			}
			while (i<j && str[i] < baseLine)
			{
				i++;
			}
			swap(str[i], str[j]);
		}
		swap(str[i], str[start]);

		quickSort(str, start, i - 1);
		quickSort(str, j + 1, end);
	}
	void prem(string str, int start, int end)
	{
		if (start == end)
		{
			ans.push_back(str);
		}
		else
		{
			for (int i = start; i <= end; i++)
			{
				if (i!=start && str[i] == str[start])
				{
					continue;
				}
				swap(str[start], str[i]);
				prem(str, start + 1, end);
				swap(str[start], str[i]);
			}
		}
	}
	vector<string> Permutation(string str) {
	//	quickSort(str, 0, str.length() - 1);
		prem(str, 0, str.length() - 1);
		sort(ans.begin(), ans.end());
		return ans;
	}
};
