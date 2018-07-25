import java.util.*;



class Node{
	int data;
	Node left;
	Node right;
}
class Bst{
	public Node getNewNode(int data){
		Node newNode = new Node();
		newNode.data = data;
		newNode.left = null;
		newNode.right = null;
		return newNode;
	}
	public Node insert(Node root, int data){
		if(root == null) return getNewNode(data);
		else if(data <= root.data) root.left = insert(root.left, data);
		else root.right = insert(root.right, data);

		return root;
	}
	public boolean search(Node root, int data){
		if (root == null) return false;
		else if (root.data == data) return true;
		else if (data <= root.data) return search(root.left, data);
		else return search(root.right, data);
	}

}



class BstApp{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Bst b = new Bst();
		Node root = new Node();
		root = null;
		root = b.insert(root, 4);
		root = b.insert(root, 5);
		root = b.insert(root, 3);
		root = b.insert(root, 1);
		root = b.insert(root, 10);
		root = b.insert(root, 12);
		root = b.insert(root, 14);
		root = b.insert(root, 6);
		root = b.insert(root, 7);
		root = b.insert(root, 9);
		root = b.insert(root, 11);
		System.out.println("Enter number to be search");
		int a = sc.nextInt();
		if(b.search(root, a)) System.out.println("Number Found");
		else System.out.println("Not Found!!!");
	
	}
}