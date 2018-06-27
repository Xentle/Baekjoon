#include <stdio.h>

int main() {
	int n, ans=0, a[26]={0}, sw;
	char c;
	scanf("%d", &n);
	getchar();
	for(int i=0; i<n; i++) {
		sw=1;
		for(int i=0; i<26; i++)
			a[i]=0;
		while(1) {
			c=getchar();
			if(a[c-97]==0)
				a[c-97]=1;
			for(int i=0; i<26; i++)
				if(i!=(c-97) && a[i]==1)
					a[i]=2;
			if(a[c-97]==2)
				a[c-97]=3;
			if(c=='\n') {
				for(int i=0; i<26; i++)
					if(a[i]==3)
						sw=0;
				if(sw==1)
					ans++;
				break;
			}
		}
	}
	printf("%d\n", ans);
	return 0;
}
// 0 나온적 없음
// 1 나오고 잇음
// 2 나왔었음
// 3 또 나옴