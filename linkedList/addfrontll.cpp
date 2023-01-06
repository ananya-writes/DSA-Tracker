#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next; 
};

void ins_beg(int elmt,node** headptr){
    node* nnode = new node;
    nnode->data = elmt;
    nnode->next = *headptr;
    *headptr=nnode;
}

int main() {
    node* head = NULL;
    
    ins_beg(43, &head);
    ins_beg(56,&head);

    cout<<"After all insertions"<<endl;
    for (node* i = head ; i!=NULL ; i=i->next){
        cout<< i->data << " -> ";
    }
    
}