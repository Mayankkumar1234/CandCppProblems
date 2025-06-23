
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
     if(isEmpty(s)){
      printf("Stack is Empty");
     }else{
      printf("Stack is not Empty");
     }

}