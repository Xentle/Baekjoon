#include <stdio.h>

int main() {
	int n, a[9]={1,1,1,1,1,1,2,1,1}, ans=1, tmp;
	scanf("%d", &n);
	if(n==0)
		printf("1\n");
	else {
		while(n>0) {
			tmp=n%10;
			if(tmp==9)
				tmp=6;
			if(a[tmp]==0) {
				ans++;
				for(int i=0; i<6; i++)
					a[i]+=1;
				a[6]+=2;
				a[7]+=1;
				a[8]+=1;
			}
			a[tmp]--;
			n/=10;
		}
		printf("%d\n", ans);
	}
	return 0;
}