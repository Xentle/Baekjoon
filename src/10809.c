#include <stdio.h>

int main() {
	int a[26]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}, w_i=0;
	char c;
	while(1) {
		c=getchar();
		if(c=='\n')
			break;
		if(a[c-97]==-1) {
			a[c-97]=w_i;
		}
		w_i++;
	}
	for(int i=0; i<26; i++)
		printf("%d ", a[i]);
	return 0;
}