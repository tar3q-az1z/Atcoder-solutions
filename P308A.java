import java.util.Scanner;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;

/*
 * author: Mars_Coder
 * date: 06-07-2023
 * problem link: https://atcoder.jp/contests/abc308/tasks/abc308_a
 * note: while submitting, rename class name to Main if not!
 */
public class P308A{
	public static void main(String[] args) throws IOException {
		FastIO io = new FastIO();
		int[] a = new int[8];
		for(int i = 0; i < 8; ++i){
			a[i] = io.nextInt();
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
	static class FastIO{
		BufferedReader br;
		StringTokenizer st;
		public FastIO(){
			br = new BufferedReader(new InputStreamReader(System.in));
		}
		String next(){
			while(st == null || !st.hasMoreElements()){
				try{
					st = new StringTokenizer(br.readLine());
				}catch(IOException e){
					e.printStackTrace();
				}
			}
			return st.nextToken();
		}
		int nextInt(){return Integer.parseInt(next());}
		Long nextLong(){return Long.parseLong(next());}
		double nextDouble(){return Double.parseDouble(next());}
		String nextLine(){
			String str = "";
			try{
				if(st.hasMoreTokens()) str = st.nextToken("\n");
				else str = br.readLine();
			}catch(IOException e){
				e.printStackTrace();
			}
			return str;
		}
	}
}