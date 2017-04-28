/*7、大家都知道斐波那契数列，现在要求输入一个整数n，请你输出斐波那契数列的第n项。n<=39*/
class Solution {
public:
	int Fibonacci(int n) {
		if (0 == n)
		{
			return 0;
		}
		if (1 == n || 2 == n)
		{
			return 1;
		}
		int *F = new int[n+1]();
		F[1] = 1;
		F[2] = 1;
		for (int i = 3; i < n+1; i++)		//不用迭代是因为避免重复计算
		{
			F[i] = F[i - 1] + F[i - 2];
		}
		return F[n];
	}
};