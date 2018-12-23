#include <stdio.h>

int main() {
	int rest[10], ans=0, temp;
	scanf("%d", &temp);
	getchar();
	rest[ans++] = temp % 42;
	for(int i=1; i<10; i++) {
		scanf("%d", &temp);
		getchar();
		temp %= 42; 
		for(int j=0; j<=ans; j++) {
			if(j == ans) {
				rest[ans++] = temp;
				break;
			}
			else if(rest[j] == temp)
				break;
		}
	}
	printf("%d\n", ans);
	return 0;
}