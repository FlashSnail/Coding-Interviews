/*11������һ��������������������Ʊ�ʾ��1�ĸ��������и����ò����ʾ��*/
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