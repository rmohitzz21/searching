#include<stdio.h>
#include<conio.h>

void linear_search(int[],int,int);
void main()
{
	int a[20],n,x,i;
	clrscr();
	printf("HOW MANY ELEMENT YOU WANT TO STORE :");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf("ENTER %d ELEMENT :",i);
		scanf("%d",&a[i]);
	}
	printf("ENTER ELEMENT TO FIND :");
	scanf("%d",&x);

	linear_search(a,n,x);
	getch();
}

void linear_search(int a[],int n,int x)
{
	int i,flag=0;

	for(i=1;i<=n;i++)
	{
		if(x==a[i])
		{
			printf("ELEMENT FOUND AT %d POSITION ",i);
			flag=1;
		}
	}
	if(flag==0)
	{
		printf("ELEMENT NOT FOUND::");
	}

}