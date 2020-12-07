#include <stdio.h>
#include <string.h>
int main() {
	char hex[20];
	int dec=0,len,oct=0,mul=1;
	printf("Enter hexadecimal value: ");
	fgets(hex,20,stdin);
	len = strlen(hex);
	for(int i=len-2;i>=0;i--) {
		if (hex[i]>='A' && hex[i]<='F')
			dec+=(hex[i]-55)*mul;
		else 
			dec+=(hex[i]-48)*mul;
		mul*=16;
	}
	mul=1;
	while (dec>0) {
		oct+=(dec%8)*mul;
		dec/=8;
		mul*=10;
	}
	printf("The number in octal is: %d",oct);
	return 0;
}