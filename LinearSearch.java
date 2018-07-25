import java.util.*;
class LinearSearch{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the no of elements");
		int flag = 0;
		int n = sc.nextInt();
		int a[] = new int[n];
		for (int i = 0; i<n; i++) {
			a[i] = sc.nextInt();
		}
		System.out.println("Enter the element to be search");
		int ele = sc.nextInt();
		for (int i = 0; i<n; i++) {
			if(a[i] == ele){
				System.out.println("element found at "+(i+1)+" position");
				flag = 1;
				break;
			}
		}
		if(flag == 0){
			System.out.println("Not Found!!!");
		}
	}
}
