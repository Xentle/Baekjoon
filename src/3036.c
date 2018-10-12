#include <stdio.h>

int main() {
	int n, rad[101], a, b, cal_a, cal_b, gcd;
	scanf("%d", &n);
	getchar();
	for(int i=1; i<=n; i++) {
		scanf("%d", &rad[i]);
		getchar();
	}
	for(int i=2; i<=n; i++) {
		a = rad[1];
		b = rad[i];
		cal_a = a;
		cal_b = b;
		while(1) {
			if(cal_a == cal_b) {
				gcd = cal_a;
				break;
			}
			else if(cal_a < cal_b) {
				if(cal_b % cal_a == 0) {
					gcd = cal_a;
					break;
				}
				else
					cal_b = cal_b % cal_a;
			}
			else {
				if(cal_a % cal_b == 0) {
					gcd = cal_b;
					break;
				}
				else
					cal_a = cal_a % cal_b;
			}
		}
		a /= gcd;
		b /= gcd;
		printf("%d/%d\n", a, b);
	}
	return 0;
}