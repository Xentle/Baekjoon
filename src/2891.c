#include <stdio.h>

int main() {
	int n, b, m, team[12], ans=0;
	scanf("%d %d %d", &n, &b, &m);
	getchar();
	for(int i=1; i<=n; i++)
		team[i] = 1;
	team[0] = 0;
	team[n+1] = 0;
	for(int i=0, j; i<b; i++) {
		scanf("%d", &j);
		getchar();
		team[j]--;
	}
	for(int i=0, j; i<m; i++) {
		scanf("%d", &j);
		getchar();
		team[j]++;
	}
	for(int i=1; i<=n; i++) {
		if(team[i] == 0) {
			if(team[i-1] == 2) {
				team[i-1]--;
				team[i]++;
			}
			else if(team[i+1] == 2) {
				team[i+1]--;
				team[i]++;
			}
		}
	}
	for(int i=1; i<=n; i++)
		if(team[i] == 0)
			ans++;
	printf("%d\n", ans);
	return 0;
}