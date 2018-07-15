#include <stdio.h>

int main() {
	int t, check=0;
	char line[51];
	scanf("%d", &t);
	getchar();
	for(int i=0; i<t; i++, check=0) {
		scanf("%s", line);
		getchar();
		for(int j=0; line[j]!=0; j++) {
			if(line[j]=='(')
				check++;
			else if(line[j]==')')
				check--;
			if(check<0) {
				printf("NO\n");
				break;
			}
		}
		if(check==0)
			printf("YES\n");
		else if(check>0)
			printf("NO\n");
	}
	return 0;
}