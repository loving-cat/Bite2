/**
	forѭ��
	���10��쳲�������Fivonacci�����У�1 1 2 3 5 8 13 21 34 55.
	���ص㣺��1��2������ֵΪ1���ӵ���������ʼ����������ǰ��������֮�ͣ�
*/
import java.util.Scanner;
public class Test28{
	public static void main(String[] args){
			int n1 = 1;
			int n2 = 1;
			int next = 0;
			System.out.print(n1+" "+n2+" ");
			for(int i=0;i<8;i++){
				next = n1 + n2;
				System.out.print(next+" ");
				n1 = n2;
				n2 = next;
			}
		}
	}
