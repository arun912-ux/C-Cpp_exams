#include<bits/stdc++.h>
using namespace std;

typedef struct Poly
{
    int data;
    struct Poly *nxt=NULL;
}node;


int main(){

    int n;
    cin >> n;
    int t=n;

    node *head=NULL, *temp, *newnode;

    // cout << head->nxt << endl;

    while(t--){
        newnode = (node*)malloc(sizeof(node));
        cin >> newnode->data;
        newnode->nxt = NULL;

        if (head == NULL){
            head = newnode;
        }
        else{
            temp = head;
            while(temp->nxt!= NULL){
                temp = temp->nxt;
            }
            temp->nxt=newnode;
        }
        // newnode->nxt=head;
        // cout << t << endl;

    }
    // free(temp);
        

    node *tra = head;
    while(tra!= NULL){
        // cout << tra->data << ' ';
        tra = tra->nxt;
    }
    tra = head;

    cout << endl;

    do{
        cout << tra << endl;
        tra = tra->nxt;
    }while(tra->nxt!=head);


    temp = head;
    for(int i=0; i<6; i++){
        cout << temp->data << endl;
        temp = temp->nxt;
    }




    return 0;
}