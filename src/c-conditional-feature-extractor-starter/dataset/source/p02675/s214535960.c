#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

typedef struct t_queue{
	int size, head, tail;
	int *datavec;
} Queue;

Queue *initQueue(int);
void freeQueue(Queue*);
void enqueue(Queue*, int);
int dequeue(Queue*);

Queue *initQueue(int size){
	Queue *q = (Queue*)malloc(sizeof(Queue));
	//if(q == NULL) errorQueue();

	q->size = size;
	q->datavec = (int*)malloc(sizeof(int) * (size+1));
	//if(q->datavec == NULL) errorQueue();
	q->head = q->tail = 0;
	return q;
}

void freeQueue(Queue *q){
	free(q->datavec);
	free(q);
}

void enqueue(Queue *q, int data){
	q->datavec[q->head] = data;
	q->head++;
	q->head %= (q->size+1);
}

int dequeue(Queue *q){
	int ret = q->datavec[q->tail];
	q->tail++;
	q->tail %= (q->size+1);
	return ret;
}

int main(int argc, char const *argv[]){
	int n, m;
	scanf("%d %d\n",&n, &m);
	int a[m], b[m], dep[n+1], sign[n+1];
	for(int i=0; i<n+1; i++){
		dep[i]=0;
	}
	for(int i=0; i<m; i++){
		scanf("%d %d\n",a+i, b+i);
	}
	
	Queue *q = initQueue(n+1);
	enqueue(q, 1);
	do{
		int t = dequeue(q);
		for(int i=0; i<m; i++){
			if(dep[b[i]] == 0 && a[i] == t){
				sign[b[i]] = t;
				dep[b[i]] = 1;
				enqueue(q,b[i]);
			}
			if(dep[a[i]] == 0 && b[i] == t){
				sign[a[i]] = t;
				dep[a[i]] = 1;
				enqueue(q,a[i]);
			}
		}
	}while(q->head != q->tail);
	
	printf("Yes\n");
	for(int i=2; i<n+1; i++){
		printf("%d\n", sign[i]);
	}
}