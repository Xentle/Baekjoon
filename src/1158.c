#include <stdio.h>
#include <stdlib.h>

typedef struct _List {
	struct _Node *head;
	struct _Node *tail;
} List;

typedef struct _Node {
	struct _Node *next;
	int data;
} Node;

void CreateNode(List *L, int index);
int DeleteNode(List *L, int index, Node *temp, Node *prev);


int main() {
	List *L = malloc(sizeof(List));
	L->head = NULL;
	L->tail = NULL;
	Node *temp = malloc(sizeof(Node));
	Node *prev = malloc(sizeof(Node));
	int n, target, ans[5000];
	scanf("%d %d", &n, &target);
	getchar();
	for(int i=1; i<=n; i++)
		CreateNode(L, i);
	for(int i=0; i<n; i++)
		ans[i]=DeleteNode(L, target, temp, prev);
	printf("<%d", ans[0]);
	for(int i=1; i<n; i++)
		printf(", %d", ans[i]);
	printf(">\n");
	return 0;
}

void CreateNode(List *L, int index) {
	Node *newnode = malloc(sizeof(Node));
	newnode->data = index;
	if(L->head == NULL) {
		L->head = newnode;
		L->tail = newnode;
		newnode->next = newnode;
	}
	else {
		L->tail->next = newnode;
		newnode->next = L->head;
		L->tail = newnode;
	}
}

int DeleteNode(List *L, int index, Node *temp, Node *prev) {
	int r;
	temp = L->head;
	for(int i=0; i<index-1; i++) {
		prev=temp;
		temp=temp->next;
	}
	prev->next=temp->next;
	L->head=temp->next;
	L->tail=prev;
	r=temp->data;
	return r;
}