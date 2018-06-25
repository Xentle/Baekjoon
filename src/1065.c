#include <stdio.h>

int main() {
	int n, h, t, o, ans;
	scanf("%d", &n);
	if(n<100)
		printf("%d\n", n);
	else {
		ans=99;
		for(int i=100; i<=n; i++) {
			h=(i/100)%10;
			t=(i/10)%10;
			o=i%10;
			if((t-h)==(o-t))
				ans++;
		}
		if(n==1000)
			printf("%d\n", ans-1);
		else
			printf("%d\n", ans);
	}
	return 0;
}