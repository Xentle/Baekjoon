#include <stdio.h>

int main() {
	int mean=0, s[5];
	for(int i=0; i<5; i++)
		scanf("%d", &s[i]);
	for(int i=0; i<5; i++)
		if(s[i]<40)
			s[i]=40;
	for(int i=0; i<5; i++)
		mean+=s[i];
	printf("%d\n", mean/5);
	return 0;
}