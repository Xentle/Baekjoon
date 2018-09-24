#include <stdio.h>

int main() {
	
	int x1, y1, x2, y2, arr[6][50], temp=0, x, y, max=0, length=0;
	scanf("%d", &y1);
	getchar();
	scanf("%d", &x1);
	getchar();
	scanf("%d", &y2);
	getchar();
	scanf("%d", &x2);
	getchar();
	y1*=-1;
	y2*=-1;
	for(int x=x1; x<=x2; x++) {
		for(int y=y1; y>=y2; y--) {
			if(x == 0 && y == 0)
				temp = 1;
			else {
				if(y >= x) {
					if(y >= x*(-1)) {
						temp = 2*y + 8*y*(y-1)/2;
						temp++;
						temp = temp + (y-x);
					}
					else {
						temp = 6*x*(-1) + 8*x*(x+1)/2;
						temp++;
						temp = temp - (y-x);
					}
				}
				else {
					if(y > x*(-1)) {
						temp = 2*x + 8*x*(x-1)/2;
						temp++;
						temp = temp - (x-y);
					}
					else {
						temp = 6*y*(-1) + 8*y*(y+1)/2;
						temp++;
						temp = temp + (x-y);
					}
				}
			}
			arr[x-x1][y1-y] = temp;
		}
	}
	x=x2-x1;
	y=y1-y2;
	for(int i=0; i<=y; i++)
		for(int j=0; j<=x; j++)
			if(arr[j][i] > max)
				max = arr[j][i];		
	while(max>0) {
		max /= 10;
		length++;
	}
	for(int i=0; i<=y; i++) {
		for(int j=0, temp, k; j<=x; j++) {
			k=0;
			temp = arr[j][i];
			while(temp>0) {
				temp /= 10;
				k++;
			}
			k=length - k;
			while(k>0) {
				printf(" ");
				k--;
			}
			if(j != x)
				printf("%d ", arr[j][i]);
			else
				printf("%d", arr[j][i]);
		}
		printf("\n");
	}	
	return 0;
}