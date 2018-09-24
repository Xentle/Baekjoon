#include <stdio.h>

int main() {
	int n, l, ans;
	scanf("%d %d", &n ,&l);
	getchar();
	while(l <=100) {
		if(l % 2 == 1) {
			if(n % l != 0)
				l++;
			else {
				ans = n / l;
				ans = ans - (l / 2);
				if(ans < 0)
					l++;
				else {
					for(int i=1; i<l; i++)
						printf("%d ", ans++);
					printf("%d\n", ans);
					break;
				}	
			}
		}
		else {
			if(n % l != l / 2)
				l++;
			else {
				ans = n / l;
				ans = ans - (l / 2 - 1);
				if(ans < 0)
					l++;
				else {
					for(int i=1; i<l; i++)
						printf("%d ", ans++);
					printf("%d\n", ans);
					break;
				}
			}
		}
	}
	if(l == 101)
		printf("-1\n");
	return 0;
}