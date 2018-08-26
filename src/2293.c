#include <stdio.h>

int n, k, coin[101], m[100001];

int main() {
	scanf("%d %d", &n, &k);
	getchar();
	for(int i=1; i<=n; i++) {
		scanf("%d", &coin[i]);
		getchar();
	}
	for(int i=0; i<100001; i++)
		m[i] = 0;
	for(int i=1, temp; i<n; i++) {
		for(int j=n; j>i; j--) {
			if(coin[j] < coin[j-1]) {
				temp = coin[j-1];
				coin[j-1] = coin[j];
				coin[j] = temp;
			}
		}
	} // 정렬
	for(int i=n; coin[i]>k; i--)
		n--;
	if(n == 0)
		printf("0\n");
	else {
		for(int i=0; i<=k; i+=coin[1])
			m[i] = 1;
		for(int i=2; i<=n; i++)
			for(int j=coin[i]; j<=k; j++)
				m[j] += m[j-coin[i]];
	}
	printf("%d\n", m[k]);
	return 0;
}