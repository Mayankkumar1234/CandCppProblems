
// // #include <stdio.h>
// // #include <stdlib.h>

// // // Define the Node structure
// // typedef struct Node
// // {
// //   int data;
// //   struct Node *next;
// // } Node;

// // Node *createNode(int data)
// // {
// //   Node *newNode = (Node *)malloc(sizeof(Node));
// //   if (!newNode)
// //   {
// //     printf("Memory error\n");
// //     exit(1);
// //   }
// //   newNode->data = data;
// //   newNode->next = NULL;
// //   return newNode;
// // }

// // Program to sort an array using quick sort :-

// #include<stdio.h>

// void printArray(int *A, int n){
//   for(int i=0;i<n;i++){
//     printf("%d", A[i]);
//   }

//   printf("\n");
// }
// int swap(int A[],  int first , int second ){

// }

// int partition(int A[], int low , int high)
// {
//   int pivot = A[high];
//   int idx = low -1;

//   for(int j=low;j<high;j++){
//     if(A[j]<=pivot){
//       idx ++;
//       swap(A[j], A[idx]);
//     }
//   }
//    idx++;
//    swap(A[high], A[idx]);
//    return idx;

// }

// void quickSort(int A[], int low , int high)
// {
//   int partitionIndex;

//     if(low<high){

//       partitionIndex = partition(A, low , high);
//        quickSort(A, low , partitionIndex-1);
//          quickSort(A,partitionIndex+1, high);
//     }
// }

// int main(){

//   printf("Hello, it is working fine...");
//   return 0;
// }

// Program to insert into a linkedlist...

#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{

  while (ptr != NULL)
  {
    printf("%d\n", ptr->data);
    ptr = ptr->next;
  }
}

struct Node *insertAtFirst(struct Node *head, int data)
{
  struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
  ptr->data = data;
  ptr->next = head;

  return ptr;
}

struct Node *insertAtIndex(struct Node *head, int data, int index)
{
  struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
  struct Node *p = head;

  int i = 0;
  while (i != index - 1)
  {
    p = p->next;
    i++;
  }

  ptr->data = data;
  ptr->next = p->next;
  p->next = ptr;
  return head;
}

int main()
{
  struct Node *head;
  struct Node *second;
  struct Node *third;
  struct Node *fourth;
  head = (struct Node *)malloc(sizeof(struct Node));
  second = (struct Node *)malloc(sizeof(struct Node));
  third = (struct Node *)malloc(sizeof(struct Node));
  fourth = (struct Node *)malloc(sizeof(struct Node));

  head->data = 22;
  head->next = second;
  second->data = 23;
  second->next = third;
  third->data = 24;
  third->next = fourth;
  fourth->data = 25;
  fourth->next = NULL;

  printf("LinkedList before inserting a node\n");
  linkedListTraversal(head);

  head = insertAtFirst(head, 21);

  printf("LinkedList after inserting a node at beggining : \n");
  linkedListTraversal(head);

  head = insertAtIndex(head, 32, 2);
  printf("LinkedList after inserting a node at a particular index  : \n");

  linkedListTraversal(head);
  return 0;
}