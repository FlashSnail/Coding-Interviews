/*40、一个整型数组里除了两个数字之外，其他的数字都出现了两次。
请写程序找出这两个只出现一次的数字。*/
class Solution {
public:
	void FindNumsAppearOnce(vector<int> data, int* num1, int *num2) {
		*num1 = 0;
		*num2 = 0;
		int max = *max_element(data.begin(), data.end());
		int *hash = new int[max]();
		for (auto i:data)
		{
			hash[i]++;
		}
		int first;
		for (int i = 0; i < data.size(); i++)
		{
			if (hash[data[i]] == 1)
			{
				*num1 = data[i];
				first = i;
				break;
			}
		}
		for (int i = first + 1; i < data.size(); i++)
		{
			if (hash[data[i]] == 1)
			{
				*num2 = data[i];
				break;
			}
		}
	}
};