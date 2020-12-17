//abstract method : are the method which have name and signature but no body
//abstract class : are the class which have abstract method and concrete method


import java.lang.String;
abstract class myclass {
	
	abstract void cal(double x);
}

class child1 extends myclass
{
	void cal(double x)
	{
		System.out.println("square is :"+x*x);
	}
}

class child2 extends myclass
{
	void cal(double x) 
	{
	System.out.println("square root is "+Math.sqrt(x));
	}
}

class child3 extends myclass
{
	void cal(double x)
	{
		System.out.println("cube is "+x*x*x);
	}
}

class demo
{
	public static void main(String args[])
	{
		child1 obj1=new child1();
		child2 obj2=new child2();
		child3 obj3=new child3();
		
		obj1.cal(25);
		obj2.cal(25);
		obj3.cal(25);
	}
}
