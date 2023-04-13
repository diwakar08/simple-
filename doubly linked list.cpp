#include<stdio.h>


struct Node{
    struct Node *prev;
    int data;
    struct Node *next;
};
struct Node *head=NULL;

void insertAtBeginning()
{
    struct Node *node=(struct Node *) malloc(sizeof(struct Node));
    if(node==NULL)
        printf("overflow condition memory allocation failed :");
    int val;
    printf("enter value to be inserted :");
    scanf("%d",&val);
    node->data=val;
    if(head==NULL)
    {
        head=node;
        head->prev=head;
        head->next=head;
        return;
    }

    node->prev=head->prev;
    head->prev->next=node;
    node->next=head;
    head->prev=node;
    head=node;

}




int main(){
    
    int choice=-1;
	while(choice!=0)
	{
		printf("\nCIRCULAR LINKED LIST MENU\n");
		printf("1. Insert at Beginning\n");
		printf("2. Insert at End\n");
		printf("3. Insert at Position\n");
		printf("4. Deletion at Beginning\n");
		printf("5. Deletion at End\n");
		printf("6. Deletion at Position\n");
		printf("7. Print the List\n");
		printf("0. Exit\n");
		printf("\nEnter your choice (0-7) : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insertAtBeginning();
				break;
			// case 2:
			// 	insertAtEnd();
			// 	break;
			// case 3:
			// 	insertAtPos();
			// 	break;
			// case 4:
			// 	deleteAtBeginning();
			// 	break;
            // case 5:
            //     deleteatend();
            //     break;
            // case 6:
            //     deleteatpos();    
			// case 7:
			// 	printList();
			// 	break;
			// case 0:
			// 	exit(1);
			// 	break;
			default:
				printf("Invalid Choice!!!! Please try again....\n");
				break;
		}
	}
    
    return 0;
}