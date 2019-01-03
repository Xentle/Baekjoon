#include <stdio.h>

int main() {
	int n, l=0, t, sum, ans=0;
	scanf("%d", &n);
	for(int i=n; i>=1; i/=10)
		l++;
	for(int i=n; i>0 && n-i < 10000; i--) {
		sum = i;
		t = i;
		while(t > 0) {
			sum += (t % 10);
			t /= 10;
		}
		if(sum == n) {
			ans = i;
		}
	}
	printf("%d\n", ans);
	return 0;
}