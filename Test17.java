/**
	switch���
	��дһ����ʵ�����¹��ܣ�����1��2��3��4��5��6��7���ֱ��Ӧ����һ�������գ��е�����һ����
*/
import java.util.Scanner;
public class Test17{
	public static void main(String[] args){
		
		Scanner input = new Scanner(System.in);
		System.out.println("���������ڼ���");
		int day = input.nextInt();
		//switch�����ڵı��ʽ�ķ���ֵ������int/char/short/byte, 1.7��֧��String
		switch(day){
			
			case 1:
				System.out.println("����һ");
				break;
			case 2:
				System.out.println("���ڶ�");
				break;
			case 3:
				System.out.println("������");
				break;
			case 4:
				System.out.println("������");
				break;
			case 5:
				System.out.println("������");
				break;
			case 6:
				System.out.println("������");
				break;
			case 7:
				System.out.println("������");
				break;
			default:
				System.out.println("�����ϲ��ʺ��㣬��ػ��ǰ�");
				break;
		}
	}
}