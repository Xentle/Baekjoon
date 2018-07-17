#include <stdio.h>

int main() {
	char l[31];
	int ox=1, a[30]={0}, ans=0;
	scanf("%s", l);
	getchar();
	for(int i=0, j=0; l[i]!=0; i++) {
		if(l[i]=='(')
			a[j++]=2;
		else if(l[i]=='[')
			a[j++]=3;
		else if(l[i]==')') {
			if(a[j-1]!=2 || j==0) {
				ox=0;
				break;
			}
			else
				a[--j]=0;
		}
		else if(l[i]==']') {
			if(a[j-1]!=3 || j==0) {
				ox=0;
				break;
			}
			else
				a[--j]=0;
		}
	}
	if(a[0]!=0)
		ox=0;
	if(ox==1) {
		for(int i=0, j=0; i<sizeof(l); i++) {
			if(l[i]=='(')
				a[j++]=-1;
			else if(l[i]=='[')
				a[j++]=-2;
			else if(l[i]==')') {
				if(a[j-1]==-1)
					a[j-1]=2;
				else {
					a[j-2]=a[j-1]*2;
					j--;
				}
			}
			else if(l[i]==']') {
				if(a[j-1]==-2)
					a[j-1]=3;
				else {
					a[j-2]=a[j-1]*3;
					j--;
				}
			}
			if(a[j-1]!=-1 && a[j-1]!=-2 && a[j-2]!=-1 && a[j-2]!=-2 && j>=2) {
				a[j-2]+=a[j-1];
				j--;
			}
		}
		printf("%d\n", a[0]);
	}
	else
		printf("0\n");
	return 0;
}