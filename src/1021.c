#include <stdio.h>
#include <stdlib.h>

typedef struct _List {
	struct _Node *head;
	struct _Node *tail;
} List;

typedef struct _Node {
	struct _Node *prev;
	struct _Node *next;
	int data;
} Node;

void CreateNode(List *L, int data);
int SearchAndDeleteNode(List *L, int index);
int PrimeFunction(List *L, int index);
void DeleteNode(List *L, Node *node);
int arr[50], targets;


int main() {
	List *L = malloc(sizeof(List));
	L->head = NULL;
	L->tail = NULL;
	int total, ans;
	scanf("%d %d", &total, &targets);
	getchar();
	for(int i=0; i<targets; i++) {
		scanf("%d", &arr[i]);
		getchar();
	}
	for(int i=1; i<=total; i++)
		CreateNode(L, i);
	ans = PrimeFunction(L, 0);
	printf("%d\n", ans);
	return 0;
}

int PrimeFunction(List *L, int index) {
	int ret=0, min, data=arr[index];
	if(index == targets)
		return 0;
	else {
		min = SearchAndDeleteNode(L, data);
		return min + PrimeFunction(L, index+1);
	}
}

void CreateNode(List *L, int data) {
	Node *newNode = malloc(sizeof(Node));
	newNode->data = data;
	if(L->head == NULL) {
		L->head = newNode;
		L->tail = newNode;
		newNode->prev = newNode;
		newNode->next = newNode;
	}
	else {
		L->tail->next = newNode;
		newNode->prev = L->tail;
		newNode->next = L->head;
		L->head->prev = newNode;
		L->tail = newNode;
	}
	return;
}

int SearchAndDeleteNode(List *L, int index) {
	int left=0, right=0;
	Node *newNode = malloc(sizeof(Node));
	newNode = L->head;
	while(newNode->data != index) {
		newNode = newNode->next;
		left++;
	}
	newNode = L->head;
	while(newNode->data != index) {
		newNode = newNode->prev;
		right++;
	}
	DeleteNode(L, newNode);
	if(left<right)
		return left;
	else
		return right;
}

void DeleteNode(List *L, Node *node) {
	if(L->head == node && L->tail == node) {
		L->head = NULL;
		L->tail = NULL;
	}
	else {
		node->prev->next = node->next;
		node->next->prev = node->prev;
		L->head = node->next;
		L->tail = node->prev;
	}
	free(node);
	return;
}