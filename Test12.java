/**
	��Ŀ����������ȼ�
*/
import java.util.Scanner;
public class Test12{
	public static void main(String[] args){
		
		System.out.println("������һ���ɼ�");
		Scanner input = new Scanner(System.in);
		int score = input.nextInt();
		//String��ʾһ���ַ������ͣ����ǻ�����������
		String s = score>=60?"����":"�ҿ�";
		System.out.println(s);
		
		int a = 1;
		int b = 2;
		a = ++a + (b--) + (a-b) +b;
		//	2   +  2    +   1   +1
		System.out.println(a);
	}
}