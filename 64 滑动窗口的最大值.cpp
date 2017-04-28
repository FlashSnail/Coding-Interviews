/*64������һ������ͻ������ڵĴ�С���ҳ����л�����������ֵ�����ֵ��
���磬�����������{2,3,4,2,6,2,5,1}���������ڵĴ�С3��
��ôһ������6���������ڣ����ǵ����ֵ�ֱ�Ϊ{4,4,6,6,6,5}��
�������{2,3,4,2,6,2,5,1}�Ļ�������������6����
{[2,3,4],2,6,2,5,1}�� {2,[3,4,2],6,2,5,1}�� {2,3,[4,2,6],2,5,1}�� 
{2,3,4,[2,6,2],5,1}�� {2,3,4,2,[6,2,5],1}�� {2,3,4,2,6,[2,5,1]}��*/
class Solution {
public:
	vector<int> maxInWindows(const vector<int>& num, unsigned int size)
	{
		vector<int> ans;
		if (0 == size || 0 == num.size())
		{
			return ans;
		}
		vector<int>::const_iterator max;
		int begin = 0;
		int end = begin + size;
		while (end <= num.size())
		{
			max = max_element(num.begin() + begin, num.begin() + end);
			ans.push_back(*max);
			begin++;
			end++;
		}
		return ans;
	}
};