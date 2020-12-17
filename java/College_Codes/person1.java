import java.lang.*;
import java.lang.System;

public class person1
{
    private String name;
    private int age;
    public void setname(String name)
    {
        this.name=name;//this keyword is uesd for current class object
    }
    public void setage(int age) 
    {
        this.age=age;
    }
    public String getname()
    {
        return name;
    }
    public int getage()
    {
        return age;
    }
    
}
class demo
{    public static void main(String args[])
    {
        person1 p1=new person1();
        p1.setname("Dular");
        p1.setage(21);
        System.out.println("Name is "+p1.getname());
        System.out.println("Age is "+p1.getage());
    }
}