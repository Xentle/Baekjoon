#include <stdio.h>

int main() {
	int l, X=0, size=0, arr[20100], front=10050, back=10050;
	char line[30];
	front=back=10050;
	scanf("%d", &l);
	getchar();
	for(int i=0; i<l; i++, X=0) {
		scanf("%[^\n]", line);
		getchar();
		if(line[0]=='p') {
			if(line[5]=='f') {
				for(int i=11; line[i]!=0; i++) {
					X*=10;
					X+=line[i]-48;
				}
				if(size==0) {
					arr[front]=X;
					size++;
				}
				else {
					arr[--front]=X;
					size++;
				}
			}
			else if(line[5]=='b') {
				for(int i=10; line[i]!=0; i++) {
					X*=10;
					X+=line[i]-48;
				}
				if(size==0) {
					arr[back]=X;
					size++;
				}
				else {
					arr[++back]=X;
					size++;
				}
			}
			else if(line[5]=='r') {
				if(size==0)
					printf("-1\n");
				else {
					printf("%d\n", arr[front++]);
					size--;
				}
				if(size==0)
					front=back;
			}
			else if(line[5]=='a') {
				if(size==0)
					printf("-1\n");
				else {
					printf("%d\n", arr[back--]);
					size--;
				}
				if(size==0)
					back=front;
			}
		}
		else if(line[0]=='s')
			printf("%d\n", size);
		else if(line[0]=='e') {
			if(size==0)
				printf("1\n");
			else
				printf("0\n");
		}
		else if(line[0]=='f') {
			if(size==0)
				printf("-1\n");
			else
				printf("%d\n", arr[front]);
		}
		else if(line[0]=='b') {
			if(size==0)
				printf("-1\n");
			else
				printf("%d\n", arr[back]);
		}
	}
	return 0;
}