#include <stdio.h>

int main() {
	long long int n, class[100001], total, sub, ans, temp;
	scanf("%lld", &n);
	getchar();
	for(int i=1; i<=n; i++) {
		scanf("%lld", &class[i]);
		getchar();
	}
	scanf("%lld %lld", &total, &sub);
	getchar();
	for(int i=1; i<=n; i++)
		class[i] -= total;
	ans = n;
	for(int i=1; i<=n; i++) {
		if(class[i] > 0) {
			temp = class[i] / sub;
			if(sub * temp < class[i])
				temp++;
			ans += temp;
		}
	}
	printf("%lld\n", ans);
	return 0;
}