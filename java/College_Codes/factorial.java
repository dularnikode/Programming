//import com.sun.java_cup.internal.runtime.Scanner;
import java.lang.*;
import java.lang.System;
class factorial
{
    static int fact(int num)
    {
        int f=1;
        while(num)
        {
            f=f*num;
            num=num-1;
        }
        
        return f;
    
    }
    public static void main(String args[])
    {
        int num=5;
        System.out.println("factorial of is"+fact(num));

    }
}