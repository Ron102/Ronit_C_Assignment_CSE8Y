#include <stdio.h>
int main() {
	int bin=0,i,x,mul=1;
	char hex[20]={0};
	printf("Enter number in hexadecimal: ");
	fgets(hex,20,stdin);
	printf("The number in binary is: ");
	for(i=0;hex[i+1]!=0;i++) {
		x=hex[i];
		if (x>'9') 
			x-=55;
		else
			x-=48;
		while (x>0) {
			bin+=(x%2)*mul;
			x/=2;
			mul*=10;
		}
		printf("%0.4d",bin);
		mul=1;
		bin=0;
	}
}