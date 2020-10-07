#include<conio.h>
#include<math.h>
void main()
{
int a[125],key,size,i,h;
clrscr();
printf("\n Enter the array size:");
scanf("%d",&size);
printf("\n Enter the array element:");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the key value");
scanf("%d",&key);
h=key%size;
printf("The element is %d",a[i]);
getch();
}
