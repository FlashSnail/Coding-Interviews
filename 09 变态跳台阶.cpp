/*9��һֻ����һ�ο�������1��̨�ף�Ҳ��������2��������Ҳ��������n���������������һ��n����̨���ܹ��ж�����������*/
class Solution {
public:
	int jumpFloorII(int number) {
		int *jump = new int[number+1]();
		jump[0] = 0;
		jump[1] = 1;
		for (int i = 2; i < number+1; i++)
		{
			jump[i] = 2 * jump[i - 1];
		}
		return jump[number];
	}
};