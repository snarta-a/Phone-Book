#include<stdio.h>
int main()

{
	char n[50];
	int a;
	int p;
	int d;
	char add[50];
	
	char na[50];
	int ag;
	int ph;
	int da;
	char addr[50];
	
	printf("WELLCOME TO PHONE BOOK\n\n");
	
	printf("MENU\n");
	
	printf("Press 1 to add the contact\n\n");
	
	int x;
	printf("Enter\n");
	scanf("%d",&x);
	
	if (x==1)
	{
		int y;
		
		printf("Enter the number of contact to be added : ");
		scanf("%d",&y);
		if(y==1)
		{
			printf("--------------------\n");
			printf("Name\n");
			scanf("%s", &n);
			printf("Age : ");
			scanf("%d", &a);
			printf("Phone Number : ");
			scanf("%d", &p);
			printf("Date of Birth : ");
			scanf("%d",&d);
			printf("Address : ");
			scanf("%s",&add);
			printf("--------------------\n");
		}
		else if(y==2)
		{
			printf("--------------------\n");
			printf("Name\n");
			scanf("%s", &n);
			printf("Age : ");
			scanf("%d", &a);
			printf("Phone Number : ");
			scanf("%d", &p);
			printf("Date of Birth : ");
			scanf("%d",&d);
			printf("Address : ");
			scanf("%s",&add);
			printf("--------------------\n");
			
			printf("--------------------\n");
			printf("Name\n");
			scanf("%s", &na);
			printf("Age : ");
			scanf("%d", &a);
			printf("Phone Number : ");
			scanf("%d", &p);
			printf("Date of Birth : ");
			scanf("%d",&d);
			printf("Address : ");
			scanf("%s",&add);
			printf("--------------------\n");
		}
	}
}