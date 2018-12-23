#include <stdio.h>
#include <string.h>

int main() {
	int n, ans=0, l, t;
	char s[300];
	scanf("%s %d", s, &n);
	l = strlen(s);
	l--;
	for(int i=0, j=l; i<j; i++, j--) {
		t = s[i];
		s[i] = s[j];
		s[j] = t;
	}
	for(int i=0; i<=l; i++) {
		if(s[i] >= '0' && s[i] <= '9')
			t = s[i] - '0';
		else
			t = s[i] - 'A' + 10;
		for(int j=1; j<=i; j++)
			t *= n;
		ans += t;
	}
	printf("%d\n", ans);
	return 0;
}