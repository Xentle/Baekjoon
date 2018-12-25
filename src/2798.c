#include <stdio.h>

int main() {
	int n, x, card[100], max = 0, temp;
	scanf("%d %d", &n, &x);
	getchar();
	for(int i=0; i<n; i++) {
		scanf("%d", &card[i]);
		getchar();
	}
	for(int i=0; i<n-2; i++) {
		for(int j=i+1; j<n-1; j++) {
			for(int k=j+1; k<n; k++) {
				temp = card[i] + card[j] + card[k];
				if(temp <= x) {
					if(temp > max)
						max = temp;
				}
			}
		}
	}
	printf("%d\n", max);
	return 0;
}