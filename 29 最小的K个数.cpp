/*29������n���������ҳ�������С��K��������������4,5,1,6,2,7,3,8��8�����֣�����С��4��������1,2,3,4,��*/
class Solution {
public:
	vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
		sort(input.begin(), input.end());
		vector<int> ans;
		if (k>input.size())
		{
			ans.clear();
		}
		else
		{
			for (int i = 0; i < k; i++)
			{
				ans.push_back(input[i]);
			}
		}		
		return ans;
	}
};