/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include<malloc.h>
struct node {
	int num;
	struct node *next;
};
struct node * removeEveryKthNode(struct node *head, int K) {
	struct node *temp1=NULL;
	int i = 1, len = 0,temp;
	if ((head == NULL) || K <= 0)
		return NULL;
	if ( K == 1)
	{
		return NULL;
	}
	temp1 = head;
	while (temp1 != NULL)
	{
		temp1 = temp1->next;
		len++;
	}
	if (K > len)
		return head;
	temp1 = head;
	for (i = 1; i<len;)
	{
	
		if ((i + 1) % K == 0)
		{
			temp1->next = temp1->next->next;
			if (temp1->next != NULL)
				temp1 = temp1->next;
			i++;
		}
		else
		if (temp1->next!=NULL)
			temp1 = temp1->next;

		i++;
	}
	return head;
}