/**
	������������
	�����ķ���ֵ��2�����ݴ���Ĳ���������ӡֱ��������
*/
import java.util.Scanner;
public class Test36{
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		System.out.println("�����������ε�����");
		int num = input.nextInt();
		printTriangle(num);
	}
	
	public static void printTriangle(int line){
		//��ѭ����������
		for(int i=1;i<=line;i++){
			
			//��ѭ������ո�
			for(int j=i;j<line;j++){
				System.out.print(" ");
			}
			//��ѭ�����*
			for(int a=1;a<=i*2-1;a++){
				System.out.print("*");
			}
			System.out.println();
		}
	}
}