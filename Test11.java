/**
	λ�����
*/
import java.util.Scanner;
public class Test11{
	public static void main(String[] args){
		System.out.println(~10);
		
		//�����⣺�������ٶȼ���8*4�����
		//int result = 8 * 4��
		// 0000 1000 8
		// 0010 0000 32
		System.out.println(8<<2);//���ļ����ٶ�
		//8 * 8
		// 8 << 3
		
		//40>>2 = 10
		//ͨ���������룬��ʼ�������������������ݽ���λ�ú����뽻��������ݡ�
		Scanner input = new Scanner(System.in);
		//System.out.println("�������һ����");
		//int a = input.nextInt();
		//System.out.println("������ڶ�����");
		//int b = input.nextInt();
		
		//(1)ͨ������������������
		//int c = a;
		//a = b;
		//b = c;
		//System.out.println("a="+a+",b="+b);
		//(2)��ͨ��������������ν�����������
		//��1��ͨ�����ʽ
		//a=1,b=2
		//a = a+b-(b=a);
		
		//(2)ͨ��+-����
		int a = 5;
		int b = 4;
		//a=a+b;
		//b=a-b;
		//a=a-b;
		
		//��3��ͨ���������������λ�����ķ��� ���
		a = a^b;
		System.out.println(a);
		b = a^b;
		System.out.println(b);
		a = a^b;
		System.out.println(a);
		
		//��4��
		System.out.println("a="+a+",b="+b);
		
		
		}
}