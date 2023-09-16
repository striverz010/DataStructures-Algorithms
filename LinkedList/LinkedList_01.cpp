#include<bits/stdc++.h>
using namespace std;

class ListNode{  //Creating  the structure for the linkedlist with data and pointer
public:
	int data;
	ListNode* next;

	ListNode(int data){
		this->data=data;
		next=nullptr;
	}

};
ListNode* head=nullptr; //declaring the head and tail for easier connecting the nodes;
ListNode* tail=nullptr;

void insert(int val){

	ListNode *newNode=new ListNode(val); //creating the new node

	if(head==nullptr){  //initial insertion
		head=newNode;
		tail=newNode;
	}
	else{
		tail->next=newNode; //inserting the nodes at the end of the linkedlist
		tail=tail->next;
	}

}

void print(){ //the function for printing the values of the linkedlist
	while(head){
		cout<<head->data<<"->";
		head=head->next;
	}
	cout<<"nullptr";
}

int main(){
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	print();
}