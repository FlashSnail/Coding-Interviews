/*42������һ����������������һ������S���������в�����������
ʹ�����ǵĺ�������S������ж�����ֵĺ͵���S������������ĳ˻���С�ġ� 
�������:
��Ӧÿ�����԰����������������С���������*/
//˼·����ͼ��x<y����Ҫ������С���ܱ�֤�˻�С��x=s/2ʱ�����
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