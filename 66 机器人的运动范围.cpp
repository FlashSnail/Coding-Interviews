/*66��������һ��m�к�n�еķ���һ�������˴�����0,0�ĸ��ӿ�ʼ�ƶ���
ÿһ��ֻ�������ң��ϣ����ĸ������ƶ�һ�񣬵��ǲ��ܽ�������������������λ֮�ʹ���k�ĸ��ӡ�
���磬��kΪ18ʱ���������ܹ����뷽��35,37������Ϊ3+5+3+7 = 18��
���ǣ������ܽ��뷽��35,38������Ϊ3+5+3+8 = 19�����ʸû������ܹ��ﵽ���ٸ����ӣ�*/
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
