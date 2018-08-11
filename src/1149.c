#include <stdio.h>

int color[1000][3], ans[1000][3];

int main() {
	int n, min;
	scanf("%d", &n);
	getchar();
	for(int i=0; i<n; i++) {
		scanf("%d %d %d", &color[i][0], &color[i][1], &color[i][2]);
		getchar();
	}
	ans[0][0] = color[0][0];
	ans[0][1] = color[0][1];
	ans[0][2] = color[0][2];
	for(int i=1; i<n; i++) {
		if(ans[i-1][0] < ans[i-1][1])
			ans[i][2] = ans[i-1][0] + color[i][2];
		else
			ans[i][2] = ans[i-1][1] + color[i][2];
		if(ans[i-1][1] < ans[i-1][2])
			ans[i][0] = ans[i-1][1] + color[i][0];
		else
			ans[i][0] = ans[i-1][2] + color[i][0];
		if(ans[i-1][0] < ans[i-1][2])
			ans[i][1] = ans[i-1][0] + color[i][1];
		else
			ans[i][1] = ans[i-1][2] + color[i][1];
	}
	min = ans[n-1][0];
	for(int i=1; i<3; i++)
		if(ans[n-1][i] < min)
			min = ans[n-1][i];
	printf("%d\n", min);
	return 0;
}
	