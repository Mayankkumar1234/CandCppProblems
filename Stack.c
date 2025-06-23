
// Stack in C

#include<stdio.h>
#include<stdlib.h>

struct Stack
{
  /* data */
  int size;
  int top;
  int * arr;
};

int isEmpty(struct Stack *ptr){
  if(ptr->top == -1){
    return 1;
  }
  return 0;
}

int isFull(struct Stack *ptr){
  if(ptr->top == ptr->size -1){
    return 1;
  }
  return 0;
}

void push(struct Stack *ptr , int data){
  if(isFull(ptr)){
    printf("Stack is Full cannot add more elements into it...");
  }else{
    ptr->top++; 
    ptr->arr[ptr->top] = data;
  }
}

int pop(struct Stack *ptr){
  if(isEmpty(ptr)){
    printf("Stack is empty cannot pop elements from it...");
    return -1;
  }else{
   int data = ptr->arr[ptr->top];
    
    ptr->top--; 
    return data;
  }
}
int main(){
  // struct Stack S;
  //   S.size = 80;
  //   S.top = -1;
  //   S.arr = (int *)malloc(S.size* sizeof(int));

    //  It can also be implemented using stack pointer...

     struct Stack *s;
     s->size = 80;
     s->top = -1;
     s->arr = (int *)malloc(s->size*sizeof(int));
     s->arr[0] = 21;
     s->top++;
     if(isEmpty(s)){
      printf("Stack is Empty");
     }else{
      printf("Stack is not Empty");
     }

     push(s, 22);
      push(s, 23);
      int valP = pop(s);

      printf(valP);
      return 0;

}