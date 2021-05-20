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

int main()
{
	int b1,b2;
	struct node *a1=NULL,*a2=NULL,*a3,*cur1,*cur2;
	scanf("%d",&b1);
	if(b1!=0)
	{
		a1=create_node(b1);
		while(1)
		{
			scanf("%d",&b1);
			if(b1==0)
				break;
			add_end(a1,create_node(b1));		
		}
	}
	scanf("%d",&b2);
	if(b2!=0)
	{
		a2=create_node(b2);
		while(1)
		{
			scanf("%d",&b2);
			if(b2==0)
				break;
			add_end(a2,create_node(b2));		
		}
	}
	if(a1==NULL){
		print_list(a2);
		return 0;
	}
	if(a2==NULL){
		print_list(a1);
		return 0;
	}	
	cur1=a1;
	cur2=a2;
	if((a1->a)<=(a2->a))
	{
		a3=create_node(cur1->a);
		cur1=cur1->next;	
	}
	else
	{
		a3=create_node(cur2->a);
		cur2=cur2->next;
	}
	while((cur1!=NULL)&&(cur2!=NULL))
	{
		if((cur1->a)<=(cur2->a))
		{
			add_end(a3,create_node(cur1->a));
			cur1=cur1->next;	
		}
		else
		{
			add_end(a3,create_node(cur2->a));
			cur2=cur2->next;
		}
	}
	if(cur1==NULL)
		for(;(cur2)!=NULL;cur2=cur2->next)
			add_end(a3,create_node(cur2->a));
	if(cur2==NULL)
		for(;(cur1)!=NULL;cur1=cur1->next)
			add_end(a3,create_node(cur1->a));
	print_list(a3);
	return 0;
}
