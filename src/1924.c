#include <stdio.h>

int main() {
	int x, y;
	int d;
	scanf("%d %d", &x, &y);
	if(x==1)
		d=(y-1)%7;
	else if(x==2)
		d=(y+31-1)%7;
	else if(x==3)
		d=(y+31+28-1)%7;
	else if(x==4)
		d=(y+31+28+31-1)%7;
	else if(x==5)
		d=(y+31+28+31+30-1)%7;
	else if(x==6)
		d=(y+31+28+31+30+31-1)%7;
	else if(x==7)
		d=(y+31+28+31+30+31+30-1)%7;
	else if(x==8)
		d=(y+31+28+31+30+31+30+31-1)%7;
	else if(x==9)
		d=(y+31+28+31+30+31+30+31+31-1)%7;
	else if(x==10)
		d=(y+31+28+31+30+31+30+31+31+30-1)%7;
	else if(x==11)
		d=(y+31+28+31+30+31+30+31+31+30+31-1)%7;
	else if(x==12)
		d=(y+31+28+31+30+31+30+31+31+30+31+30-1)%7;
	if(d==0)
		printf("MON\n");
	else if(d==1)
		printf("TUE\n");
	else if(d==2)
		printf("WED\n");
	else if(d==3)
		printf("THU\n");
	else if(d==4)
		printf("FRI\n");
	else if(d==5)
		printf("SAT\n");
	else if(d==6)
		printf("SUN\n");
	return 0;
}