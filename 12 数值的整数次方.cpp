/*12、给定一个double类型的浮点数base和int类型的整数exponent。求base的exponent次方。*/
class Solution {
public:
	double Power(double base, int exponent) {
		double ans = base;
		if (0 == exponent)
		{
			return 1;
		}
		if (exponent > 0)
		{
			for (int i = 1; i < exponent; i++)
			{
				ans *= base;
			}
		}
		if (exponent < 0)
		{
			exponent = -exponent;
			ans = 1 / base;
			for (int i = 1; i < exponent; i++)
			{
				ans *= (1 / base);
			}
		}		
		return ans;
	}
};