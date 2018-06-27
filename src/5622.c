#include <stdio.h>

int main() {
	int t=0;
	char c;
	while(1) {
		c=getchar();
		if(c=='\n')
			break;
		if(c=='A' || c=='B' || c=='C')
			t+=3;
		else if(c=='D' || c=='E' || c=='F')
			t+=4;
		else if(c=='G' || c=='H' || c=='I')
			t+=5;
		else if(c=='J' || c=='K' || c=='L')
			t+=6;
		else if(c=='M' || c=='N' || c=='O')
			t+=7;
		else if(c=='P' || c=='Q' || c=='R' || c=='S')
			t+=8;
		else if(c=='T' || c=='U' || c=='V')
			t+=9;
		else if(c=='W' || c=='X' || c=='Y' || c=='Z')
			t+=10;
	}
	printf("%d\n", t);
	return 0;
}