//1.导包
import java.util.Scanner;

public class ScannerTest{
	public static void main(String[] args){
		//创建对象
		Scanner sc = new Scanner(System.in);
		
		//接收第一个数字
		System.out.println("请输入第一个数字：");
		int number1 = sc.nextInt();
		//接收第二个数字
		System.out.println("请输入第二个数字：");
		int number2 = sc.nextInt();
		
		//输出之和
		System.out.println(number1 + number2);
	}
}