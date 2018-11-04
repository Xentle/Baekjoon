#include <stdio.h>

int main() {
	int ten, twelve, sixteen, i1, i2, i3;
	for(int i=1000; i<=9999; i++) {
		ten = twelve = sixteen = 0;
		i1 = i2 = i3 = i;
		while(i1 > 0) {
			ten += i1 % 10;
			i1 /= 10;
		}
		while(i2 > 0) {
			twelve += i2 % 12;
			i2 /= 12;
		}
		while(i3 > 0) {
			sixteen += i3 % 16;
			i3 /= 16;
		}
		if(ten == twelve && ten == sixteen)
			printf("%d\n", i);
	}
	return 0;
}