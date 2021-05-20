#include <stdio.h>
#include <stdlib.h>

struct node{
	int id;
	char number[15];
	struct node *next;
};

void show(void)
{
	printf("1) Add\n");
	printf("2) Remove\n");
	printf("3) List\n");
	printf("4) Quit\n");
}

struct node *create_node(struct node n)
{
	struct node *p;
	p = (struct node *) malloc(sizeof(struct node));
	if (p == NULL)
		return NULL;
	*p=n;
	p->next = NULL;
	return p;
}

void add_end(struct node *list, struct node * new_node){
	struct node *current;
	for(current = list; current-> next != NULL; current = current->next);
	current->next = new_node;
	new_node->next = NULL;
}

void remove_node(struct node** list, int c)
{
	struct node *cur,*temp;
	cur=*list;
	if(cur->id==c)
	{
		*list=(*list)->next;
		printf("%d has been removed\n",c);
		free(cur);
		return;
	}
	cur=*list;
	while(cur->next!=NULL)
	{
		if(cur->next->id!=c)
		{
			cur=cur->next;
		}
		else
		{
			temp=cur->next;
			cur->next=cur->next->next;
			free(temp);
			printf("%d has been removed\n",c);
			return;	
		}
	}
	printf("%d does not exist\n",c);

}

void print_list(struct node *list){
    struct node * current = list;
    int i=1;
    while(current != NULL)
	{
        printf("%d)\nNo: %d\nPhone: %s \n",i,current->id,current->number);
        current = current->next;
        i++;
    }
}

int main()
{
	struct node *a;
	int i=1;
	while(1)
	{
		int code=0;
		struct node t;
		show();
		scanf("%d",&code);
		if(code==1)
		{
			if(i==1)
			{
				printf("No: ");
				scanf("%d",&t.id);
				printf("Phone: ");
				getchar();
				gets(t.number);
				a=create_node(t);	
			}
			else
			{
				printf("No: ");
				scanf("%d",&t.id);
				printf("Phone: ");
				getchar();
				gets(t.number);
				add_end(a,create_node(t));
			}
			i++;
		}
		if(code==2)
		{
			int c;
			printf("No: ");
			scanf("%d",&c);
			remove_node(&a,c);
			i--;
		}
		if(code==3)
		{
			print_list(a);
		}
		if(code==4)
		{
			exit(0);
		}
	}
	return 0;
}
