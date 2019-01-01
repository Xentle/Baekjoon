#include <stdio.h>

int main() {
	int s, p, ans=0, rest[100], t=0;
	scanf("%d %d", &s, &p);
	if((p % s) == 0) {
		printf("%d\n", (p/s-1)*s);
	}
	else {
		for(int i=0; i<s; i++) {
			ans += p / s;
			rest[i] = p % s;
		}
		for(int i=0; i<s; i++) {
			t += rest[i];
			if(t == s)
				t = 0;
			else if(t > s) {
				rest[i--] = t - s;
				ans++;
				t = 0;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}