#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
void main()
{
	struct node *temp, *head=NULL, *tail=NULL; 
	
	int i,x;
	
	for( i = 0 ; i<6 ; i++)
	{
		
		temp = (struct node*)malloc(sizeof(struct node));
		printf("Enter the element :");
		scanf("%d", &x);
		temp->data=x;
		temp->link=NULL;
		   
		if(head == NULL)
		{
		   head = temp;
		   tail = temp;
		}
		else
		{
			tail->link=temp;
			tail = temp;
			tail->link = NULL;
		}
		
	}
	
	struct node *prev = NULL, *next = NULL, *current = NULL;
	
	current = head;

	while(current!=NULL)
	{
		next = current->link;
		current->link = prev;	
		prev = current;
		current = next;
		
	}
	head = prev;
	temp = head;
	while(temp!= NULL)
	{
		printf("%d  ", temp->data);
		temp = temp->link;
	}
	
	
}
