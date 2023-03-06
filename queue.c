/*
 ============================================================================
 Name        : queue.c
 Author      : rojin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define max 10
int queue[max];
int rear=-1;
int front=-1;
int main(void) {
	int ch,i;
	enqueue();
	for(i=0;rear>=i;i++){
		printf("%d",queue[i]);

}}

void enqueue(){
	int x,ch;
	do{setbuf(stdout,NULL);
				printf("enter to queue continue enqueue is 1 and final pop is 0");
				scanf("%d",&ch);

	puts("enter the data");
	scanf("%d",&x);
	if(rear==max-1){
		printf("queue is full");
	}else if(front==rear==-1){
		front=rear=0;
		queue[rear]=x;
	}else{
		rear=rear+1;
		queue[rear]=x;
	}
	}while(ch==1);
}
