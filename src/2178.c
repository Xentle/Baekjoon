#include <stdio.h>

int m[101][101], w, h, maze[101][101];
void bfs(int i, int j);

int main() {
	int n, ans;
	scanf("%d %d", &h, &w);
	getchar();
	for(int i=1; i<=h; i++) {
		for(int j=1; j<=w; j++) {
			n = getchar();
			n -= 48;
			maze[i][j] = n;
			m[i][j]= 50000;
		}
		getchar();
	}
	m[1][1] = 1;
	bfs(1, 1);
	printf("%d\n", m[h][w]);
	return 0;
}

void bfs(int i, int j) {
	int l = m[i][j] + 1;
	if(l < m[i+1][j] && i+1 <= h && i+1 >= 1 && j <= w && j >= 1 && maze[i+1][j] != 0) {
		m[i+1][j] = l;
		bfs(i+1, j);
	}
	if(l < m[i][j+1] && i <= h && i >= 1 && j+1 <= w && j+1 >= 1 && maze[i][j+1] != 0) {
		m[i][j+1] = l;
		bfs(i, j+1);
	}
	if(l < m[i][j-1] && i <= h && i >= 1 && j-1 <= w && j-1 >= 1 && maze[i][j-1] != 0) {
		m[i][j-1] = l;
		bfs(i, j-1);
	}
	if(l < m[i-1][j] && i-1 <= h && i-1 >= 1 && j <= w && j >= 1 && maze[i-1][j] != 0) {
		m[i-1][j] = l;
		bfs(i-1, j);
	}
	return;
}