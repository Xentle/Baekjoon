#include <stdio.h>

int main() {
	int n;
	long long a, b, x_, y_, lcm, ans;
	long long g_lcm(long long a, long long b);
	scanf("%d", &n);
	getchar();
	for(int i=0; i<n; i++) {
		scanf("%lld %lld %lld %lld", &a, &b, &x_, &y_);
		getchar();
		ans=-1;
		if(x_==1 && y_==1)
			printf("1\n");
		else {
			if(a==b)
				if(x_==y_)
					printf("%lld\n", x_);
				else
					printf("-1\n");
			else {
				lcm=g_lcm(a,b);
				for(int i=0; a*i<=lcm; i++) {
					if(((a*i+x_)%b)==y_) {
						ans=a*i+x_;
						break;
					}
				}
				printf("%lld\n", ans);
			}
		}
	}
	return 0;
}

long long gcd(long long a, long long b){
	while(b!=0){
		int r = a%b;
		a= b;
		b= r;
	}
	return a;
}

long long g_lcm(long long a, long long b){
    return a * b / gcd(a,b);
}