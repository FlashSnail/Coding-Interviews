/*28����������һ�����ֳ��ֵĴ����������鳤�ȵ�һ�룬���ҳ�������֡�
��������һ������Ϊ9������{1,2,3,2,2,2,5,4,2}��
��������2�������г�����5�Σ��������鳤�ȵ�һ�룬������2����������������0��*/
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