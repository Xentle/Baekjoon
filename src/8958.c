#include <stdio.h>

int main() {
	int n, s, temp_s;
	char c;
	scanf("%d\n", &n);
	for(int i=0; i<n; i++) {
		s=0;
		temp_s=0;
		while(1) {
			c=getchar();
			if(c=='O') {
				temp_s++;
				s+=temp_s;
			}
			if(c=='X') {
				temp_s=0;
			}
			if(c=='\n') {
				printf("%d\n", s);
				break;
			}
		}
	}
	return 0;
}