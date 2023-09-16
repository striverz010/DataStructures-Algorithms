#include<bits/stdc++.h>
using namespace std;
class ListNode{
public:
	int data;
	ListNode* next;
	ListNode(int data){
		this->data=data;
		this->next=nullptr;
	}

};

ListNode* head=nullptr;
ListNode* tail=nullptr;

void InsertAtTheBegining(int val){
	ListNode* newNode=new ListNode(val);

	if(head==nullptr){
		head=newNode;
		tail=newNode;	
	}
	else{
		newNode->next=head;
		head=newNode;

	}

}
void print(){

	while(head){
		cout<<head->data<<"\n";
		head=head->next;

	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		InsertAtTheBegining(n);
	}
	print();
	

}