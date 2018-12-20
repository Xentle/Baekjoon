#include <stdio.h>

long long int ans=0, n, y, x;
void func(int n, int sy, int sx, int ey, int ex);
long long int p(int i);

int main() {
	scanf("%lld %lld %lld", &n, &y, &x);
	func(n, 0, 0, p(n-1)-1, p(n-1)-1);
	printf("%lld\n", ans);
	// Z
	return 0;
}

void func(int n, int sy, int sx, int ey, int ex) {
	printf("ans: %lld n : %d sy : %d sx : %d ey : %d ex : %d\n", ans, n, sy, sx, ey, ex);
	if(n == 1) {
		if(y == sy && x == sx) {}
		else if(y == sy)
			ans++;
		else if(x == sx)
			ans += 2;
		else
			ans += 3;
		return;
	}
	else {
		if(y >= sy && y <= ey && x >= sx && x <= ex) {
			func(n-1, sy, sx, ey-p(n-2), ex-p(n-2));
			return;
		}
		ans += p(n-1) * p(n-1);
		sx += p(n-1);
		ex += p(n-1);
		if(y >= sy && y <= ey && x >= sx && x <= ex) {
			func(n-1, sy, sx, ey-p(n-2), ex-p(n-2));
			return;
		}
		ans += p(n-1) * p(n-1);
		sx -= p(n-1);
		ex -= p(n-1);
		sy += p(n-1);
		ey += p(n-1);
		if(y >= sy && y <= ey && x >= sx && x <= ex) {
			func(n-1, sy, sx, ey-p(n-2), ex-p(n-2));
			return;
		}
		ans += p(n-1) * p(n-1);
		sx += p(n-1);
		ex += p(n-1);
		func(n-1, sy, sx, ey-p(n-2), ex-p(n-2));
		return;
	}
	return;
}

long long int p(int i) {
	long long int r = 1;
	while(i-- >= 1)
		r *= 2;
	return r;
}