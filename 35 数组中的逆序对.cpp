/*35、在数组中的两个数字，如果前面一个数字大于后面的数字，
则这两个数字组成一个逆序对。输入一个数组,求出这个数组中的逆序对的总数P。
并将P对1000000007取模的结果输出。 即输出P%1000000007 
输入描述:
题目保证输入的数组中没有的相同的数字
数据范围：
	对于%50的数据,size<=10^4
	对于%75的数据,size<=10^5
	对于%100的数据,size<=2*10^5
输入例子:
1,2,3,4,5,6,7,0
输出例子:
7*/
//思路：归并排序归并时，如果data[i]>data[j]则i~mid都比j大，count += mid - i + 1即可。
class Solution {
public:
	int ans = 0;
	void mergeSort(vector<int> &data, int start, int end, vector<int> &temp)
	{
		if (1 == end - start)
		{
			if (data[start]>data[end])	
			{
				ans += 1;
				if (ans >= 1000000007)
				{
					ans %= 1000000007;
				}
				swap(data[start], data[end]);
			}
			return;
		}
		else if (start == end)
		{
			return;
		}
		else
		{
			int mid = (start + end) / 2;
			mergeSort(data, start, mid, temp);
			mergeSort(data, mid + 1, end, temp);
			merge(data, start, end, temp);
			for (int i = start; i <= end; i++)
			{
				data[i] = temp[i];
			}
		}
	}
	void merge(vector<int> &data, int start, int end, vector<int> &temp)
	{
		int mid = (start + end) / 2;
		int left_index = start;
		int right_index = mid + 1;
		int temp_index = start;
		while (left_index<=mid && right_index<=end)	
		{
			if (data[left_index]>data[right_index])
			{
				ans += mid - left_index + 1;
				if (ans >= 1000000007)
				{
					ans %= 1000000007;
				}
				temp[temp_index++] = data[right_index++];
			}
			else
			{
				temp[temp_index++] = data[left_index++];
			}
		}
		while (left_index <= mid)
		{
			temp[temp_index++] = data[left_index++];
		}
		while (right_index <= end)
		{
			temp[temp_index++] = data[right_index++];
		}
	}
	int InversePairs(vector<int> data) {
		vector<int> temp(data.size());
		int end = data.size() - 1;
		mergeSort(data, 0, end, temp);
		return ans % 1000000007;
	}
};