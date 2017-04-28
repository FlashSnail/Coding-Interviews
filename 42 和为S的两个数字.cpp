/*42、输入一个递增排序的数组和一个数字S，在数组中查找两个数，
使得他们的和正好是S，如果有多对数字的和等于S，输出两个数的乘积最小的。 
输出描述:
对应每个测试案例，输出两个数，小的先输出。*/
//思路：画图，x<y，需要尽量的小才能保证乘积小，x=s/2时积最大
class Solution {
public:
	vector<int> FindNumbersWithSum(vector<int> array, int sum) {
		int size = array.size();
		vector<int> ans;
		if (size<2)
		{
			return ans;
		}
		if (size == 2)
		{
			if (array[0] + array[1] == sum)
			{
				ans.push_back(array[0]);
				ans.push_back(array[1]);
				return ans;
			}
		}
		int s = 0;
		int e = 1;
		int start = array[s];
		int end = array[e];
		int curSum = start + end;
		for (int i = 0; i < size - 1; i++)
		{
			start = array[i];
			for (int j = i + 1; j < size; j++)
			{
				end = array[j];
				curSum = start + end;
				if (curSum == sum)
				{
					ans.push_back(start);
					ans.push_back(end);
					return ans;
				}
				if (curSum>sum)
				{
					break;
				}
			}
		}
	}
};