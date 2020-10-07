#include<stdio.h>
#include<conio.h>
#define max 50
int adj[max][max];
int vertex[max];
int visited[max];
void creategraph(int);
void dfs(int,int);
void depthfirst(int);
void main()
{
int ch,n,v;
clrscr();
do
{
printf("\n1.create graph"
	"\n2.dfs"
	"\n3.exit"
	"\n Enter your choice");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:{ printf("\n Enter no. of vertices to be created");
	scanf("%d",&v);
	creategraph(v);
	break; }
	case 2:  depthfirst(v);
	break;
	case 3:printf("end of the program");
	break; 
	}
	}while(ch!=3);
	getch(); 
	}
 void  creategraph(int v)
 {
 int i,j,n,m,k;

 for(i=0;i<v;i++)
 {
 	printf("\n Enter the node value");
 scanf("%d",&vertex[i]);
 visited[i]=0;
 }

 for(j=0;j<v;j++)
	adj[i][j]=0;
 printf("Enter the adjacency vertices list");
 printf("for each vertex of the graph");
 for(i=0;i<v;i++)
 {
 printf("\n Enter the no.of adjancey vertices for the vertex %d",vertex[i]);
 scanf("%d",&n);
 for(j=0;j<n;j++)
 {
 	printf("\n Enter adjacency vertex");
 scanf("%d",&m);
 for(k=0;k<v;k++)
 {
 	if(vertex[k]==m)
 	adj[i]]k]=1;
 }
 }
 }
 printf("\n graph created with no. of vertices");
 printf("the adjacency matrix of graph\n");
 for(i=0;i<v;i++)
 {
 for(j=0;j<v;j++)
printf("%d\t",adj[i][j]);
 printf("\n");
 }
 }
 void depthfirst(int v)
 {
 int i;
 for(i=0;i<v;i++)
 visited[i]=0;
 visited[0]=1;
 printf("Depth first serach \n");
 printf("%d",vertex[0]);
 dfs(0,v);
 }
void dfs(int ad,int v)
 {
 	int j,k;
 for(k=ad;k<v;k++)
 for(j=0;j<v;j++)
 if(adj[k][j]==1)
 	{
 if(visited[j]==0)
 {
 visited[j]=1;
 printf("%d",vertex[j]);
 dfs(j,v);
 }
             }
 }
