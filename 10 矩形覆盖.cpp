/*10�����ǿ�����2*1��С���κ��Ż�������ȥ���Ǹ���ľ��Ρ�
������n��2*1��С�������ص��ظ���һ��2*n�Ĵ���Σ��ܹ��ж����ַ�����*/
class Solution {	//���ɳ��Ѳ����й�������Ҫ��
public:
	int rectCover(int number) {
		if (number <= 2)
		{
			return number;
		}
		return rectCover(number - 1) + rectCover(number - 2);
	}
};
