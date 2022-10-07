public class VariableDemo2{
	//主入口
	public static void main(String[] args){
		//1.基本用法
		//定义变量，在进行输出
		int a = 10;
		System.out.println(a);
		System.out.println(a);
		System.out.println(a);
		
		//2.变量参与计算
		int b = 30;
		int c = 20;
		System.out.println(b + c); //50
		
		//3.修改变量记录的值
		a = 50;
		System.out.println(a);
	}
}