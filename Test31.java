/**
 ����Forѭ��
 ��ӡ��
			*
		   **
	      ***
		 ****
		***** 
*/
import java.util.Scanner;
public class Test31{
	public static void main(String[] args){
		
		//��ѭ����������
		for(int i=1;i<=5;i++){
			
			//��ѭ����������
			for(int j=5;j>0;j--){
				if(j<=i){
					System.out.print("*");
				}else{
					System.out.print("  ");
				}
			}
			System.out.println();
		}
	
	}
}