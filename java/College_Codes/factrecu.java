import java.lang.*;
import java.lang.System;
class factrecu
{
    static int fact(int num)
    {
        if (num==1){
            return 1;
        }
        return num*fact(num-1);
    }
    public static void main(String args[])
    {
        int n=5;
        System.out.println("Factorial is  : "+fact(n));

    }
}