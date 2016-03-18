/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>
#include<stddef.h>
struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) {
	int temp = 0, k, len = 0,rem=0;
	struct node *linklist, *head=NULL,*newnode;
	if (N < 0)
		N =N* (-1);
	while (N != 0)
	{
		rem = N % 10;
		temp = temp * 10 + rem;
		N /= 10;
	}
	newnode = (struct node *)malloc(sizeof(struct node));
	newnode->num = (rem % 10);
	newnode->next = NULL;
	head = newnode;
	linklist = head;
	temp /= 10;
	while (temp!=0)
	{
		newnode = (struct node*)malloc(sizeof(struct node));
		newnode->num = temp % 10;
		newnode->next = NULL;
		linklist->next = newnode;
		linklist = linklist->next;
		temp /= 10;
	}
	return head;
}