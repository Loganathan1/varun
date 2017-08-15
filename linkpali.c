#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node *next;
} *head;
void init(){
    head=null;
}
void insert(int num) {
    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data  = num;
    newNode->next = head;
    head = newNode;
}
struct node* reverseCopy(struct node *head) {
    struct node *newHead = null, *temp;
    if (head==null) { 
       printf("Error:Invalid node pointer !\n");       
       return;  
    }
     
    while(head != null) {
        temp = (struct node*) malloc(sizeof(struct node));
        temp->data = head->data;
        temp->next = newHead;
        newHead = temp;
        head = head->next;
    }
     
    return newHead;
}
 
int compareLinkedList(struct node* LLOne, struct node* LLTwo){ 
    while (LLOne != null && LLTwo != null) {
        if (LLOne->data != LLTwo->data)
            return 0;
        LLOne = LLOne->next;
        LLTwo = LLTwo->next;
    }
    return (LLOne == null && LLTwo == null);
}
void printLinkedList(struct node *nodePtr) {
  while (nodePtr != null) {
     printf("%d", nodePtr->data);
     nodePtr = nodePtr->next;
     if(nodePtr != null)
         printf("-->");
  }
}
  
int main() {
    struct node *reverseLL;
    int i, nodeCount, temp;
    init();
    printf("Enter number of Nodes in Linked List\n");
    scanf("%d", &nodeCount);
    printf("Enter %d integers\n",nodeCount);
    for(i = 0; i < nodeCount; i++){
        scanf("%d", &temp);
        insert(temp);
    }      
    printf("\nLinked List\n");
    printLinkedList(head);
    reverseLL = reverseCopy(head);
     
    if(compareLinkedList(head, reverseLL)){
        printf("\nPalindrome Linked List\n");
    } else {
        printf("\nNot a Palindrome Linked List\n");
    }
     
    return 0;
}
