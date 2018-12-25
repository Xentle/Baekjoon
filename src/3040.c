#include <stdio.h>

int main() {
	int hat[10], sum=0;
	for(int i=1; i<10; i++) {
		scanf("%d", &hat[i]);
		getchar();
		sum += hat[i];
	}
	for(int i=1; i<9; i++) {
		for(int j=i+1; j<10; j++) {
			if((sum - hat[i] - hat[j]) == 100) {
				hat[i] = -1;
				hat[j] = -1;
				break;
			}
		}
	}
	for(int i=1; i<10; i++) {
		if(hat[i] != -1)
			printf("%d\n", hat[i]);
	}
	return 0;
}