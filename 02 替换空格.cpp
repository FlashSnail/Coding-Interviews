/*2����ʵ��һ����������һ���ַ����еĿո��滻�ɡ�%20����
���磬���ַ���ΪWe Are Happy.�򾭹��滻֮����ַ���ΪWe%20Are%20Happy��*/
class Solution {
public:
	void replaceSpace(char *str, int length) {

		int OldLength = 0;
		int NewLength = 0;
		int BlankLength = 0;
		while (str[OldLength] != '\0'){
			if (str[OldLength] == ' '){
				BlankLength++;
			}
			OldLength++;
		}
		NewLength = OldLength + BlankLength * 2;
		if (NewLength>length)
			return;
		while (NewLength>OldLength){
			if (str[OldLength] == ' '){
				str[NewLength--] = '0';
				str[NewLength--] = '2';
				str[NewLength--] = '%';
			}
			else
				str[NewLength--] = str[OldLength];
			OldLength--;
		}
	}
};