#include <stdio.h>
#include <string.h>

char c_name[30], c_kind[30], cloth[30][50];
int arr_size=0, c_index[30];
void find(char *c_kind);

int main() {
	int t, n, ans=1;
	scanf("%d", &t);	
	getchar();
	for(int i=0; i<t; i++, arr_size=0, ans=1) {
		for(int j=0; j<30; j++)
			c_index[j] = 0;
		scanf("%d", &n);
		getchar();
		if(n == 0)
			printf("0\n");
		else {
			scanf("%s %s", c_name, c_kind);
			getchar();
			strcpy(cloth[0], c_kind);
			arr_size++;
			c_index[0]++;
			for(int j=1; j<n; j++) {
				scanf("%s %s", c_name, c_kind);
				getchar();
				find(c_kind);
			}
			for(int j=0; j<arr_size; j++)
				ans *= (c_index[j]+1);
			printf("%d\n", --ans);
		}
	}
	return 0;
}

void find(char *c_kind) {
	for(int i=0; i<arr_size; i++)
		if(strcmp(c_kind, cloth[i]) == 0) {
			c_index[i]++;
			return;
		}
	c_index[arr_size]++;
	strcpy(cloth[arr_size++], c_kind);
	return;
}