/*27、输入一个字符串,按字典序打印出该字符串中字符的所有排列。例如输入字符串abc,
则打印出由字符a,b,c所能排列出来的所有字符串abc,acb,bac,bca,cab和cba。 
输入描述:
输入一个字符串,长度不超过9(可能有字符重复),字符只包括大小写字母。*/
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
