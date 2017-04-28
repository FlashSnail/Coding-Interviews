/*63、如何得到一个数据流中的中位数？如果从数据流中读出奇数个数值，
那么中位数就是所有数值排序之后位于中间的数值。如果从数据流中读出偶数个数值，
那么中位数就是所有数值排序之后中间两个数的平均值。*/
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