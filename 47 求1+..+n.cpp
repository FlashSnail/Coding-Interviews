/*47、求1+2+3+...+n，要求不能使用乘除法、
for、while、if、else、switch、case等关键字及条件判断语句（A?B:C）。*/
class Solution {
public:
	int sum = 0;
	int Sum_Solution(int n) {
		sum = n;
		sum && (sum += Sum_Solution(n - 1));	//短路原理，当sum = 0时就不计算了，直接返回值
		return sum
	}
};