/*45��LL���������ر��,��Ϊ��ȥ����һ���˿���,���������Ȼ��2������,2��С��(һ����ԭ����54��^_^)...
��������г����5����,�����Լ�������,�����ܲ��ܳ鵽˳��,����鵽�Ļ�,������ȥ��������Ʊ,�ٺ٣���
������A,����3,С��,����,��Ƭ5��,��Oh My God!������˳��.....LL��������,��������,������\С �����Կ����κ�����,
����A����1,JΪ11,QΪ12,KΪ13�������5���ƾͿ��Ա�ɡ�1,2,3,4,5��(��С���ֱ���2��4),��So Lucky!����
LL����ȥ��������Ʊ���� ����,Ҫ����ʹ�������ģ������Ĺ���,Ȼ���������LL��������Ρ�Ϊ�˷������,�������Ϊ��С����0��*/
class Solution {
public:
    bool IsContinuous( vector<int> numbers ) {
		if (numbers.size() == 0)
		{
			return false;
		}
		sort(numbers.begin(), numbers.end());
		int zero = 0;
		bool ans = true;
		for (int i = 0; i < numbers.size(); i++)
		{
			if (numbers[i] == 0)
			{
				zero++;
			}
			if (zero == 4)
			{
				return ans;
			}
			if (numbers[i] != 0)
			{
				for (int j = i; j < numbers.size() - 1; j++)
				{
					int diff = numbers[j + 1] - numbers[j] - 1;
					if (diff<0)
					{
						ans = false;
						break;
					}
					if (diff > zero)
					{
						ans = false;
						break;
					}
					else
					{
						zero -= diff;
					}
					if (zero < 0)
					{
						ans = false;
						break;
					}
				}
				break;
			}
		}
		return ans;
    }
};