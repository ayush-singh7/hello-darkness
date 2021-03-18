#include<stdio.h>
struct node 
{
	int data;
	struct node *link;
};
void main()
{
	int n;
	struct node *temp = NULL, *head = NULL, *tail = NULL;
	printf("Enter the number of terms : ");
	scanf("%d",&n);
	int i,x;
	for(i=0;i<n;i++)
	{
		
		scanf("Enter the data : ");
		scanf("%d",&x);
		temp =(struct node*)malloc(sizeof(struct node));
		temp->data = x;
		temp->link = NULL;
		
		if(head == NULL)
		{
			head = temp;
			tail = temp;
		}
		else 
		{
			tail->link = temp;
			tail = temp;
			tail->link = NULL;
		
		}
	}
	struct node *prev = NULL, *nex = NULL, *current = NULL;
	current = head;
	while(current!=NULL)
	{
		nex = current->link;
		current->link = prev;
		prev = current;
		current = nex;		
		
	}
	head = prev;

	temp = head;
	while(temp!=NULL)
	{
		printf("%d   ",temp->data);
		temp= temp->link;
	}
}





