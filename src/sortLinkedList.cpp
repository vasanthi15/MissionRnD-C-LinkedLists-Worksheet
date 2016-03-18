/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>
#include<malloc.h>
struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head) {
	struct node *temp,*temp1;
	int max;
	if (head==NULL)
	return NULL;
	temp = (struct node *)malloc(sizeof(struct node));
	temp1 = (struct node *)malloc(sizeof(struct node));
	temp = head;
	while (temp != NULL)
	{
		temp1 = temp;
		while (temp1 != NULL)
		{
			if (temp->num >	temp1->num)
			{
				max = temp->num;
				temp->num = temp1->num;
				temp1->num = max;
			}
			temp1 = temp1->next;
		}
		temp = temp->next;
	}
	return head;
}