#include <stdio.h>

int main() {
	int ans=0, temp=0;
	char c;
	while(1) {
		c=getchar();
		if(temp==1 && (c==' ' || c=='\n')) {
			ans++;
			temp=0;
		}
		if(c!=' ' && c!='\n')
			temp=1;
		if(c=='\n')
			break;
	}
	printf("%d\n", ans);
	return 0;
}