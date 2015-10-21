# include <cstdio>
# include <cstring>
# include <cmath>
# include <cstdlib>
# include <iostream>
# include <vector>
# include <algorithm>
# include <queue>
# include <set>
# include <map>
# include <malloc.h>
using namespace std;
typedef struct mylistnode{
    int data;
    mylistnode * next;
}mylist;
mylist* insert(mylist *head,int data){
    mylist *node,*temp;
    node=(mylist *)malloc(sizeof(mylist));
    node->data=data;
    node->next=NULL;
    temp=head;
    while(temp!=NULL and temp->next!=NULL){
        temp=temp->next;
    }
    if(temp==NULL)
        head=node;
    else
        temp->next=node;
    return head;
}
void print(mylist *head){
    while(head){
        cout<<head->data<<endl;
        head=head->next;
    }
}
mylist *reverselist(mylist *head){
    if(head==NULL || head->next==NULL)
            return head;
    mylist *revhead,*left,*right;
    revhead=reverselist(head->next);
    left=head;
    right=head->next;
    right->next=left;
    left->next=NULL;
    return revhead;
}
int main(){
    mylist *head;
    head=NULL;
    int inp;
    for(int i=0;i<10;i++){
        head=insert(head,i);
    }
    print(head);
    cout<<"reverse is"<<endl;
    print(reverselist(head));
    return 0;
}
