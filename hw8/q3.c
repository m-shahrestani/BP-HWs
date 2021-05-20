#include <stdio.h>
#include <stdlib.h>

struct node{
	int a;
	struct node *next;
	struct node *prev;
};
struct node *create_node(int n)
{
	struct node *p;
	p = (struct node *) malloc(sizeof(struct node));
	if (p == NULL)
		return NULL;
	p->a = n;
	p->next = NULL;
	p->prev = NULL;
	return p;
}
void add_end(struct node *list, struct node * new_node){
	struct node *current;
	for(current = list; current-> next != NULL; current = current->next);
	current->next = new_node;
	current->next->prev = current;
	new_node->next = NULL;	
}
//void print_list(struct node *list){
//    struct node * current = list;
//    while(current != NULL)
//	{
//        printf("%d ", current->a);
//        current = current->next;
//    }
//    printf("\n");
//}
void check(struct node *list){
    struct node *cur1 = list,*cur2;
	for(cur1 = list; cur1-> next != NULL; cur1 = cur1->next);
    cur2 = cur1;
    cur1=list;
    while(cur1!=cur2&&cur1!=cur2->prev)
	{
//        printf("%d ", cur2->a);
		if(cur1->a!=cur2->a)
		{
			printf("false");
			return;
		}
		else
		{
        	cur2 = cur2->prev;
        	cur1 = cur1->next;
    	}
    }
    if(cur1->a!=cur2->a)
	printf("false");    
    else
    printf("true");
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
	check(a1);
	return 0;
}
