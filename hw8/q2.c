#include <stdio.h>
#include <stdlib.h>

struct node{
	int a;
	struct node *next;
};
struct node *create_node(int n)
{
	struct node *p;
	p = (struct node *) malloc(sizeof(struct node));
	if (p == NULL)
		return NULL;
	p->a = n;
	p->next = NULL;
	return p;
}
void add_end(struct node *list, struct node * new_node){
	struct node *current;
	for(current = list; current-> next != NULL; current = current->next);
	current->next = new_node;
	new_node->next = NULL;
}
void print_list(struct node *list){
    struct node * current = list;
    while(current != NULL)
	{
        printf("%d ", current->a);
        current = current->next;
    }
    printf("\n");
}
void swap(struct node *list)
{
	struct node * current = list;
	while(current != NULL&&current->next != NULL)
	{
		int t;
		t=current->a;
		current->a=current->next->a;
		current->next->a=t;
		current = current->next->next;
	}
}
int main()
{
	int b1;
	struct node *a1;
	scanf("%d",&b1);
	a1=create_node(b1);
	while(1)
	{
		scanf("%d",&b1);
		if(b1==0)
			break;
		add_end(a1,create_node(b1));		
	}
	swap(a1);
	print_list(a1);
	return 0;
}
