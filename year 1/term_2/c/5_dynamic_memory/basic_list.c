#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node 
{
	int x;
	struct node *next;
};

int main()
{
	struct node *root;
	struct node *first_val;
	struct node *current;
	int test;
	
	root = malloc(sizeof(struct node));
	root -> x = 25; 
	root -> next = NULL;

	printf("%d", root->x);
	
	first_val = malloc(sizeof(struct node));
	root->next = first_val;
	first_val -> x = 32;
	first_val -> next  = NULL;

	printf(" %d", root->next->x);	

	current = first_val;
	current->next = malloc(sizeof(struct node));
	
	current = current->next;

	current->next = NULL;
	current->x = 55;
	printf(" %d", root->next->next->x);	

	
	test = strcmp("b","a");

	printf(" %d", test);	

	return 0;
}
