//WAP to implement stack
#include<stdio.h>
#define s 3
int top=-1;
int st[3];
int push(int x){
	if(top==s-1)
	printf("Stack is full\n");
	else
	top=top+1;
	st[top]=x;
}
int display(){
	printf("element of stack==");
	int i;
	if(top==-1)
	printf("No stack is empty\n");
	else
	for(i=top;i>=0;i--){
		printf("%d",st[i]);
	}
}
int pop(){
	int i;
	if(top==-1)
	printf("Stack is empty\n");
	else{
		printf("\ndeleted element in stack is==%d",st[top]);
	}
	top=top-1;
}
int main()
{
	push(10);
	push(20);
	push(30);
	display();
	pop();
}
