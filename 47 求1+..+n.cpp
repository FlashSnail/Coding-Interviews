/*47����1+2+3+...+n��Ҫ����ʹ�ó˳�����
for��while��if��else��switch��case�ȹؼ��ּ������ж���䣨A?B:C����*/
class Solution {
public:
	int sum = 0;
	int Sum_Solution(int n) {
		sum = n;
		sum && (sum += Sum_Solution(n - 1));	//��·ԭ����sum = 0ʱ�Ͳ������ˣ�ֱ�ӷ���ֵ
		return sum
	}
};