#include <stdio.h>
#include <string.h>

int main() {
	char c;
	char s[100];
	int sw=0, ans=0;
	scanf("%s", s);
	ans=strlen(s);
	for(int i=1; i<strlen(s); i++) {
		if(s[i]=='=' && s[i-1]=='c')
			ans--;
		else if(s[i]=='-' && s[i-1]=='c')
			ans--;
		else if(i>=2 && s[i]=='=' && s[i-1]=='z' && s[i-2]=='d')
			ans-=2;
		else if(s[i]=='-' && s[i-1]=='d')
			ans--;
		else if(s[i]=='j' && s[i-1]=='l')
			ans--;
		else if(s[i]=='j' && s[i-1]=='n')
			ans--;
		else if(s[i]=='=' && s[i-1]=='s')
			ans--;
		else if(s[i]=='=' && s[i-1]=='z')
			ans--;
	}
	printf("%d\n", ans);
	return 0;
}
// c= c- dz= d- lj nj s= z=