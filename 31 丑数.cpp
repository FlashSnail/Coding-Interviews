/*31�����1~13��������1���ֵĴ���,�����100~1300��������1���ֵĴ�����
Ϊ�����ر�����һ��1~13�а���1��������1��10��11��12��13��˹�����6��,
���Ƕ��ں�����������û���ˡ�ACMerϣ�����ǰ����,������������ձ黯,
���Ժܿ���������Ǹ�����������1���ֵĴ�����*/
class Solution {
public:
	int NumberOf1Between1AndN_Solution(int n)
	{
		int ans = 0;
		int low, high;
		for (int i = 1; i <= n ; i *= 10)
		{
			high = n / i;
			low = n % i;
			ans += ((high + 8) / 10)*i + (high%i == 1)*(low + 1);
		}
		return ans;
	}
};