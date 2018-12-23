#include <stdio.h>

int main() {
	int arr[6], t;
	for(int i=1; i<6; i++) {
		scanf("%d", &arr[i]);
		getchar();
	}
	for(int i=5; i>1; i--) {
		for(int j=1; j<i; j++) {
			if(arr[j] > arr[j+1]) {
				t = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = t;
				printf("%d %d %d %d %d\n", arr[1], arr[2], arr[3], arr[4], arr[5]);
			}
		}
	}
	return 0;
}