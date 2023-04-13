#include<stdio.h>


struct Node{
    struct Node *prev;
    int data;
    struct Node *next;
};
struct Node *head=NULL;

insertAtBeginning()
{
	struct Node *new_node=(struct Node *) malloc(sizeof(struct Node));

	if(head==NULL)
	{
		head=new_node;
		head->prev=head;
		head->next=head;
	}

}




int main(){
    
    int choice=-1;
	while(choice!=0)
	{
		printf("\ndoubly CIRCULAR LINKED LIST MENU\n");
		printf("1. Insert at Beginning\n");
		printf("2. Insert at End\n");
		printf("3. Insert at Position\n");
		printf("4. Deletion at Beginning\n");
		printf("5. Deletion at End\n");
		printf("6. Deletion at Position\n");
		printf("7. Print the List\n");
		printf("8. make another sorted list with same data\n");
		printf("0. Exit\n");
		printf("\nEnter your choice (0-7) : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insertAtBeginning();
				break;
			case 2:
				insertAtEnd();
				break;
			case 3:
				insertAtPos();
				break;
			case 4:
				deleteAtBeginning();
				break;
            case 5:
                deleteatend();
                break;
            case 6:
                deleteatpos();    
			case 7:
				printList();
				break;
			case 7:
				sortlist();
				break;
			case 0:
				exit(1);
				break;
			default:
				printf("Invalid Choice!!!! Please try again....\n");
				break;
		}
	}
    
    return 0;
}