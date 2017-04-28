/*66、地上有一个m行和n列的方格。一个机器人从坐标0,0的格子开始移动，
每一次只能向左，右，上，下四个方向移动一格，但是不能进入行坐标和列坐标的数位之和大于k的格子。
例如，当k为18时，机器人能够进入方格（35,37），因为3+5+3+7 = 18。
但是，它不能进入方格（35,38），因为3+5+3+8 = 19。请问该机器人能够达到多少个格子？*/
class Solution {
public:
	int flag[1000][1000];
	int sum(int x, int y){
		int sum = 0;
		while (x > 0){
			sum += x % 10;
			x /= 10;
		}
		while (y > 0){
			sum += y % 10;
			y /= 10;
		}
		return sum;
	}
	int count(int threshold, int rows, int cols, int i, int j){
		int ans = 0;
		if (i >= 0 && i < rows && j >= 0 && j < cols && sum(i, j) <= threshold && flag[i][j] == 0){
			flag[i][j] = 1;
			ans += count(threshold, rows, cols, i - 1, j)
				+ count(threshold, rows, cols, i + 1, j)
				+ count(threshold, rows, cols, i, j - 1)
				+ count(threshold, rows, cols, i, j + 1)
				+ 1;
		}
		return ans;
	}
	int movingCount(int threshold, int rows, int cols)
	{
		memset(flag, 0, sizeof(flag));
		return count(threshold, rows, cols, 0, 0);
	}
};
