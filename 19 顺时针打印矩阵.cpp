/*19������һ�����󣬰��մ���������˳ʱ���˳�����δ�ӡ��ÿһ�����֣�
���磬����������¾��� 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 
�����δ�ӡ������1,2,3,4,8,12,16,15,14,13,9,5,6,7,11,10.*/
class Solution {
public:
vector<int> printMatrix(vector<vector<int> > matrix) {
	int row = matrix.size();
	int col = matrix[0].size();
	int circle = (min(row, col)) / 2 + 1;
	vector<int> ans;
	if (1 == row)
	{
		for (int i = 0; i < col; i++)
		{
			ans.push_back(matrix[0][i]);
		}
		return ans;
	}
	if (1 == col)
	{
		for (int i = 0; i < row; i++)
		{
			ans.push_back(matrix[i][0]);
		}
		return ans;
	}
	int index = 0;
	for (int i = 0; i < circle; i++)
	{
		//������
		for (int left = i; left < col - i; left++)
		{
			ans.push_back(matrix[i][left]);
		}
		//���ϵ���
		for (int top = i+1;top < row - i; top++)
		{
			ans.push_back(matrix[top][col - 1 - i]);
		}
		//���ҵ���
		for (int right = col - 2 - i; right >= i; right--)
		{
			ans.push_back(matrix[row - 1 - i][right]);
		}
		//���µ���
		for (int bottom = row - 2 - i; bottom > i; bottom--)
		{
			ans.push_back(matrix[bottom][i]);
		}
	}
	return ans;
}
};