/*63����εõ�һ���������е���λ����������������ж�����������ֵ��
��ô��λ������������ֵ����֮��λ���м����ֵ��������������ж���ż������ֵ��
��ô��λ������������ֵ����֮���м���������ƽ��ֵ��*/
class Solution {
public:
	vector<double> array;
	void Insert(int num)
	{
		array.push_back(num);
	}
	double GetMedian()
	{
		sort(array.begin(), array.end());
		int size = array.size();
		if (0 == size)
		{
			return 0;
		}
		if (0 == size%2)
		{
			return (array[size / 2] + array[(size / 2) - 1])/2;
		}
		else
		{
			return array[size / 2];
		}
	}
};