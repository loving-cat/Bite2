/**
    switch��� 
	ֱ����JDK1.7���ַ��������жϣ�ȷ����������ִ�мӣ������ˣ���������
*/
import java.util.Scanner;
public class Test19{
	public static void main(String[] args){
		
		Scanner input = new Scanner(System.in);
		System.out.println("�������һ����");
		int num1 = input.nextInt();
		System.out.println("������ڶ�����");
		int num2 = input.nextInt();
		System.out.println("�������������+��-��*��/��");
		String op = input.next();
		switch(op){
			case "+":
				int i = 10;
				System.out.println("num1+num2="+(num1+num2));
				System.out.println("i="+i);
			break;

			case "-":
				i = 20;
				System.out.println("num1+num2="+(num1+num2));
				System.out.println("i="+i);
			break;
			case "*":
				System.out.println("num1+num2="+(num1+num2));
			break;
			case "/":
				System.out.println("num1+num2="+(num1+num2));
			break;
			default:
				System.out.println("����Ĳ���������");
				break;
		}
	}
}