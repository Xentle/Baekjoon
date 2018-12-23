#include <stdio.h>
// 할아버지는 유명해!

int main() {
	int n, m, p[10001], t, max, max_i;
	while(1) {
		max = 0;
		for(int i=1; i<10001; i++)
			p[i] = 0;
		scanf("%d %d", &n, &m);
		getchar();
		if(n == 0 && m == 0)
			break;
		for(int i=0; i<n; i++) {
			for(int j=0; j<m; j++) {
				scanf("%d", &t);
				getchar();
				p[t]++;
			}
		}
		for(int i=1; i<10001; i++)
			if(p[i] > max) {
				max = p[i];
				max_i = i;
			}
		p[max_i] = 0;
		max = 0;
		for(int i=1; i<10001; i++)
			if(p[i] > max)
				max = p[i];
		for(int i=1; i<10001; i++)
			if(p[i] == max)
				printf("%d ", i);
		printf("\n");
	}
	return 0;
}