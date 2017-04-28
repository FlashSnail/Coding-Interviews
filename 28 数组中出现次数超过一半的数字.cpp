/*28、数组中有一个数字出现的次数超过数组长度的一半，请找出这个数字。
例如输入一个长度为9的数组{1,2,3,2,2,2,5,4,2}。
由于数字2在数组中出现了5次，超过数组长度的一半，因此输出2。如果不存在则输出0。*/
class Solution {
public:
	int MoreThanHalfNum_Solution(vector<int> numbers) {
		map<int, int> num;
		for (auto i : numbers)
		{
			num[i]++;
		}
		map<int, int>::iterator iter;
		int max_num = num.begin()->first;
		int max_time = num.begin()->second;
		for (iter = num.begin(); iter != num.end(); iter++)
		{
			if (iter->second > max_time)
			{
				max_num = iter->first;
				max_time = iter->second;
			}
		}
		if (max_time <= (numbers.size() / 2))
		{
			return 0;
		}
		else
		{
			return max_num;
		}
	}
};