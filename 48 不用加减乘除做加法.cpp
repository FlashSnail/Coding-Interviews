/*48��дһ������������������֮�ͣ�Ҫ���ں������ڲ���ʹ��+��-��*��/����������š�*/
class Solution {
public:
	int Add(int num1, int num2)
	{
		if (num1 == 0)
		{
			return num2;
		}
		else
		{
			return Add((num1 & num2) << 1, num1 ^ num2);
		}
	}
};