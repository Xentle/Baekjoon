#include <stdio.h>

int main() {
	int n, arr[50], P[50]={-1}, P_index=0, min, arr_index;
	scanf("%d", &n);
	for(int i=0; i<n; i++) {
		scanf("%d", &arr[i]);
		getchar();
	}
	for(int i=0; i<n; i++) {
		min = 2000;
		for(int j=n-1; j>=0; j--) {
			if(arr[j] <= min) {
				min = arr[j];
				arr_index = j;
			}
		}
		P[arr_index] = P_index++;
		arr[arr_index] = 5000;
	}
	for(int i=0; i<n-1; i++)
		printf("%d ", P[i]);
	printf("%d\n", P[n-1]);
	return 0;
}