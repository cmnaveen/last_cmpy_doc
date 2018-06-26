#include<stdio.h>
#include<stdlib.h>
struct node
{
	int count;
	struct node *nxt;
};


void print_list(struct node *list)
{
	struct node *trav=list;
	while(trav != NULL)
	{
		printf("%d\n",trav->count);
		trav=trav->nxt;
	}
	return;
}
struct node *delete_duplicate(struct node *list)
{
	struct node *trav,*temp=list,*del,*pre;
	while(temp != NULL)
	{
		trav=temp;
		while(trav->nxt != NULL)
		{
			if(temp->count == trav->nxt->count)
			{
				printf("%d_%d\n",trav->nxt->count,temp->count);
				del=trav->nxt;
				trav->nxt=del->nxt;
				free(del);
			}
			else
			{
				trav=trav->nxt;
			}
		}

		temp=temp->nxt;
	}
	return list;
}


struct node *add_to_list(struct node *list, int cnt)
{
	struct node *tem=list,*new;
	new=(struct node *)malloc(sizeof(struct node));
	new->count=cnt;
	new->nxt=NULL;
	if(tem ==NULL)
		return list=new;
	while(tem->nxt != NULL)
		tem=tem->nxt;
	tem->nxt = new;
	return list;
}

int main(void)
{
	struct node *list;
	int x,y=1;
	while(y)
	{
		printf("Enter value for node:\n");
		scanf("%d",&x);
		list=add_to_list(list, x);
		printf("enter 1 for add one more node\n");
		printf("enter 0 for see all nodes\n");
		scanf("%d",&y);
	}
	printf("print all the nodes\n");
	print_list(list);
	list=delete_duplicate(list);
	printf("print the nodes after deleting duplicates\n");
	print_list(list);
}
