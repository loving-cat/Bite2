/**
	����Ķ��壺һ���ܹ��洢��ͬ�������͵����ݼ���
	����һ��Ҫ�г���
	�����е�ÿ�����ݳ�ΪԪ��
	����Ԫ�ص�λ�ô�0��ʼ
	�����е�λ�ó�Ϊ�±�
*/
import java.util.Scanner;
public class Test38{
	public static void main(String[] args){
		//��һ��
		int[] nums = new int [5];
		/**
		nums[0] = 1;
		nums[1] = 2;
		nums[2] = 3;
		nums[3] = 4;
		nums[4] = 5;
		*/
		for(int i=0;i<5;i++){
			nums[i] = i+1;
			System.out.println(nums);
		}
		
		//�ڶ���
		int[] nums2;//�����������壩
		nums2 = new int[5];
		
		//������
		int[] nums3 = new int[]{1,2,3,4,5};
		
		//������
		int[] nums4 = {1,2,3,4,5};
		//���е����鶼��һ�������ǣ�length
		System.out.println("����ĳ����ǣ�"+nums4.length);
	}
	
}