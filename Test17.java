/**
	switch语句
	编写一程序实现如下功能：输入1，2，3，4，5，6，7（分别对应星期一至星期日）中的任意一个数
*/
import java.util.Scanner;
public class Test17{
	public static void main(String[] args){
		
		Scanner input = new Scanner(System.in);
		System.out.println("今天是星期几？");
		int day = input.nextInt();
		//switch括号内的表达式的返回值必须是int/char/short/byte, 1.7后支持String
		switch(day){
			
			case 1:
				System.out.println("星期一");
				break;
			case 2:
				System.out.println("星期二");
				break;
			case 3:
				System.out.println("星期三");
				break;
			case 4:
				System.out.println("星期四");
				break;
			case 5:
				System.out.println("星期五");
				break;
			case 6:
				System.out.println("星期六");
				break;
			case 7:
				System.out.println("星期天");
				break;
			default:
				System.out.println("地球上不适合你，请回火星吧");
				break;
		}
	}
}