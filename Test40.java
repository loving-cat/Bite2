/**
 ����ʾ���� 1.������Ϸ���Ӽ�������������һ�����ݣ��ж��������Ƿ��������
*/
import java.util.Scanner;
import java.util.Random; //����α�����
public class Test40{
	public static void main(String[] args){
		
		int[] nums = new int[10];
		int len = nums.length;
		Random r = new Random();//����һ����������������Ĺ���
		for(int i=0;i<len;i++){
			nums[i] = r.nextInt(50);
		}
		System.out.println(r);
		Scanner input = new Scanner(System.in);
		System.out.println("��������Ҫ�µ�������50���ڣ�");
		int userNum = input.nextInt();
		
		boolean flag =false;
		for(int x:nums){
			if(userNum==x){
				flag=true;
				break;
			}
		}
		
		if(flag){
			System.out.println("��ϲ��¶���");
		}else{
			System.out.println("û�¶԰�����B");
		}
	}
}