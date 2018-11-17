#include <stdio.h>

int main() {
	int n, p[101], t, s=0, ans=0, check;
	scanf("%d", &n);
	getchar();
	for(int i=0; i<101; i++)
		p[i] = 0;
	for(int i=0; i<n; i++) {
		scanf("%d", &t);
		getchar();
		check = 0;
		for(int j=0; j<s; j++) {
			if(t == p[j]) {
				ans++;
				check = 1;
				break;
			}
		}
		if(check == 0)
			p[s++] = t;
	}
	printf("%d\n", ans);
	return 0;
}