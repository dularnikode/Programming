import java.lang.*;
import java.lang.System;
//we can run the java file by on ubuntu terminal :java person.java
class person 
{
    //constructor can only be defined inside the class
    String name;
    int age;
    void eat(String ch)
    {
        System.out.println("like to eat "+ch);
    }
    person(String x,int y)  //constructor has no return type
    {
        System.out.println("my name is "+x);
        System.out.println("my age is "+y);

    }
    /*
    void talk()
    {
        System.out.println("my name is "+name);
        System.out.println("my age is "+age);
    }*/
    public static void main(String args[]) 
    { 
        /*
        person Keyur=new person();
        Keyur.name="Keyur";
        Keyur.age=21;
        Keyur.talk();
        Keyur.eat("paneer");
        

        person Dular=new person();
        Dular.name="Dular";
        Dular.age=21;
        Dular.talk();
        Dular.eat("chicken");
        */
        person kaju=new person("keyur",20);
        
    }
}
