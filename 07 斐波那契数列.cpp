/*7����Ҷ�֪��쳲��������У�����Ҫ������һ������n���������쳲��������еĵ�n�n<=39*/
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
		for (int i = 3; i < n+1; i++)		//���õ�������Ϊ�����ظ�����
		{
			F[i] = F[i - 1] + F[i - 2];
		}
		return F[n];
	}
};