/*29、输入n个整数，找出其中最小的K个数。例如输入4,5,1,6,2,7,3,8这8个数字，则最小的4个数字是1,2,3,4,。*/
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