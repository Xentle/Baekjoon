#include <stdio.h>

int main() {
	int L, P, arr[6];
	scanf("%d %d", &L, &P);
	getchar();
	for(int i=1; i<=5; i++) {
		scanf("%d", &arr[i]);
		getchar();
	}
	for(int i=1; i<5; i++)
		printf("%d ", arr[i]-L*P);
	printf("%d\n", arr[5]-L*P);
	return 0;
}