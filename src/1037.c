#include <stdio.h>

int main() {
	int n, real[51], temp;
	scanf("%d", &n);
	getchar();
	for(int i=1; i<=n; i++) {
		scanf("%d", &real[i]);
		getchar();
	}
	for(int i=n; i>=2; i--) {
		for(int j=1; j<i; j++) {
			if(real[j] > real[j+1]) {
				temp = real[j+1];
				real[j+1] = real[j];
				real[j] = temp;
			}
		}
	}
	printf("%d\n", real[1] * real[n]);
	return 0;
}