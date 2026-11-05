#include <stdio.h>
#include <stdlib.h>

typedef struct point {
    int m, f, r;
    struct point *next;
} point;

int main()
{
    point *head = NULL, *cur = NULL;
    while( 1 ){
        point *new = (point *)malloc(sizeof(point));
        if( new == NULL ) exit(-1);
        scanf("%d%d%d", &new->m, &new->f, &new->r);
        if( new->m == -1 && new->f == -1 && new->r == -1 ){
            free(new);
            break;
        }
        new->next = NULL;
        if( head == NULL ) head = new;
        else cur->next = new;
        cur = new;
    }

    int score;
    cur = head;
    while( cur ){
        score = cur->m + cur->f;
        if( score == -2 || score < 30 ) printf("F\n");
        else if( 80 <= score ) printf("A\n");
        else if( 65 <= score && score < 80 ) printf("B\n");
        else if( 50 <= score && score < 65 ) printf("C\n");
        else if( 30 <= score && score < 50 && 50 <= cur->r ) printf("C\n");
        else printf("D\n");
        cur = cur->next;
    }

   return 0;
}