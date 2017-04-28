/*23、输入一个整数数组，判断该数组是不是某二叉搜索树的后序遍历的结果。
如果是则输出Yes,否则输出No。假设输入的数组的任意两个数字都互不相同。*/
class Solution {
public:
	bool VerifySquenceOfBST(vector<int> sequence) {
		int size = sequence.size();
		if (size  == 0)
		{
			return false;
		}
		int root = sequence[size - 1];
		vector<int> left;
		vector<int> right;
		int index = 0;
		while ((index < size - 1) && (sequence[index] < root))
		{
			index++;
		}
		for (int i = 0; i < index; i++)
		{
			if (sequence[i] > root)
			{
				return false;
			}
			left.push_back(sequence[i]);
		}
		for (int i = index; i < size-1; i++)
		{
			if (sequence[i] < root)
			{
				return false;
			}
			right.push_back(sequence[index]);
		}

		if (left.size() == 0 && right.size() != 0)
		{
			return VerifySquenceOfBST(right);
		}
		else if (right.size() == 0 && left.size() != 0)
		{
			return VerifySquenceOfBST(left);
		}
		else if (left.size() == 0 && right.size() == 0 && size == 1)
		{
			return true;
		}
		else
		{
			return VerifySquenceOfBST(left) && VerifySquenceOfBST(right);
		}		
	}
};
