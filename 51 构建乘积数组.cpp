/*51������һ������A[0,1,...,n-1],�빹��һ������B[0,1,...,n-1],
����B�е�Ԫ��B[i]=A[0]*A[1]*...*A[i-1]*A[i+1]*...*A[n-1]������ʹ�ó�����*/
class Solution {
public:
	vector<int> multiply(const vector<int>& A) {
		vector<int> ans;
		int size = A.size();
		ans.push_back(1);
		for (int i = 0; i < size-1; i++)
		{
			ans.push_back(ans.back*A[i]);
		}
		int temp = 1;
		for (int i = size - 1; i >= 0; i--)
		{
			ans[i] = ans[i] * temp;
			temp = temp*A[i];
		}
		return ans;
	}
};