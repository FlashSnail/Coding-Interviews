/*19、输入一个矩阵，按照从外向里以顺时针的顺序依次打印出每一个数字，
例如，如果输入如下矩阵： 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 
则依次打印出数字1,2,3,4,8,12,16,15,14,13,9,5,6,7,11,10.*/
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
		//从左到右
		for (int left = i; left < col - i; left++)
		{
			ans.push_back(matrix[i][left]);
		}
		//从上到下
		for (int top = i+1;top < row - i; top++)
		{
			ans.push_back(matrix[top][col - 1 - i]);
		}
		//从右到左
		for (int right = col - 2 - i; right >= i; right--)
		{
			ans.push_back(matrix[row - 1 - i][right]);
		}
		//从下到上
		for (int bottom = row - 2 - i; bottom > i; bottom--)
		{
			ans.push_back(matrix[bottom][i]);
		}
	}
	return ans;
}
};