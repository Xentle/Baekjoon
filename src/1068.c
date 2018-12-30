#include <stdio.h>

int edge[51][51][2], root;
int checkup(int x);

int main() {
	int n, t, d, sum, ans=0;
	scanf("%d", &n);
	getchar();
	for(int i=0; i<51; i++)
		for(int j=0; j<51; j++) {
			edge[i][j][0] = 0;
			edge[i][j][1] = 0;
		}
	for(int i=0; i<n; i++) {
		scanf("%d", &t);
		getchar();
		if(t == -1)
			root = i;
		else {
			edge[i][t][0] = 1;
			edge[t][i][1] = 1;
		}
	}
	scanf("%d", &d);
	for(int i=0; i<51; i++) {
		edge[i][d][1] = 0;
		edge[d][i][0] = 0;
	}
	if(d == root)
		printf("0\n");
	else {
		for(int i=0; i<51; i++) {
			if(i == root) {
				sum = 0;
				for(int j=0; j<51; j++)
					sum += edge[i][j][1];
				if(sum == 0) {
					printf("1\n");
					break;
				}
			}
			else {
				sum = 0;
				for(int j=0; j<51; j++)
					sum += edge[i][j][1];
				if(sum == 0) {
					sum = checkup(i);
					if(sum == 1)
						ans++;
				}
			}
		}
		printf("%d\n", ans);
	}
	return 0;
} // 0 위로 1 아래로

int checkup(int x) {
	int c = 0;
	if(x == root)
		return 1;
	for(int i=0; i<51; i++) {
		c += edge[x][i][0];
		if(edge[x][i][0] != 0)
			return checkup(i);
	}
	if(c == 0)
		return 0;
}