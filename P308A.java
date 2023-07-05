import java.util.Scanner;
/*
 * author: Mars_Coder
 * date: 06-07-2023
 * problem link: https://atcoder.jp/contests/abc308/tasks/abc308_a
 * note: while submitting, rename class name to Main if not!
 */
public class P308A{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int[] a = new int[8];
		for(int i = 0; i < 8; ++i){
			a[i] = sc.nextInt();
			if(i > 0 && a[i] < a[i - 1]){
				System.out.println("No");
				return;
			}
			if(a[i] % 25 != 0 || (a[i] < 100 || a[i] > 675)){
				System.out.println("No");
				return;
			}
		}
		System.out.println("Yes");
	}
}