/**
ֱ�Ӳ��������㷨
���Ӻ���ǰ�ҵ�����λ�ú���룩
����˼�룺ÿ����һ��������ļ�¼������˳�����С���뵽ǰ���Ѿ�������ֵ����еĺ���λ�ã��Ӻ���ǰ�ҵ�����λ�ú󣩣�ֱ��ȫ������������Ϊֹ
*/
import java.util.Scanner;
public class Test46{
	public static void main(String[] args){
		int[] nums = {34,4,56,17,90,65};//�����������
		//���ƱȽϵ�������
		for(int i=1;i<nums.length;i++){
			
			int temp = nums[i];//��¼������
			int j = 0;
			for(j=i-1;j>=0;j--){
				if(nums[j]>temp){
					nums[j+1] = nums[j];
				}else{
					break;
				}
			}
			if(nums[j+1]!=temp){
				nums[j+1] = temp;
			}
		}
		//��������
		for(int n : nums){
			System.out.println(n);
		}
	}
}