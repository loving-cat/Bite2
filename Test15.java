/**	
	if����Ƕ�ף�2��
*/

import java.util.Scanner;
public class Test15{
	public static void main(String[] args){
		
		Scanner input = new Scanner(System.in);
		System.out.println("����һ����");
		int num1 = input.nextInt();
		System.out.println("����ڶ�����");
		int num2 = input.nextInt();
		if(num1>num2){
			System.out.println("��һ�������ڵڶ�����");
		}else if(num1<num2){
			System.out.println("��һ����С�ڵڶ�����");
		}else{
			System.out.println("��һ�������ڵڶ�����");
		}
		
		
	}
}