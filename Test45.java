/**
	ѡ�������㷨
	ÿһ�˴Ӵ����������Ԫ����ѡ����С������󣩵�һ��Ԫ�أ�
	˳��������ź�������е����ֱ��ȫ�������������Ԫ�����ꡣ
	ѡ�������ǲ��ȶ������򷽷���
*/


import java.util.Scanner;
public class Test45{
	public static void main(String[] args){
	
		int[] nums = {34,4,56,17,90,5};//�����������
		int minIndex = 0;//���ڼ�¼ÿ�αȽϵ���Сֵ�±�
		//��������
		for(int i=0;i<nums.length-1;i++){
			minIndex = i;//ÿ�ּ���һ����Сֵ�±�
			
			for(int j=i+1;j<nums.length;j++){
				
				if(nums[minIndex]>nums[j]){
					minIndex = j;
					
				}
			}
			//�ж���Ҫ���������±��Ƿ�Ϊ�Լ�
			if(minIndex!=i){
				nums[minIndex] = nums[minIndex]+nums[i];
				nums[i] = nums[minIndex]-nums[i];
				nums[minIndex] = nums[minIndex]-nums[i];
			}
		}
		
		//��������
		for(int n:nums){
			System.out.println(n);
		}
		
	}
}
/*
34 4 56 17 90 65
4 34 56 17 90 65 ��һ�� 5��
4 17 56 34 90 65 �ڶ��� 4��
4 17 34 59 90 65 ������ 3��
4 17 34 59 90 65 ������ 2��
4 17 34 59 65 90 ������ 1��


*/