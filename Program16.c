#include <stdio.h>
int main() {
	int dec,i=0,x,len=0;
	char hex[20]={0},hex_rev[20]={0};
	printf("Enter number in decimal: ");
	scanf("%d",&dec);
	while (dec>0) {
		x=dec%16;
		if (x>9)
			hex_rev[i]=x+55;
		else
			hex_rev[i]=x+48;
		i++;
		dec/=16;
		len++;
	}
	for(i=0;i<len;i++)
		hex[i]=hex_rev[len-i-1];
	printf("The number in hexadecimal is: %s",hex);
	return 0;
}