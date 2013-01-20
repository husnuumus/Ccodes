#include<stdio.h>


typedef struct Node {
	int val;
	struct Node* next;
} node;

typedef node* nodeptr;

nodeptr* list;

void createList(int nodeCount);
void printList(nodeptr* lst);
void destroyList(nodeptr* list);

int main(char* argv[]){

	createList(10);
	printList(list);
	destroyList(list);
	
	return 0;
}


void destroyList(nodeptr* list){
}

void createList(int nodeCount){
}

void printList(nodeptr* lst){
}
