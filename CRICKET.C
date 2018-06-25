#include<stdio.h>
#include<conio.h>
#include<string.h>
struct cricket
{
	char name[20],team[20];
	float ave;
};
void main()
{
	struct cricket p[100],temp;
	int i,j,n;
	char t[20];
	clrscr();
	printf("enter the num of u want list:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		flushall();
		printf("\nenter player name:");
		gets(p[i].name);
		flushall();
		printf("enter team name:");
		gets(p[i].team);
		printf("enter avg of player:");
		scanf("%f",&p[i].ave);
	}
	//string sorting
       for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		    if( strcmp(p[i].team,p[j].team)<0)
			{
			   temp=p[i];
			   p[i]=p[j];
			   p[j]=temp;
			}

		}
	}
	clrscr();
	printf("\n***deatails of players***");
	for(i=0;i<n;i++)
	{
		printf("\nplayer name: ");
		flushall();
		puts(p[i].name);
		printf("player team name: ");
		flushall();
		puts(p[i].team);
		printf("player batting avg: %.2f",p[i].ave);
	}
	//team wise name:
	strcpy(t,p[0].team);
	for(i=0;i<n;i++)
	{
		if(strcmp(t,p[i].team)==0 && i!=0)
		{
			printf("\n%s \t%.2f:",p[i].name,p[i].ave);
			strcpy(t,p[i].team);
		}
		else
		{
			printf("\n***Team %s***",p[i].team);
			printf("\nName: \t\tAvg:");
			printf("\n%s \t\t%.2f",p[i].name,p[i].ave);
			strcpy(t,p[i].team);
		}
	}
	getch();
}
void dummy(float *b)
{
	float a=*b;
	dummy(&a);
}
