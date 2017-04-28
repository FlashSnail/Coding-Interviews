/*11、输入一个整数，输出该数二进制表示中1的个数。其中负数用补码表示。*/
class Solution {
public:
	int  NumberOf1(int n) {
		int flag = 1;
		int num = 0;
		while (flag != 0)
		{
			if (flag & n != 0)
				num++;
			flag = flag << 1;
		}
		return num;
	}
};