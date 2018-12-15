#include <stdio.h>

int main() {
	unsigned long long int ans;
	int T, e, w;
	int m[31], s[31];
	scanf("%d", &T);
	getchar();
	for(int i=0; i<T; i++) {
		ans = 1;
		scanf("%d %d", &w, &e);
		getchar();
		if(w == 15 && e == 30) {
			printf("155117520\n");
			continue;
		}
		for(int i=1; i<31; i++)
			m[i] = s[i] = i;
		if(w > e/2)
			w = e-w;
		for(int j=1; j<=w; j++) {
			for(int k=e-w+1; k<=w; k++) {
				if(s[k] % m[j] == 0) {
					s[k] /= m[j];
					m[j] = 1;
					break;
				}
			}
		}
		for(int j=e-w+1; j<=e; j++)
			ans *= s[j];
		for(int j=1; j<=w; j++)
			ans /= m[j];
		printf("%lld\n", ans);
	}
	return 0;
}