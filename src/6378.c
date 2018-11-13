#include <stdio.h>

int main() {
	char line[1001];
	int n, i, t;
	while(1){
		n = 0;
		gets(line);
		if(line[0] == '0')
			break;
		for(int i=0; line[i] != 0; i++)
			n = n + (line[i] - '0');
		while(n >= 10) {
			t = 0;
			while(n > 0) {
				t = t + (n % 10);
				n /= 10;
			}
			n = t;
		}
		printf("%d\n", n);
	}
	return 0;
}