#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;

    }
};
void insertAtHead(Node* &head ,int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;}
void print(Node* &head){
    Node* temp = head;
    while(temp!= NULL){
        cout<< temp->data<<" ";
        temp =temp->next;

    }
    cout<<endl;

}
void insertAtTail(Node* tail ,int d){
Node* temp = new Node(d);
tail->next=temp;
tail = temp;
}

void insertAtPosition(Node* &head,Node* &tail,int position ,int d){
if(position == 1){

insertAtHead(head,d);
return;
}
Node* temp = head;
int cnt=1;
while(cnt<position){
    temp= temp->next;
    cnt++;

}
if (temp->next==NULL){
insertAtTail(tail,d);
return ;
}
//creating a node for d
 Node* nodetoinsert = new Node(d);
    nodetoinsert -> next = temp ->next;
    temp -> next = nodetoinsert;


}

int main(){

    Node* node1 = new Node(10);
     //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;
     Node* head = node1;
     Node* tail = node1;
     print(head);
     insertAtHead(head,12);
     print(head);
     insertAtTail(tail,28);
     print(head);
     insertAtPosition(head,tail,2, 22);
      print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail -> data << endl;
    return 0;

}