/**	
	if语句的嵌套（2）
*/

import java.util.Scanner;
public class Test15{
	public static void main(String[] args){
		
		Scanner input = new Scanner(System.in);
		System.out.println("输入一个数");
		int num1 = input.nextInt();
		System.out.println("输入第二个数");
		int num2 = input.nextInt();
		if(num1>num2){
			System.out.println("第一个数大于第二个数");
		}else if(num1<num2){
			System.out.println("第一个数小于第二个数");
		}else{
			System.out.println("第一个数等于第二个数");
		}
		
		
	}
}