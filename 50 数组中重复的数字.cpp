/*50����һ������Ϊn����������������ֶ���0��n-1�ķ�Χ�ڡ� 
������ĳЩ�������ظ��ģ�����֪���м����������ظ��ġ�Ҳ��֪��ÿ�������ظ����Ρ�
���ҳ�����������һ���ظ������֡� ���磬������볤��Ϊ7������{2,3,1,0,2,5,3}����ô��Ӧ��������ظ�������2����3��*/
class Solution {
public:
	// Parameters:
	//        numbers:     an array of integers
	//        length:      the length of array numbers
	//        duplication: (Output) the duplicated number in the array number
	// Return value:       true if the input is valid, and there are some duplications in the array number
	//                     otherwise false
	bool duplicate(int numbers[], int length, int* duplication) {
		int *hash = new int[length]();
		int index = 0;
		for (int i = 0; i < length; i++)
		{
			hash[numbers[i]]++;
		}
		for (int i = 0; i < length; i++)
		{
			if (hash[i] > 1)
			{
				duplication[index] = i;
				index++;
			}
		}
		if (index > 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};