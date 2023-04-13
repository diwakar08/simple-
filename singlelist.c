#include <stdio.h>
#include <stdlib.h>

//create a node structure
struct Node{
	int data;
	struct Node* next;
};
struct Node *head;
void insertAtBeginning(struct Node** head,int value)
{
	//Create a new node (allocate memory to new node)
	struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
	
	if(new_node==NULL)
	{
		printf("OVERFLOW!!!\n");
	}
	else
	{
		new_node->data=value; //insert data in new node
		new_node->next=(*head); //insert address of first node in next of new node
		(*head)=new_node; //save address of new node in start node
		printf("Insertion Successful....\n");
	}
}

void insertAtEnd(struct Node** head,int value)
{
	//create new node and allocate memory to it 
	struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
	if(new_node==NULL) //check the OVERFLOW condition
	{
		printf("OVERFLOW!!!\n");
		return;
	}	
	struct Node* last=*head; //another pointer to access last node using traversal
	
	new_node->data=value; //save data in new node
	new_node->next=NULL; //save NULL in next of new_node as it is last node
	
	if(*head==NULL)
	{
		*head=new_node; //insert at first location as list is empty
	}
	else
	{
		while(last->next!=NULL) //traversal to last node
		{
			last=last->next;
		}
		last->next=new_node; //updation of next of last node
	}
	printf("Insertion at End successfull\n");
}

void insertAfter(struct Node** head,int value,int searchValue)
{
}

void printList(struct Node *Head)
{
	printf("start->");
	while(Head!=NULL) //starting loop for traversal 
	{
		printf(" %d ->",Head->data); // printing the data of current node
		Head=Head->next; //moving traversal pointer to next node
	}
	printf(" NULL\n\n");
}
void sortlist(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        struct Node *new_node=(struct Node *)malloc(sizeof(struct Node));
        new_node->data=ptr->data;
        if(head==NULL)
       {
            head=new_node;
            head->next=NULL;
       }
       else if(head->next==NULL)
       {
           if(head->data < ptr->data)
           {
               new_node->next=NULL;
               head->next=new_node;
           }
           else
           {
               new_node->next=head;
               head=new_node;
           }
       }
       else
       {
           struct Node *temp=head,*prev=head;
           while(ptr->data > temp->data  && temp->next!=NULL)
           {
               prev=temp;
               temp=temp->next;
           }
           if(temp->data < ptr->data)
           {
               new_node->next=temp->next;
               temp->next=new_node;
           }
           else
           {
               new_node->next=prev->next;
               prev->next=new_node;
               if(temp==head)
               head=new_node;
           }
       }
       ptr=ptr->next;
    }
	printf("sorting successfull :\n\n");
	printf("the sorted list is :->");
	printList(head);
    return;
}



//it will return the pointer of searched item
struct Node* searchList(struct Node *head,int value) 
{
	int loc=1;
	while(head!=NULL) //start traversal
	{
		if(head->data==value) //check the value stored in node
		{
			printf("Search Successful...Item found at location %d\n\n",loc);
			return head;
		}
		head=head->next; //update traversal pointer
		loc=loc+1; //update currect location of traversal pointer
	}
	printf("Search unsuccessful..... Item not found in Linked List\n\n");
	return NULL;
}

void searchListLocation(struct Node *head,int value)
{
	int loc=1;
	while(head!=NULL) //start traversal
	{
		if(head->data==value) //check the value stored in node
		{
			printf("Search Successful...Item found at location %d\n\n",loc);
			return;
		}
		head=head->next; //update traversal pointer
		loc=loc+1; //update currect location of traversal pointer
	}
	printf("Search unsuccessful..... Item not found in Linked List\n\n");
}

void deleteFirst(struct Node **head)
{
	struct Node *nodeDel;
	if((*head)==NULL)
	{
		printf("UNDERFLOW!!! Linked List is empty!!!\n\n");
		return;
	}
	else
	{
		nodeDel=*head;
		(*head)=(*head)->next;
		printf("First Node with data %d Deleted Successfully\n\n",nodeDel->data);
		free(nodeDel);
		return;
	}
}

void deleteEnd(struct Node *head)
{
	struct Node *nodeDel,*prevNodeDel;
	if(head==NULL)
	{
		printf("UNDERFLOW!!! Linked List is empty!!!\n\n");
		return;
	}
	else
	{
		nodeDel=head;
		while(nodeDel->next != NULL)
		{
			prevNodeDel=nodeDel;
			nodeDel=nodeDel->next;
		}
		prevNodeDel->next=NULL;
		printf("Last Node with data %d Deleted Successfully\n\n",nodeDel->data);
		free(nodeDel);
		return;
	}
}

void deleteMiddleNode(struct Node* head, int position)
{
    int i;
    struct Node *toDelete, *prevNode;

    if(head == NULL)
    {
        printf("UNDERFLOW!!! List is already empty.\n");
    }
    else
    {
        toDelete = head;
        prevNode = head;

        for(i=2; i<=position; i++)
        {
            prevNode = toDelete;
            toDelete = toDelete->next;

            if(toDelete == NULL)
                break;
        }

        if(toDelete != NULL)
        {
            if(toDelete == head)
                head = head->next;

            prevNode->next = toDelete->next;
            toDelete->next = NULL;

            /* Delete nth node */
            free(toDelete);

            printf("SUCCESSFULLY DELETED NODE FROM MIDDLE OF LIST\n");
        }
        else
        {
            printf("Invalid position, unable to delete.\n");
        }
    }
}


int main()
{
	struct Node* start=NULL;
	int choice=0;
	int data,item,position;
	while(choice!=9)
	{
		printf("SINGLE LIKED LIST MENU\n");
		printf("1. Insert at Beginning\n");
		printf("2. Insert at End\n");
		printf("3. Insert after\n");
		printf("4. Delete a Node at Beginning\n");
		printf("5. Delete a Node at End\n");
		printf("6. Delete a Middle Node\n");
		printf("7. Search a value\n");
		printf("8. Print the Linked List\n");
		printf("9. Exit \n");
        printf("10. sort the list in another list\n");
        printf("11. print the sorted list\n");
		printf("Enter Your Choice (1-9) : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter value to insert at beginning : ");
				scanf("%d",&data);
				printf("Linked list before insertion\n");
				printList(start);
				insertAtBeginning(&start,data);
				printf("Lined list after insertion\n");
				printList(start);
				break;
			case 2:
				printf("Enter value to insert at end : ");
				scanf("%d",&data);
				printf("Linked list before insertion\n");
				printList(start);
				insertAtEnd(&start,data);
				printf("Lined list after insertion\n");
				printList(start);
				break;		
			case 3:
				printf("Enter value to insert : ");
				scanf("%d",&data);
				printf("Enter value after which you want to insert : ");
				scanf("%d",&item);
				printf("Linked list before insertion\n");
				printList(start);
				insertAfter(&start,data,item);
				printf("Linked list after insertion\n");
				printList(start);
				break;		
			case 4:
				deleteFirst(&start);
				printf("Linked list after deletion of First Node\n");
				printList(start);
				break;
			case 5:
				deleteEnd(start);
				printf("Linked list after deletion of End Node\n");
				printList(start);
				break;
			case 6:
				printf("\nEnter the node position you want to delete: ");
				scanf("%d", &position);
				if(position==1)
				{
					deleteFirst(&start);
				}
				else
				{
					deleteMiddleNode(start,position);
				}
				break;
			case 7:
				printf("Enter value you want to search  : ");
				scanf("%d",&data);
				searchListLocation(start,data);
				break;
			case 8:
				printList(start);
				break;
			 case 10:
				sortlist(start);
				break;
			case 9:
				exit(1);
            case 11:
				 printList(head);
				break;
			default:
				printf("Invalid Choice....Please enter a choice between 1-9\n");
				break;
		}
	}
	return 0;
}