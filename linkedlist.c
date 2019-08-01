#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*start=NULL;

struct node *createNode(){
    struct node *ptr = (struct node*) malloc(sizeof(struct node));
    printf("Enter data\n");
    scanf("%d",&ptr->data);
    ptr->next = NULL;
    return ptr;
}

void insertPos(int n,int pos){//Insert at a particular position
    struct node *temp=start;
    for(int c=0; c<pos-1 ; c++, temp=temp->next); //to move temp to the location of the n-1th element
    struct node *ptr = (struct node*) malloc(sizeof(struct node));
    ptr->data = n;
    ptr->next = temp->next;
    temp->next = ptr;
}
void insertBeforeElement(int element, int belement){//belement refers to the element before which the insertion has to take place
    struct node *temp = start,*ptr=temp;
    int found=0;
    while (temp)
    {
        if(temp->data==belement){
            struct node *newNode = (struct node*) malloc(sizeof(struct node));
            newNode->data = element;
            newNode->next = temp;
            ptr->next = newNode;
        }
        ptr = temp;
        temp = temp->next;
    }
    if (!found)
    {
        printf("Element not found\n");
    }  
}
void insertAfterElement(int element, int alement){//aelement refers to the element after which the node has to be deleted
    struct node *temp=start,*ptr;
    int found = 0;
    while (temp)
    {
        if(temp->data==alement){
            ptr = (struct node*) malloc (sizeof(struct node));
            ptr->data = element;
            ptr->next = temp->next;
            temp->next = ptr;
            found = 1;
            break;
        }
        temp = temp->next;
    }
    if (!found)
    {
        printf("Element not found\n");
    }
    
} 
void insert(){
    int ch;
    do{
        printf("-------------------------\n1.At a particular position\n2.Before an element\n3.After an element\n0.Exit\n-------------------------\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("Enter the position and element to be inserted\n");
            int pos,n;
            scanf("%d %d",&pos,&n);
            insertPos(n,pos);
            break;
        case 2:
            printf("Enter the element before insertion and element to be inserted\n");
            int belement,element;
            scanf("%d %d",&belement,&element);
            insertBeforeElement(element,belement);
            break;
        
        case 3:
            printf("Enter the element after which insertion should take place and element to be inserted\n");
            int aelement;
            scanf("%d %d",&aelement,&element);
            insertAfterElement(element,aelement);
            break;

        default:
            break;
        }
    }while(ch);

}
void deletePos(int pos){
    struct node *temp=start;
    for(int c=0; c<pos-1 ; c++, temp=temp->next); //to move temp to the location of the n-1th element
    struct node *ptr = temp->next;
    temp->next = ptr->next;
    free(ptr);
}
void deleteBeforeElement(int belement){
    struct node *temp = start,*ptr=temp;
    int found=0;
    while (temp)
    {
        if(temp->next->data==belement){ 
            ptr->next = temp->next;
            free(temp);
            found = 1;
            break;
        }
        if(found)
            break;
        ptr = temp;
        temp = temp->next;
        
    }
    if (!found)
    {
        printf("Element not found\n");
    }  
}
void deleteAfterElement(int aelement){
    struct node *temp=start,*ptr=NULL;
    int found = 0;
    while (temp)
    {
        if(temp->data==aelement){
            ptr = temp->next;
            temp->next = ptr->next;
            free(ptr);
            found = 1;
            break;
        }
        temp = temp->next;
    }
    if (!found)
    {
        printf("Element not found\n");
    }
};

void delete(){
    int ch;
    do{
        printf("-------------------------\n1.At a particular position\n2.Before an element\n3.After an element\n0.Exit\n-------------------------\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("Enter the position to be deleted\n");
            int pos;
            scanf("%d",&pos);
            deletePos(pos);
            break;
        case 2:
            printf("Enter the element before deletion\n");
            int belement;
            scanf("%d",&belement);
            deleteBeforeElement(belement);
            break;
        
        case 3:
            printf("Enter the element after which deletion should take place\n");
            int aelement;
            scanf("%d",&aelement);
            deleteAfterElement(aelement);
            break;

        default:
            break;
        }
    }while(ch);

}
void display(){
    struct node *temp = start;
    while (temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
    
}
void main(){
    int ch;
    struct node *temp = NULL,*ptr;
    do
    {
        printf("--------------------\n1.Enter Node\n2.Display\n3.Insert\n4.Delete\n0.Exit\n------------------\n");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1: //Code to create / add a node to linked list
                if(!start){
                    start = createNode();
                    temp = start;
                }
                else{
                    temp -> next = createNode();
                    temp = temp->next;
                }
                break;
            case 2:
                display();
                break;
            case 3:
                insert();
                break;
            case 4:
                delete();
                break;
            case 0:
                break;
            default:
                printf("Invalid option\n");
                break;
        }
    } while (ch);
    
    
}