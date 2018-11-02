#include <stdio.h>

int group[500], group_n=0, arr[30][30];
void bfs(int i, int j);

int main() {
	int s, t;
	for(int i=0; i<30; i++)
		for(int j=0; j<30; j++)
			arr[i][j] = 0;
	scanf("%d", &s);
	getchar();
	for(int i=0; i<500; i++)
		group[i] = 0;
	for(int i=1; i<=s; i++) {
		for(int j=1; j<=s; j++) {
			t = getchar();
			t -= '0';
			arr[i][j] = t;
		}
		getchar();
	}
	for(int i=1; i<=s; i++)
		for(int j=1; j<=s; j++)
			if(arr[i][j] == 1) {
				bfs(i, j);
				group_n++;
			}
	if(group_n == 0)
		printf("0\n");
	else {
		group_n;
		for(int i=group_n-1; i>0; i--) {
			for(int j=0; j<i; j++) {
				if(group[j] > group[j+1]) {
					t = group[j+1];
					group[j+1] = group[j];
					group[j] = t;
				}
			}
		}
		printf("%d\n", group_n);
		for(int i=0; i<group_n; i++)
			printf("%d\n", group[i]);
	}
	return 0;
}

void bfs(int i, int j) {
	group[group_n]++;
	arr[i][j] = 0;
	if(arr[i+1][j] == 1)
		bfs(i+1, j);
	if(arr[i-1][j] == 1)
		bfs(i-1, j);
	if(arr[i][j+1] == 1)
		bfs(i, j+1);
	if(arr[i][j-1] == 1)
		bfs(i, j-1);
	return;
}