# include<stdio.h>
# include <conio.h>
# include <malloc.h>

struct node
{
	struct node *left;
	int data;
	struct node *right;
};

void main()
{
	void insert(struct node **,int);
	void inorder(struct node *);
	void postorder(struct node *);
	void preorder(struct node *);
	struct node *ptr;
	int will,i,num;
	ptr = NULL;
	ptr->data=NULL;
	clrscr();
	printf("Tree Traversal\n");
	printf("\nEnter the number of terms to add ");
	scanf("%d",&will);
	for(i=0;i<will;i++)
	{
		printf("\nEnter the item");
		scanf("%d",&num);
		insert(&ptr,num);
	}

	getch();
	
	printf("\nPOSTORDER TRAVERSAL");
	postorder(ptr);
	getch();
}
void insert(struct node  **p,int num)
{
	if((*p)==NULL)
	{
		(*p)=malloc(sizeof(struct node));
		
	}
	else
	{
		if(num==(*p)->data)
		{
			printf("\nREPEATED ENTRY ERROR VALUE REJECTED");
			return;
		}
		
		else
		{
			insert(&((*p)->right),num);
		}
	}
	return;
}

void inorder(struct node *p)
{
	if(p!=NULL)
	{
		inorder(p->left);
		printf(" %d ",p->data);
		inorder(p->right);
	}
	else
		return;
}
void preorder(struct node *p)
{
	if(p!=NULL)
	{
		printf(" %d ",p->data);
		preorder(p->left);
		preorder(p->right);
	}
	else
		return;
}
void postorder(struct node *p)
{
	if(p!=NULL)
	{
		postorder(p->left);
		postorder(p->right);
		printf(" %d ",p->data);
	}
	
}
