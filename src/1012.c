#include <stdio.h>

int T, W, H, N, arr[52][52], ans;
void dfs(int i, int j);

int main() {
	scanf("%d", &T);
	getchar();
	for(int i=0; i<T; i++) {
		ans = 0;
		scanf("%d %d %d", &W, &H, &N);
		getchar();
		for(int j=0; j<52; j++)
			for(int k=0; k<52; k++)
				arr[j][k] = 0;
		for(int j=1; j<=N; j++) {
			int w, h;
			scanf("%d %d", &w, &h);
			arr[w+1][h+1] = 1;
		}
		for(int i=1; i<=W; i++) {
			for(int j=1; j<=H; j++) {
					if(arr[i][j] == 1) {
						dfs(i, j);
						ans++;
					}
				}
			}
		printf("%d\n", ans);
	}
	return 0;
}

void dfs(int i, int j) {
	arr[i][j] = 0;
	if(arr[i-1][j] == 1)
		dfs(i-1, j);
	if(arr[i+1][j] == 1)
		dfs(i+1, j);
	if(arr[i][j-1] == 1)
		dfs(i, j-1);
	if(arr[i][j+1] == 1)
		dfs(i, j+1);
	return;
}