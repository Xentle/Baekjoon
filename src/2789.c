#include <stdio.h>
#include <string.h>

int main() {
	int l;
	char cambridge[10] = "CAMBRIDGE", mail[101];
	scanf("%s", mail);
	l = strlen(mail);
	for(int i=0; i<l; i++) {
		for(int j=0; j<=8; j++) {
			if(mail[i] == cambridge[j]) {
				mail[i] = -1;
				break;
			}
		}
	}
	for(int i=0; i<l; i++) {
		if(mail[i] != -1)
			printf("%c", mail[i]);
	}
	printf("\n");
	return 0;
}