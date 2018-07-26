#include <stdio.h>
#include <stdlib.h>

typedef struct _List {
	struct _Node *head;
	struct _Node *tail;
} List;

typedef struct _Node {
	struct _Node *next;
	struct _Node *prev;
	int data;
} Node;

void CreateNode(List *L, int index);
int DeleteNode(List *L, int index);

int main() {
	List *L = malloc(sizeof(List));
	L->head = NULL;
	L->tail = NULL;
	int n, target, ans[1000];
	scanf("%d %d", &n, &target);
	getchar();
	for(int i=1; i<=n; i++)
		CreateNode(L, i);
	for(int i=0; i<n; i++)
		ans[i]=DeleteNode(L, target);
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
		newnode->prev = newnode;
	}
	else {
		L->tail->next = newnode;
		L->head->prev = newnode;
		newnode->next = L->head;
		newnode->prev = L->tail;
		L->tail = newnode;
	}
}

int DeleteNode(List *L, int index) {
	Node *temp = malloc(sizeof(Node));
	temp = L->head;
	for(int i=0; i<index-1; i++)
		temp=temp->next;
	temp->prev->next=temp->next;
	temp->next->prev=temp->prev;
	L->head=temp->next;
	L->tail=temp->prev;
	return temp->data;
}