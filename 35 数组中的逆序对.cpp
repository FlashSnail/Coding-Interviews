/*35���������е��������֣����ǰ��һ�����ִ��ں�������֣�
���������������һ������ԡ�����һ������,�����������е�����Ե�����P��
����P��1000000007ȡģ�Ľ������� �����P%1000000007 
��������:
��Ŀ��֤�����������û�е���ͬ������
���ݷ�Χ��
	����%50������,size<=10^4
	����%75������,size<=10^5
	����%100������,size<=2*10^5
��������:
1,2,3,4,5,6,7,0
�������:
7*/
//˼·���鲢����鲢ʱ�����data[i]>data[j]��i~mid����j��count += mid - i + 1���ɡ�
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