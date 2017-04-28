/*6、把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。
输入一个非递减排序的数组的一个旋转，输出旋转数组的最小元素。
例如数组{3,4,5,1,2}为{1,2,3,4,5}的一个旋转，该数组的最小值为1。
NOTE：给出的所有元素都大于0，若数组大小为0，请返回0。*/
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
				//	return rotateArray[i + 1];	//不知道为什么，如果不把return放在循环体外面，在线编译器就认为没有返回值
				index = i + 1;
				break;
			}
		}
		return rotateArray[index];
	}
};