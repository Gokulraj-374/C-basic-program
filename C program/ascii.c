//Program to check whether the given character is alphabet or not
#include <stdio.h>
int main(){
	unsigned char ch = '½';
	scanf("%c", &ch);
	if ((ch >='A' && ch<='Z') || (ch>='a' && ch<='z')) // 10<=A>=20
		printf("%c is an alphabet", ch);
	else
		printf("%c is not an alphabet",ch);
	return 0;
}

//ASCII --> Character encoding format
//		  supports only English Language
//		0-127 --> standard
//		256
//		0 to 255
//Unicode  --> 60000+
		