/*6����һ�������ʼ�����ɸ�Ԫ�ذᵽ�����ĩβ�����ǳ�֮Ϊ�������ת��
����һ���ǵݼ�����������һ����ת�������ת�������СԪ�ء�
��������{3,4,5,1,2}Ϊ{1,2,3,4,5}��һ����ת�����������СֵΪ1��
NOTE������������Ԫ�ض�����0���������СΪ0���뷵��0��*/
class Solution {
public:
	int minNumberInRotateArray(vector<int> rotateArray) {
		int size = rotateArray.size();
		int index = 0;
		if (0 == size)
			return 0;
		for (int i = 0; i < size; i++)
		{
			if (rotateArray[i] > rotateArray[i + 1])
			{
				//	return rotateArray[i + 1];	//��֪��Ϊʲô���������return����ѭ�������棬���߱���������Ϊû�з���ֵ
				index = i + 1;
				break;
			}
		}
		return rotateArray[index];
	}
};