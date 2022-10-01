// this is a binary three that is implemented in C
#include<stdio.h>
#include<stdlib.h>

// this is struct data type
typedef struct node
{
	struct node *left;
	int data;
	struct node *right;
}node;

struct node* newnode()
{
	struct node *new;
	new=(struct node*)(malloc(sizeof(struct node*)));
	int data;
	printf("Enter data: ");
	scanf("%d",&data);
	if (data==0) // Enter 0 for leaf node
	{
		return NULL;
	}


	new->data=data;
	
	printf("hello world");
	printf("you are on left child of %d\n",data);
	new->left=newnode();
	printf("you are on right child of %d\n",data);
	new->right=newnode();
	return new;

}

int main()
{
	struct node* root;
	root=newnode();
	return 0;
}
