#include<stdio.h>
#include<conio.h>

void binary_search(int[],int,int);
void main()
{
	int a[20],n,x,i;
	clrscr();

	printf("ENTER ELEMENT YOU WANT TO STORE:");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf("ENTER %d ELEMENT ",i);
		scanf("%d",&a[i]);
	}
	printf("ENTER ELEMENT TO FIND:");
	scanf("%d",&x);

	binary_search(a,n,x);
	getch();
}
void binary_search(int a[],int n,int x)
{
	int low,mid,high,i;
	low=1;
	high=n;
	mid=(low+high)/2;

	while(low<=high && x!=a[mid])
	{
		if(x<a[mid])

			high=mid-1;

		else if(x>a[mid])

			low=mid+1;

			mid=(low+high)/2;
	}
		if(x==a[mid])
		{
			printf("ELEMENT %d FOUND AT %d POSITIONS :",x,mid);

		}

		if(low>high)
		{
			printf("ELEMENT NOT FOUND :");
		}

}