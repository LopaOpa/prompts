#include<stdio.h>
void insert(int c);
int del();
int front=-1,rear=-1;
int q[30],ans[10],k=0;

void main()
{
    int i,j,n,no,a[10][10];
    clrscr();
    printf("\n Enter the number of Nodes: ");
    scanf("%d",&n);
    printf("\n Enter the adjacency matrix of the graph:\n ");
    for(i=0;i<n;i++)
    {
	for(j=0;j<n;j++)
	      scanf("%d",&a[i][j]);
    }
    printf("\n Adjacency is: \n ");
    for(i=0;i<n;i++)
    {
	 for(j=0;j<n;j++)
	    printf("\t %d",a[i][j]);
	printf("\n");
    }
    insert(0);
    printf("\bBreadth First Search of the nodes is:\n");
    while(rear!=front)
    {
	i=del();
	printf("\t:%d",i+1);
	for(j=0;j<n;j++)
{
	       if (a[i][j]==1)
	       insert(j);}
     	}
getch();
   }

int del()
{
   return q[++front];
}




void insert(int c)
{
	int i,count=0;
  	for(i=0;i<k;i++)
	
          
           {
		if(ans[i]==c)
		{
			count=1;
			break;
		}
	}
if(count==0)
{
		q[++rear]=c;
		ans[k++]=c;
}

}
