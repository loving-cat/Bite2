/**
	���ַ����ң��۰���ң���ǰ��ʵ���Ѿ��ź���������У�
	ͨ���������ҵ�Ԫ�����м�����ֵ��Ӧ��Ԫ�ؽ��бȽϣ��������м�����ֵ��Ӧ��Ԫ�أ�
	ȥ�Ұ벿�ֲ��ң�����ȥ��벿�ֲ��ҡ�
	�������ơ�ֱ���ҵ�λ�ã��Ҳ�������һ��������
*/
import java.util.Scanner;
public class Test47{
	public static void main(String[] args){
		
		//���뱣֤�����������
		int[] num = {10,20,50,65,88,90};
		int index = binarySearch(num,90);
		System.out.println(index);
	}
	//���ֲ����㷨
	public static int binarySearch(int[] num,int key){
		int start = 0;//��ʼ�±�
		int end = num.length-1;//�����±�
		
		while(start<=end){
			int middle = (start+end)/2;//>>>1
			if(num[middle]>key){
				end = middle-1;
			}else if(num[middle]<key){
				start = middle+1;
			}else{
				return middle;
			}
		}
		return -1;
	}
}