/**
	if��֧���
	1������һ���ַ��жϴ�д��ĸ����Сд��ĸ�������ʾ��Ϣ
*/
import java.util.Scanner;
public class Test13{
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		System.out.println("������һ����ĸ��");
		int	c = input.nextInt();
		if(c>=65 && c<=90){
			System.out.println("���������һ����д��ĸ"+(char)c);
		}else {
			System.out.println("���������һ��Сд��ĸ"+(char)c);
		}
		
		//дһ�������ж�ĳһ���Ƿ�Ϊ���꣨��4���������ܱ�100�����ܱ�400�����������������ƽ��
		System.out.println("���������");
		int year = input.nextInt();
		if((year%4==0 && year%100!=0) || year%400==0){
			
			System.out.println("������");
		}else{
			System.out.println("ƽ��");
		}
	}
}