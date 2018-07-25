#include<iostream>
#include<string>
using namespace std;
class list
{
public:
	string name;
	int rollNo;
};
struct Node{
	list data;
	Node* ptr;
};
Node* getNewNode(list data){
	Node* newNode = new Node();
	newNode->data.name = data.name;
	newNode->data.rollNo = data.rollNo;
	newNode->ptr = NULL;
	return newNode;
}

Node* insert(list data, Node* root){
	if(root == NULL)
		root = getNewNode(data);
	else if(data.rollNo>=0)
		root->ptr = insert(data, root->ptr); 
	return root;
}
bool search(Node* root, list data){
	if (root == NULL) return false;
	else if ((root->data.name == data.name)&&(root->data.rollNo = data.rollNo)) return true;
	else return search(root->ptr, data);
}
int main(){
	Node* root = NULL;
	list l[100];
	l[0].name = "deepak";
	l[0].rollNo = 11162545;
	l[1].name = "deepak";
	l[1].rollNo = 11162546;	
	l[2].name = "deepak";
	l[2].rollNo = 11162547;	
	l[3].name = "deepak";
	l[3].rollNo = 11162548;
	root = insert(l[0], root);
	root = insert(l[1], root);
	root = insert(l[2], root);
	root = insert(l[3], root);
	cout<<"enter name and rollNo to be search";
	cin>>l[4].name;
	cin>>l[4].rollNo;
	if(search(root, l[4]))
		cout<<"Element Found!";
	else
		cout<<"NOT FOUND!!";
}