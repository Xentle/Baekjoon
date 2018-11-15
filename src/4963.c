#include <stdio.h>

int map[60][60];
void dfs(int h, int w);

int main() {
	int w, h, ans;
	while(1) {
		ans = 0;
		scanf("%d %d", &w, &h);
		getchar();
		if(w == 0 && h == 0)
			break;
		for(int i=0; i<60; i++)
			for(int j=0; j<60; j++)
				map[i][j] = 0;
		for(int i=1; i<=h; i++) {
			for(int j=1; j<=w; j++) {
				scanf("%d", &map[i][j]);
				getchar();
			}
		}
		for(int i=1; i<=h; i++) {
			for(int j=1; j<=w; j++) {
				if(map[i][j] == 1) {
					ans++;
					dfs(i, j);
				}
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}

void dfs(int h, int w) {
	map[h][w] = 0;
	if(map[h-1][w-1] == 1)
		dfs(h-1, w-1);
	if(map[h-1][w+1] == 1)
		dfs(h-1, w+1);
	if(map[h+1][w-1] == 1)
		dfs(h+1, w-1);
	if(map[h+1][w+1] == 1)
		dfs(h+1, w+1);
	if(map[h][w-1] == 1)
		dfs(h, w-1);
	if(map[h][w+1] == 1)
		dfs(h, w+1);
	if(map[h-1][w] == 1)
		dfs(h-1, w);
	if(map[h+1][w] == 1)
		dfs(h+1, w);
	return;
}