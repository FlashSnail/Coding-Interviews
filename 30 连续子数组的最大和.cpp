/*30、在古老的一维模式识别中,常常需要计算连续子向量的最大和,
当向量全为正数的时候,问题很好解决。但是,如果向量中包含负数,
是否应该包含某个负数,并期望旁边的正数会弥补它呢？
例如:{6,-3,-2,7,-15,1,2,2},连续子向量的最大和为8(从第0个开始,到第3个为止)(子向量的长度至少是1)*/
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