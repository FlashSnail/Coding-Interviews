/*41��С����ϲ����ѧ,��һ����������ѧ��ҵʱ,Ҫ������9~16�ĺ�,
�����Ͼ�д������ȷ����100�����������������ڴ�,
�����뾿���ж������������������еĺ�Ϊ100(���ٰ���������)��
û���,���͵õ���һ������������Ϊ100������:18,19,20,21,22��
���ڰ����⽻����,���ܲ���Ҳ�ܿ���ҳ����к�ΪS��������������? Good Luck! 
�������:
������к�ΪS�������������С������ڰ��մ�С�����˳�����м䰴�տ�ʼ���ִ�С�����˳��*/
class Solution {
public:
	vector<vector<int>> FindContinuousSequence(int sum) {
		//�䶯�ĳ��ӣ������ͽ�������ĵ����ֺ���
		int start = 1;
		int end = 2;
		int curSum = start + end;
		vector<int> a;
		vector<vector<int>> ans;
		if (sum<3)
		{
			return ans;
		}
		while (start<sum+1/2 && end<sum)
		{
			while (curSum>sum)
			{
				curSum -= start;
				start++;
			}
			if (curSum == sum)
			{
				for (int i = start; i <= end; i++)
				{
					a.push_back(i);
				}
				ans.push_back(a);
				a.clear();
			}
			end++;
			curSum += end;
		}
		return ans;
		/*	vector<int> a;		//����ö�٣�ûϣ����
		vector<vector<int>> ans;
		for (int x = 0; x < sum/2; x++)
		{
			for (int y = x+1; ; y++)
			{
				if (y*(y+1) - x*(x-1) == 2*sum)
				{
					for (int i = x; i <= y; i++)
					{
						a.push_back(i);
					}
					ans.push_back(a);
					a.clear();
					break;
				}
			}
		}
		return ans;*/
	}
};