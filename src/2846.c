#include <stdio.h>

int main() {
	int n, height[10001], max=0, temp;
	scanf("%d", &n);
	for(int i=1; i<=n; i++) {
		scanf("%d", &height[i]);
		getchar();
	}
	if(n == 1)
		printf("0\n");
	else {
		temp = height[1];
		for(int i=1; i<=n-1; i++) {
			if(height[i+1] <= height[i]) {
				temp = height[i] - temp;
				if(temp > max)
					max = temp;
				temp = height[i+1];
			}
		}
		if(height[n] > height[n-1])
			if((temp = height[n] - temp) > max)
				max = temp;
		printf("%d\n", max);
	}
	return 0;
}