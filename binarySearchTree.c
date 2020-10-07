#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node
{
 	int data;
	struct node *left,*right;
}*tree;

void create();
void insert();
void del();
struct node *maketree(int);
void display(struct node*);
void setleft(struct node *,int);
void setright(struct node *,int); 

void insert()
{
	 struct node *p,*q;
	 int num;
	 printf("\n\t\tEnter The Node Value : ");
	 scanf("%d",&num);
	 p=q=tree;
	 while((num!=p->data)&&(q!=NULL))
	 {
		 p=q;
		 if(num<p->data)
			 q=p->left;
		 else
			 q=p->right;
	 }
	 if(num==p->data)
		 printf("\n\t\tDuplicate Value");
	 else if(num<p->data)
		 setleft(p,num);
	 else
		 setright(p,num);
}

void main()
{
	 int ch;
	 clrscr();
	 printf("\n\t\t\tBINARY SEARCH TREE");
	 printf("\n\t\t\t~~~~~~~~~~~~~~~~~~~~~");
	 printf("\n\t\t\t  1.CREATION");
	 printf("\n\t\t\t  2.INSERTION");
	 printf("\n\t\t\t  3.DELETION");
	 printf("\n\t\t\t  4.DISPLAY");
	 printf("\n\t\t\t  5.EXIT\n");
	 do
	 {
		  printf("\n\t\tEnter The Choice : ");
		  scanf("%d",&ch);
		  switch(ch)
		  {
			   case 1: create(); break;
			   case 2: insert(); break;
			   case 3: if(tree==NULL)  printf("\n\t Tree Empty");
				       else  del();
				       break;
			   case 4: printf("\n\t\tTREE CONTAINS : ");
					   display(tree);
					   printf("\n");
					   break;
		      default: printf("\n\t\tEXIT");
		  }
	 } while(ch<=4);
	 getch();
}

struct node *maketree(int val)
{
	 struct node *t=(struct node *)malloc(sizeof(struct node));
	 t->data=val;
	 t->left=t->right=NULL;
	 return(t);
}

void create()
{
	 int n,i,num;
	 printf("\n\t\tEnter The No Of Node :");
	 scanf("%d",&n);
	 printf("\n\t\tEnter The No Of Node :");
	 scanf("%d",&num);
	 tree=maketree(num);
	 for(i=2;i<=n;i++)
		 insert();
}

void display(struct node *p1)
{
	if(p1==NULL)
		return;
	display(p1->left);
	printf("%d",p1->data);
	display(p1->right);
}

void setleft(struct node *p1,int val)
{
	if(p1==NULL)
		printf("\n\t\tVoid Insertion");
	else if(p1->left!=NULL)
		printf("\n\t\tInvalid Insertion");
	else
		p1->left=maketree(val);
}

void setright(struct node *p1,int val)
{
	if(p1==NULL)
		printf("\n\t\tVoid Insertion");
	else if(p1->right!=NULL)
		printf("\n\t\tInvalid Insertion");
	else
		p1->right=maketree(val);
}

void del()
{
	 struct node *p,*q,*rp,*f,*s;
	 int num;
	 p=tree;
	 q=NULL;
	 printf("\n\t\tEnter The Node To Be Deleted : ");
	 scanf("%d",&num);
	 while((p!=NULL)&&(p->data!=num))
	 {
		  q=p;
		  p=(num<p->data)?p->left:p->right;
	 }
	 if(p==NULL)
	 {
		  printf("\n\t\tVoid Deletion");
		  return;
	 }
	 if(p->left==NULL)
		  rp=p->right;
	 else if(p->right==NULL)
		  rp=p->left;
	 else
	 {
		  f=p;
		  rp=p->right;
		  s=rp->left;
		  while(s!=NULL)
		  {
			   f=rp;
			   rp=s;
			   s=rp->left;
		  }
		  if(f!=p)
		  {
			   f->left=rp->right;
			   rp->right=p->right;
		  }
		  rp->left=p->left;
	 }
	 if(q==NULL)
	  	tree=rp;
	 else
	  	p=(q->left)?(q->left=rp):(q->right=rp);
}
