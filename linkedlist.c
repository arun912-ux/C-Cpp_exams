#include<stdio.h>
#include<stdlib.h>

/*
1. The struct Poly is defined as a new data type.
*/
typedef struct Poly
{
    int coef;
    int exp;
    struct Poly *nxt; 
}node;


int main(){

    node *start=NULL, *temp, *newnode;

    newnode = (node*)malloc(sizeof(node));
    scanf("%d%d", &newnode->coef, &newnode->exp);

    if(start == NULL){
        start = newnode;
    }
    else{

        temp = start;
        while(temp->nxt != NULL);
        temp->nxt = newnode;

    }


    

    return 0;
}