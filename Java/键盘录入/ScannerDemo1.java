//1.导包，找到scanner这个类在哪
//书写注意：要写在类定义的上面
import java.util.Scanner;

public class ScannerDemo1{
	public static void main(String[] args){
		//2.创建对象，申明一下我准备开始用Scanner这个类
		Scanner sc = new Scanner(System.in);
		//3.接收数据
		//当程序运行之后，我们在键盘输入的数据就会被变量i给接收
		System.out.println("请输入一个数字：");
		int i = sc.nextInt();
		System.out.println(i);
	}
}