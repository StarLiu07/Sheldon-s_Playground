package com.itheima.arithmeticoperator;

public class ArithmeicoperatorDemo2 {
    public static void main(String[] args) {
        //结论：
        //1.整数参与计算，结果只能得到整数
        //2.小数参与计算，结果有可能不精确
        //除法
        System.out.println(10 / 2); //5
        System.out.println(10 / 3); //3
        System.out.println(10.0 / 3);

        //取模
        System.out.println(10 % 2); //0
        System.out.println(10 % 3); //1

        //应用场景
        //1.判断A是否可以被B整除
        //2.判断A是否为偶数 A % 2
        //......

    }
}
