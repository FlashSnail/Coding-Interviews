/*21�����������������У���һ�����б�ʾջ��ѹ��˳��
���жϵڶ��������Ƿ�Ϊ��ջ�ĵ���˳�򡣼���ѹ��ջ���������־�����ȡ�
��������1,2,3,4,5��ĳջ��ѹ��˳������4��5,3,2,1�Ǹ�ѹջ���ж�Ӧ��һ���������У�
��4,3,5,1,2�Ͳ������Ǹ�ѹջ���еĵ������С���ע�⣺���������еĳ�������ȵģ�*/
class Solution {
public:
bool IsPopOrder(vector<int> pushV,vector<int> popV) {
	int size = pushV.size();
	stack<int> temp;
	int j=0;
	for (int i = 0; i < size; i++)
	{
		temp.push(pushV[i]);
		while (j < size && temp.top() == popV[j])
		{
			temp.pop();
			j++;
		}
	}
	return temp.empty();
}
};