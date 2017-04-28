/*2、请实现一个函数，将一个字符串中的空格替换成“%20”。
例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。*/
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