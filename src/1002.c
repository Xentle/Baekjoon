#include <stdio.h>
#include <math.h>

int main() {
	int n, x1, y1, x2, y2, x_d, y_d, temp;
	double r1, r2, d;
	scanf("%d", &n);
	for(int i=0; i<n; i++) {
		scanf("%d %d %lf %d %d %lf", &x1, &y1, &r1, &x2, &y2, &r2);
		getchar();
		x_d = x2 - x1;
		x_d = x_d * x_d;
		y_d = y2 - y1;
		y_d = y_d * y_d;
		d = x_d + y_d;
		d = sqrt(d);
		if(r2 < r1) {
			temp = r2;
			r2 = r1;
			r1 = temp;
		}
		if(r1 == r2)
			printf("-1\n");
		else {
			if(d > r1+r2 || d < r2-r1)
				printf("0\n");
			else if(d == r1+r2 || d == r2-r1)
				printf("1\n");
			else if(d < r1+r2 && d > r2-r1)
				printf("2\n");
		}
	}
	return 0;
}