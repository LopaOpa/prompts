#include<stdio.h>
#include<math.h>
void heapsort(int x[],int n);
void main()
{
int a[100],n,i;
clrscr();
printf("\n\tHEAP SORT");
for(i=1;i<=n;i++)
printf("\n%d",a[i]);
getch();
}
void cheap(int x[20],int n)
{
int s,f,key,q;
for(q=2;q<=n;++q)
{
s=q;
key=x[q];
f=(int)(s/2);
while((s>1)&&(key>x[f]))
{
x[s]=x[f];
s=f;
f=(int)(s/2);
if(f<1)
f=1;
}
x[s]=key;
}
}
void heapsort(int x[20],int n)
{
int i,temp,s,f,key;
cheap(x,n);
for(i=n;i>=2;--i)
{
    temp=x[1];
    x[1]=x[i];
    x[i]=temp;
    s=1;
    key=x[s];
    f=2;
    if(f>n)
     f=n;
     x[s]=key;
    }
  }
}
