/*37��ͳ��һ�����������������г��ֵĴ�����*/
class Solution {
public:
	int GetNumberOfK(vector<int> data, int k) {
		sort(data.begin(), data.end());
		map<int, int> ans;
		int large;
		int num = 0;
		for (auto i:data)
		{
			if (i == k)
			{
				num++;
			}
		}
	/*	large = ans[0];
		for (auto i:ans)
		{
			if (i.second > large)
			{
				large = i.second;
			}
		}
		ans.clear();*/
		return num;
	}
};