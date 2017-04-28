/*33、把只包含素因子2、3和5的数称作丑数（Ugly Number）。
例如6、8都是丑数，但14不是，因为它包含因子7。
习惯上我们把1当做是第一个丑数。求按从小到大的顺序的第N个丑数。*/
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