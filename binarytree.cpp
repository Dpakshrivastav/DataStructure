#include<iostream>
using namespace std;


struct BstNode{
	int data;

	BstNode* right;
	BstNode* left;
};
BstNode* getNewNode(int data){
	BstNode* newNode = new BstNode();
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;

}


BstNode* insert(BstNode* root, int data){
	if(root = NULL){
		root = getNewNode(data);
	}
	else if(data <= root->data){
		root->left = insert(root->left, data);
	}
	else{
		root->right = insert(root->right, data);	
	}
	return root;

}

bool Search(BstNode* root,int data) {
	if(root == NULL) return false;
	else if(root->data == data) return true;
	else if(data <= root->data) return Search(root->left,data);
	else return Search(root->right,data);
}



int main(){
	BstNode* root = NULL;
	root = insert(root, 10);
	root = insert(root, 15);
	root = insert(root, 12);
	root = insert(root, 20);
	root = insert(root, 16);
	root = insert(root, 25);
	root = insert(root, 30);
	root = insert(root, 17);
	root = insert(root, 19);
	root = insert(root, 45);
	root = insert(root, 50);
	root = insert(root, 20);
	root = insert(root, 85);
	// Ask user to enter a number.  
	int number;
	cout<<"Enter number be searched\n";
	cin>>number;
	//If number is found, print "FOUND"
	if(Search(root,number) == true) cout<<"Found\n";
	else cout<<"Not Found\n";
}

