#include <stdio.h>

int main() {
	int small[10], sum=0, check=0, temp;
	for(int i=1; i<=9; i++) {
		scanf("%d", &small[i]);
		getchar();
		sum += small[i];
	}
	sum -= 100;
	for(int i=1; i<=8; i++) {
		for(int j=i+1; j<=9; j++) {
			if(small[i] + small[j] == sum) {
				check = 1;
				small[i] = 500;
				small[j] = 500;
				break;
			}
		}
		if(check == 1)
			break;
	}
	for(int i=9; i>=2; i--) {
		for(int j=1; j<i; j++)
			if(small[j] > small[j+1]) {
				temp = small[j+1];
				small[j+1] = small[j];
				small[j] = temp;
			}
	}
	for(int i=1; i<=7; i++)
		printf("%d\n", small[i]);
	return 0;
}