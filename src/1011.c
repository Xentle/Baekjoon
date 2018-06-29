#include <stdio.h>

int main() {
	int n;
	signed long long a, b, d, i, j, ans;
	scanf("%d", &n);
	getchar();
	for(int k=0; k<n; k++) {
		scanf("%lld %lld", &a, &b);
		getchar();
		d=b-a;
		if(d==1)
			printf("1\n");
		else if(d==2)
			printf("2\n");
		else {
			i=2;
			j=2;
			ans=3;
			while(1) {
				if(d>i && d<=i+j) {
					printf("%lld\n", ans);
					break;
				}
				i+=j;
				ans++;
				if(d>i && d<=i+j) {
					printf("%lld\n", ans);
					break;
				}
				i+=j;
				j++;
				ans++;
			}
		}
	}
	return 0;
}

/*
1 1 = 2                 2
1 2 1 = 4               3
1 2 2 1 = 6             4
1 2 3 2 1 = 9           5
1 2 3 3 2 1 = 12        6
1 2 3 4 3 2 1 = 16      7
1 2 3 4 4 3 2 1 = 20    8

n-2, 2+2+3+3+4+4+5+5
*/