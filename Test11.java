/**
	位运算符
*/
import java.util.Scanner;
public class Test11{
	public static void main(String[] args){
		System.out.println(~10);
		
		//面试题：以最快的速度计算8*4结果？
		//int result = 8 * 4；
		// 0000 1000 8
		// 0010 0000 32
		System.out.println(8<<2);//最快的计算速度
		//8 * 8
		// 8 << 3
		
		//40>>2 = 10
		//通过键盘输入，初始化两个数将这两个数据交换位置后，输入交换后的数据。
		Scanner input = new Scanner(System.in);
		//System.out.println("请输入第一个数");
		//int a = input.nextInt();
		//System.out.println("请输入第二个数");
		//int b = input.nextInt();
		
		//(1)通过第三个变量来交换
		//int c = a;
		//a = b;
		//b = c;
		//System.out.println("a="+a+",b="+b);
		//(2)不通过第三个变量如何交换两个数？
		//（1）通过表达式
		//a=1,b=2
		//a = a+b-(b=a);
		
		//(2)通过+-计算
		int a = 5;
		int b = 4;
		//a=a+b;
		//b=a-b;
		//a=a-b;
		
		//（3）通过异或，两个数交换位置最快的方法 异或
		a = a^b;
		System.out.println(a);
		b = a^b;
		System.out.println(b);
		a = a^b;
		System.out.println(a);
		
		//（4）
		System.out.println("a="+a+",b="+b);
		
		
		}
}