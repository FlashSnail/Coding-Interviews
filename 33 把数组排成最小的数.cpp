/*33����ֻ����������2��3��5��������������Ugly Number����
����6��8���ǳ�������14���ǣ���Ϊ����������7��
ϰ�������ǰ�1�����ǵ�һ���������󰴴�С�����˳��ĵ�N��������*/
class Solution {
public:
	int GetUglyNumber_Solution(int index) {
		vector<int> ans(index);
		ans[0] = 1;
		int q2 = 0, q3 = 0, q5 = 0;
		for (int i = 1; i < index; i++)
		{
			ans[i] = min(ans[q2] * 2, min(ans[q3] * 3, ans[q5] * 5));
			if (ans[i] == ans[q2]*2)
			{
				q2++;
			}
			if (ans[i] == ans[q3]*3)
			{
				q3++;
			}
			if (ans[i] == ans[q5]*5)
			{
				q5++;
			}
		}
		return ans[index - 1];
	}
};