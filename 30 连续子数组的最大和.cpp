/*30���ڹ��ϵ�һάģʽʶ����,������Ҫ��������������������,
������ȫΪ������ʱ��,����ܺý��������,��������а�������,
�Ƿ�Ӧ�ð���ĳ������,�������Աߵ��������ֲ����أ�
����:{6,-3,-2,7,-15,1,2,2},����������������Ϊ8(�ӵ�0����ʼ,����3��Ϊֹ)(�������ĳ���������1)*/
class Solution {
public:
	int FindGreatestSumOfSubArray(vector<int> array) {
		vector<int> ans;
		vector<int>::iterator iter = array.begin();
		while (iter != array.end())
		{
			vector<int> wave;
			int sum = 0;
			for (auto i : array)
			{
				sum += i;
				wave.push_back(sum);
			}
			vector<int>::iterator max;
			int index;
			int a = 0;
			max = max_element(wave.begin(), wave.end());
			index = distance(wave.begin(), max);
			for (int i = 0; i <= index; i++)
			{
				a += array[i];
			}
			ans.push_back(a);
			array.erase(array.begin());
			iter = array.begin();
		}
		vector<int>::iterator max_ele;
		max_ele = max_element(ans.begin(), ans.end());
		int index = distance(ans.begin(), max_ele);
		return ans[index];
	}
};