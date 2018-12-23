#include <stdio.h>
#include <string.h>

int three(char a, char b, char c);

int main() {
	int l, check;
	char pw[21];
	while(1) {
		scanf("%s", pw);
		getchar();
		if(strcmp(pw, "end") == 0)
			break;
		check = 0;
		l = strlen(pw);
		for(int i=0; i<l; i++) {
			if(pw[i] == 'a' || pw[i] == 'e' || pw[i] == 'i' || pw[i] == 'o' || pw[i] == 'u') {
				check = 1;
				break;
			}
		}
		if(check == 0) {
			printf("<%s> is not acceptable.\n", pw);
			continue;
		}
		for(int i=0; i<l-1; i++) {
			if(pw[i] == pw[i+1] && pw[i] != 'e' && pw[i] != 'o') {
				check = 0;
				break;
			}
		}
		if(check == 0) {
			printf("<%s> is not acceptable.\n", pw);
			continue;
		}
		for(int i=0; i<l-2; i++) {
			check = three(pw[i], pw[i+1], pw[i+2]);
			if(check == 0)
				break;
		}
		if(check == 0) {
			printf("<%s> is not acceptable.\n", pw);
			continue;
		}
		else {
			printf("<%s> is acceptable.\n", pw);
			continue;
		}
	}
	return 0;
}

int three(char a, char b, char c) {
	int check = 0;
	if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
		check++;
	else
		check--;
	if(b == 'a' || b == 'e' || b == 'i' || b == 'o' || b == 'u')
		check++;
	else
		check--;
	if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
		check++;
	else
		check--;
	if(check == 3 || check == -3)
		return 0;
	else
		return 1;
}