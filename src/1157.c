#include <stdio.h>

int main() {
	int n[26]={0}, max=0, max_i=0, sw=0;
	char a[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	char c;
	while(1) {
		c=getchar();
		if(c>=65 && c<=90)
			n[c-65]++;
		else if(c>=97 && c<=122)
			n[c-97]++;
		else if(c=='\n')
			break;
	}
	max=n[0];
	for(int i=0; i<26; i++)
		if(n[i]>n[max_i]) {
			max=n[i];
			max_i=i;
		}
	for(int i=0; i<26; i++) {
		if(max==n[i])
			sw++;
	}
	if(sw==1)
		printf("%c\n", a[max_i]);
	else
		printf("?\n");
	return 0;
}