
// // Stack in C

// #include<stdio.h>
// #include<stdlib.h>

// struct Stack
// {
//   /* data */
//   int size;
//   int top;
//   int * arr;
// };

// int isEmpty(struct Stack *ptr){
//   if(ptr->top == -1){
//     return 1;
//   }
//   return 0;
// }

// int isFull(struct Stack *ptr){
//   if(ptr->top == ptr->size -1){
//     return 1;
//   }
//   return 0;
// }

// void push(struct Stack *ptr , int data){
//   if(isFull(ptr)){
//     printf("Stack is Full cannot add more elements into it...");
//   }else{
//     ptr->top++;
//     ptr->arr[ptr->top] = data;
//   }
// }

// int pop(struct Stack *ptr){
//   if(isEmpty(ptr)){
//     printf("Stack is empty cannot pop elements from it...");
//     return -1;
//   }else{
//    int data = ptr->arr[ptr->top];

//     ptr->top--;
//     return data;
//   }
// }
// int main(){
//   // struct Stack S;
//   //   S.size = 80;
//   //   S.top = -1;
//   //   S.arr = (int *)malloc(S.size* sizeof(int));

//     //  It can also be implemented using stack pointer...

//      struct Stack *s;
//      s->size = 10;
//      s->top = -1;
//      s->arr = (int *)malloc(s->size*sizeof(int));
//      s->arr[0] = 21;
//      s->top++;
//      if(isEmpty(s)){
//       printf("Stack is Empty");
//      }else{
//       printf("Stack is not Empty");
//      }

//      push(s, 22);
//       push(s, 23);

//      push(s, 24);
//       push(s, 25);

//      push(s, 26);
//       push(s, 27);

//      push(s, 28);
//       push(s, 29);

//      push(s, 30);
//       push(s, 31);    // Stack overflow because we have declared the size of the array as 10
//       int valP = pop(s);

//       printf("Pop value :%d",valP);
//       return 0;

// }

// Stack implementation using linkedList :-

#include <stdio.h>
#include <stdlib.h>

struct stack
{
  int data;
  struct stack *next;
};

int isEmpty(struct stack *top)
{
  if (top == NULL)
  {
    return 1;
  }
  return 0;
}
int isFull()
{
  struct stack *p = (struct stack *)malloc(sizeof(struct stack));
  if (p == NULL)
  {
    return 1;
  }
  return 0;
}

struct stack *push(struct stack *top, int data)
{
  if (isFull())
  {
    printf("Stack Overflow\n");
  }
  else
  {

    struct stack *ptr = (struct stack *)malloc(sizeof(struct stack));
    ptr->data = data;
    ptr->next = top;
    top = ptr;
    return top;
  }
}
int pop(struct stack *top)
{
  if (isEmpty(top))
  {
    printf("Stack is underflow\n");
  }
  else
  {
    struct stack *ptr = top;
    top = top->next;
    int x = ptr->data;
    free(ptr);
    return x;
  }
}

void stackTraversal(struct stack *top)
{

  while (top != NULL)
  {
    printf("%d", top->data);
    top = top->next;
  }
}

int main()
{

  struct stack *top = NULL;
  top = push(top, 21);
  stackTraversal(top);
  int popELement = pop(top);
  printf("%d\n", popELement);

  return 0;
}