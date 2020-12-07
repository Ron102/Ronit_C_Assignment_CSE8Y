#include <stdio.h>
#include <string.h>
int main() {
	char hex[20];
	int dec=0,len,mul=1;
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
	printf("The number in decimal is: %d",dec);
	return 0;
}