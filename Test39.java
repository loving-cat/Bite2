/**
	����ı���
*/
import java.util.Scanner;
public class Test39{
	public static void main(String[] args){
		
		int[] scores = {59,75,83,93,100};
		System.out.println("����ĳ��ȣ�"+scores.length);
		
		//����
		int len = scores.length;
		for(int i=0;i<len;i++){
			
			int score = scores[i];
			System.out.println(score);
		}
		System.out.println(scores);
		
		System.out.println("---------------");
		//forearch JDK1.5֮������������
		for(int x:scores){
			System.out.println(x);
		}
		System.out.println("------------");
		//���÷���
		//print(scores);
		//print2(59,75,83,93,100);
		//print3(null);
		print4(scores);
		
		//new�ؼ��ֱ�ʾ����һ�����飬
		int[] nums = new int[]{1,2,3,4,5};
	}
	
	public static void print(int[] x){
		int len = x.length;
		for(int i=0;i<len;i++){
			System.out.println(x[i]);
		}
	}
	
	//JDK1.5�ɱ����
	//�ɱ����ֻ���ǲ����б��ֵ����һ��
	//�ɱ������Ϊ����ʹ��
	public static void print2(int ...x){
		int len = x.length;
		for(int i=0;i<len;i++){
			System.out.println(x[i]);
		}
	}
	
	//����������쳣
	public static void print3(int[] x){
		// java.lang.NullPointerException
		// ��һ������Ϊnull��û�и�ֵ��ʱ������ȥ�����˸ñ��������Ժͷ���
		System.out.println("����ĳ���Ϊ��"+x.length);
	}
	//����������쳣,�����±�Խ��
	//java.lang.ArrayIndexOutOfBoundsException
	public static void print4(int[] x){
		for(int i=0;i<=x.length;i++){
			System.out.println(x[i]);
		}
		
	}
}