#include <bits/stdc++.h>
#include<iostream>

using namespace std;

typedef struct Poly
{
    int coef;
    int exp;
    struct Poly *nxt=NULL;
}node;

node *head=NULL, *temp, *newnode;


int main()
{

    int x, n, t;
    cin >> x >> n >> t;
    int sum = 0;


    while(t--){
        
        newnode = (node*)malloc(sizeof(node));
        cin >> newnode->coef >> newnode->exp;
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
        if(t==0){
            sum = newnode->coef;
        }


    }

    int c=1;
    temp = head;
    while(temp != NULL  &&  c!=n){
        temp = temp->nxt;
        c++;
    }

    sum += temp->coef * pow(x, temp->exp);
    
    cout << sum;

    return 0;
}