package college;
import java.lang.String;
import java.lang.System;

class demo
{
	public static void main(String args[])
	{
		student obj=new student();
		teacher obj2=new teacher();
		
		obj.printt1();
		obj.prints();
		obj2.printt2();
		int result;
		result=obj.add(10,20,30);
		System.out.println("add result :"+result);
		result=obj.add(10,20);
		System.out.println("add result :"+result);
		
	}
	
}
