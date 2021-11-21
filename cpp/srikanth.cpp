#include<bits/stdc++.h>
// #include<iostream>
using namespace std;

struct node
{
    int x, y;
    struct node *nxt = NULL;
};


int main(){

    int n;
    cin >> n;

    struct node *newnode, *head=NULL;

    newnode = (node*)malloc(sizeof(node));
    cin >> newnode->x >> newnode->y;
    newnode->nxt = NULL;
    if (head== NULL){
        head = newnode;
    }
    else{
        temp = head;
        while(temp->nxt!= NULL){
            temp = temp->nxt;
        }
        temp->nxt=newnode;
    }

    return 0;
    
}