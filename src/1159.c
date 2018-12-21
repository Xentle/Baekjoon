#include <stdio.h>

int main() {
	int n, name[151], ans[26], check;
	char s[50];
	for(int i=0; i<26; i++)
		ans[i] = 0;
	scanf("%d", &n);
	for(int i=1; i<=n; i++) {
		scanf("%s", s);
		getchar();
		name[i] = s[0] - 'a';
	}
	for(int i=1; i<=n-4; i++) {
		check = 1;
		if(ans[name[i]] == 0) {
			for(int j=i+1; j<=n; j++) {
				if(name[j] == name[i])
					check++;
			}
			if(check == 5)
				ans[name[i]] = 1;
		}
	}
	for(int i=0; i<26; i++) {
		if(ans[i] == 1) {
			printf("%c", i + 'a');
		}
	}
	printf("\n");
	return 0;
}