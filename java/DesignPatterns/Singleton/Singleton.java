import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.io.ObjectStreamException;
import java.io.Serializable;
import java.lang.reflect.Constructor;
import java.util.concurrent.Executor;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

public class Singleton implements Cloneable{
    private static volatile Singleton soleInstance=null;

    private Singleton(){
        //overcoming reflection
        if(soleInstance !=null){
            throw new RuntimeException("Cannot create, please use getInstance()");
        }
        //
        System.out.println("creating...");
    }

    //need to make this synchronised to overcome asynchronous multiThreading
    public static Singleton getInstance(){
        //Double check locking
        if(soleInstance==null){
            synchronized(Singleton.class){
                if(soleInstance==null){
                    soleInstance=new Singleton();
                }                
            }
        }//this is lazy initalization."use when creating singleton instance is expencive"
        return soleInstance;
    }
    
    //read resolve method : to overcome serializationa and Deserialization
    private Object readResolve() throws ObjectStreamException{
        System.out.println("read resolve...");
        return soleInstance;
    }

    //for clone to work
    /*
    @Override
    protected Object clone() throws CloneNotSupportedException {
        // TODO Auto-generated method stub
        return super.clone();
    }
    */
}


class TestClass {
 
     public static void main(String[] args)throws Exception {
        // Singleton s1=Singleton.getInstance();
        // Singleton s2=Singleton.getInstance();

        // printg("s1",s1);
        // printg("S2",s2);

        //Reflection
        /*
       Class clazz = Class.forName("DesignPatterns.Singleton");
       Constructor<Singleton> ctor = clazz.getDeclaredConstructor();
       ctor.setAccessible(true);
       Singleton s3=ctor.newInstance();

       printg("s3",s3);
       */

       //Serialization/Deserialization ex: to do this Singleton class must implements Serializable
       /*
       ObjectOutputStream oos = new ObjectOutputStream(new FileOutputStream("/temp/s2.ser"));
       oos.writeObject(s2);
       ObjectInputStream ois = new ObjectInputStream(new FileInputStream("/temp/s2.ser"));
       Singleton s3 = (Singleton)ois.readObject();
       printg("s3",s3);
       */

       //Clone :to do this Singleton class must implements Clonable
       /*
      Singleton s3 = (Singleton) s2.clone();
      printg("s3",s3);
      */

      //multi-threaded access 
      /*
        ExecutorService service = Executors.newFixedThreadPool(2);
        service.submit(TestClass::useSinglton);
        service.submit(TestClass::useSinglton);

        service.shutdown();
        */
    }
    static void useSinglton(){
        Singleton singleton = Singleton.getInstance();
        printg("singleton",singleton);
    }

    static void printg(String name,Singleton object){
        System.out.println(String.format("object: %s , Hashcode: %d",name,object.hashCode()));
    }
}