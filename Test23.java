/**
  whileѭ��
  3.��ӡ100�������е�������ż����3�ı�����������100��
*/
import java.util.Scanner;
public class Test23{
	public static void main(String[] args){
		
		int i = 1;//����
		
		while(i<100){
			if(i%2==0){
				System.out.println("ż����"+i);
			}else{
				System.out.println("������"+i);
			}
			if(i%3==0){
				System.out.println("3�ı���:"+i);
			}
			i++;
		}
		
	}
}