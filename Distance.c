/*Define a new data type to represent an element of a list of coordinates on a 2D plane.
The coordinates are integer values. Write a subprogram that, given as input a list of 
coordinates representing a path, computes the total length of the path, excluding any 
points that have already been visited. As the distance between two points, use the Manhattan 
distance, that is, the sum of the absolute values of the differences of their coordinates.
Formally, the distance between (x1, y1) and (x2, y2) is equal to |x2 − x1| + |y2 − y1|.*/

#include <stdio.h>

typedef struct nodo_{
    int x, y;
    struct nodo_ *next;
}nodo_t;

int distance(nodo_t *l1){
    nodo_t *curr, *succ, *tmp;
    int xdistance, ydistance, distance;
    distance=0;
    for(curr=l1; curr!=NULL; curr=curr->next){
        for(succ=curr->next; succ!=NULL; succ=succ->next){
            tmp=NULL;
            if(curr->x==succ->x&&curr->y==succ->y){
                tmp=succ;
                succ=succ->next;
                free(tmp);
            }
        }
    }
    for(curr=l1; curr->next!=NULL; curr=curr->next){
        xdistance=(curr->next->x)-(curr->x);
        if(xdistance<0){
            xdistance*=-1;
        }
        ydistance=(curr->next->y)-(curr->y);
        if(ydistance<0){
        ydistance*=-1;
        }
        distance+=(xdistance+ydistance);
    }
    return distance;
}