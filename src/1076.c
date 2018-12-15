#include <stdio.h>
#include <string.h>

int main() {
	char color[10][20] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};
	char s[20];
	long long int ans=0;
	scanf("%s", s);
	getchar();
	for(int j=0; j<10; j++) {
		if(strcmp(s, color[j]) == 0) {
			ans += j;
			ans *= 10;
			break;
		}
	}
	scanf("%s", s);
	getchar();
	for(int j=0; j<10; j++) {
		if(strcmp(s, color[j]) == 0) {
			ans += j;
			break;
		}
	}
	scanf("%s", s);
	getchar(); 
	for(int j=0; j<10; j++) {
		if(strcmp(s, color[j]) == 0) {
			for(int k=j; k>0; k--)
				ans *= 10;
			break;
		}
	}
	printf("%lld\n", ans);
	return 0;
}