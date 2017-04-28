/*13������һ���������飬ʵ��һ�����������������������ֵ�˳��
ʹ�����е�����λ�������ǰ�벿�֣����е�ż��λ��λ������ĺ�벿�֣�
����֤������������ż����ż��֮������λ�ò��䡣*/
class Solution {
public:
	void reOrderArray(vector<int> &array) {
		queue<int> odd, even;
		int size = array.size();
		for (int i = 0; i < size; i++)
		{
			if (0 == array[i] % 2)
			{
				even.push(array[i]);
			}
			else
			{
				odd.push(array[i]);
			}
		}
		for (int i = 0; i < size; i++)
		{
			if (!odd.empty())
			{
				array[i] = odd.front();
				odd.pop();
			}
			else
			{
				array[i] = even.front();
				even.pop();
			}			
		}
	}
};