/**
	do while ѭ���� ��ִ�У����жϣ�����ִ��һ��
	Java�׳���� 1��+2��+...+10!
*/
import java.util.Scanner;
public class Test25{
	public static void main(String[] args){
		
		int num = 0;//��¼�ܺ�
		int i = 1;
		do{
			int j = 1;
			int jc = 1;
			while(j<=i){
				jc *=j;
				j++;
			}
			num+=jc;
			i++;
		}while(i<=10);//ѭ������
		System.out.println(num);
	}
}